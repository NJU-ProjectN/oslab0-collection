include $(AM_HOME)/Makefile.check
.PHONY: all run clean latest $(ALL)

ALL = $(basename $(notdir $(shell find . -maxdepth 1 -mindepth 1 -type d)))
MAKEFILES = $(addsuffix /Makefile, $(ALL))
all: $(MAKEFILES)
	@echo "" $(ALL)

$(ALL): %: %/Makefile

%/Makefile: latest
	@/bin/echo -e 'NAME = $(@D)\nSRCS = $$(shell find . -name '*.c')\nLIBS += klib\ninclude $$(AM_HOME)/Makefile.app' > $@
	-@$(MAKE) -C $(@D) -s ARCH=$(ARCH) $(MAKECMDGOALS)

#cancel rules included by $(AM_HOME)/Makefile.check
image: ;
default $(MAKECMDGOALS): all;

clean: 
	-rm -rf $(MAKEFILES)
	-find . -maxdepth 2 -mindepth 2 -type d -name "build" | xargs rm -rf

latest:
