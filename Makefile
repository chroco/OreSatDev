DEPLOYMENT= OreSatDev
ARCH= arm-hf-linux
HOST= debian 
IP= 192.168.13.2
MAKEFLAGS += --silent

.PHONY: all impl gds xc cp

all:
	fprime-util build

impl:
	fprime-util impl

gds:
	fprime-gds -n --dictionary build-artifacts/$(ARCH)/$(DEPLOYMENT)/dict/$(DEPLOYMENT)TopologyAppDictionary.xml --ip-client --ip-address $(IP)

xc: 
	fprime-util build $(ARCH) 

cp:
	scp -r build-artifacts/$(ARCH)/$(DEPLOYMENT)/ debian@$(IP):~

#clean:
#	@rm -rf $(BUILD_DIR)/*
