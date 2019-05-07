ARCH_lowercase = $(shell echo $(ARCH) | tr A-Z a-z)

rv32_isa_tests += isa/rv32ui/addiu.S
ifneq (,$(findstring m,$(ARCH_lowercase)))
rv32_isa_tests += isa/rv32um/mulhu.S        
endif ## ifeq (m,$(findstring m,$(ARCH_lowercase)))