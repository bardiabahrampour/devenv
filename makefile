INCLDIR := include
BINDIR := bin
GCC := g++
CPPFLAGS := -Iinclude -MMD -MP
OBJDIR := obj
SRCDIR := src
#if target platform is windows, else: change the Target to devenv
TARGET =$(BINDIR)/devenv.exe
SRC := $(wildcard $(SRCDIR)/*.cc)
OBJFILES := $(patsubst src/%.cc,obj/%.o,$(SRC))
all: $(TARGET)

.PHONY: all clean

$(TARGET): $(OBJFILES)
	$(GCC) $(CPPFLAGS) -o $@ $^

$(OBJFILES): $(OBJDIR) | $(BINDIR)
	$(GCC) -Wall -v $(CPPFLAGS) -c $(SRC)
	move *.o obj/
	move *.d obj/

$(OBJDIR):
	mkdir $@

$(BINDIR):
	mkdir $@

clean:
	del  $(BINDIR) $(OBJDIR)
	rmdir $(BINDIR) $(OBJDIR)

-include $(OBJFILES:.o=.d)
