DEPLOYMENT= OreSatDev
ARCH= arm-hf-linux
HOST= debian 
IP= 192.168.13.5
MAKEFLAGS += --silent
ORESAT_ROOT= ../..
CARD= c3

.PHONY: all impl gds xc cp

all:
#	echo "bash -c oresat-configs fw-files $(CARD) -d gen"
#	bash -c oresat-configs fw-files $(CARD) -d gen
	#. $(ORESAT_ROOT)/oresat-venv/bin/activate; oresat-configs fw-files $(CARD) -d Components/CANopenManager/
	fprime-util build

impl:
	fprime-util impl

gds:
	fprime-gds -n --dictionary build-artifacts/$(ARCH)/$(DEPLOYMENT)/dict/$(DEPLOYMENT)TopologyAppDictionary.xml --ip-client --ip-address $(IP)

xc: 
	fprime-util build $(ARCH) 

cp:
	scp -r build-artifacts/$(ARCH)/$(DEPLOYMENT)/ debian@$(IP):~

xp: 
	fprime-util build $(ARCH) 
	scp -r build-artifacts/$(ARCH)/$(DEPLOYMENT)/ debian@$(IP):~

#clean:
#	@rm -rf $(BUILD_DIR)/*
