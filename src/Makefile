CC ?= cc

OBJECT=\
	siphash.o\

.PHONY: all
all: $(OBJECT)

ifeq ($(V),1)
Q =
msg =
else
Q = @
msg = @printf '  %-8s %s%s\n' "$(1)" "$(notdir $(2))" "$(if $(3), $(3))";
MAKEFLAGS += --no-print-directory
endif

%.o: %.c
	$(call msg,CC,$@)
	$(Q)$(CC) $(CFLAGS) $(INCLUDES) -c $(filter %.c,$^) -o $@

.PHONY: clean
clean:
	$(call msg,CLEAN)
	$(Q)rm -f $(OBJECT)
