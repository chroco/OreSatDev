DEPLOYMENT= OreSatDev
ARCH= arm-hf-linux
HOST= debian 
LOC_IP= 127.0.0.1
REM_IP= 192.168.13.5
MAKEFLAGS += --silent
ORESAT_ROOT= ../..
CARD= c3

.PHONY: all impl lgds rgds xc xccp

all:
#	echo "bash -c oresat-configs fw-files $(CARD) -d gen"
#	bash -c oresat-configs fw-files $(CARD) -d gen
	. $(ORESAT_ROOT)/oresat-venv/bin/activate; oresat-configs fw-files $(CARD) -d Components/CANopenManager/
	fprime-util build

impl:
	fprime-util impl

lgds:
	fprime-gds -n --dictionary build-artifacts/$(ARCH)/$(DEPLOYMENT)/dict/$(DEPLOYMENT)TopologyAppDictionary.xml \
	--ip-client --ip-address $(LOC_IP)

rgds:
	fprime-gds -n --dictionary build-artifacts/$(ARCH)/$(DEPLOYMENT)/dict/$(DEPLOYMENT)TopologyAppDictionary.xml \
	--ip-client --ip-address $(REM_IP)

xc: 
	fprime-util build $(ARCH) 

cp:
	scp -r build-artifacts/$(ARCH)/$(DEPLOYMENT)/ debian@$(REM_IP):~

xccp: xc cp
#	fprime-util build $(ARCH) 
#	scp -r build-artifacts/$(ARCH)/$(DEPLOYMENT)/ debian@$(REM_IP):~

#clean:
#	@rm -rf $(BUILD_DIR)/*
