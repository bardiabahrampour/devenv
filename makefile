INCLDIR := include
BINDIR := bin
CXX := g++
CPPFLAGS := -Iinclude -MMD -MP
OBJDIR := obj
SRCDIR := src
#if target platform is windows, else: change the Target to devenv
TARGET =$(BINDIR)/devenv.exe
SRC := $(wildcard $(SRCDIR)/*.cpp)
OBJFILES := $(patsubst src/%.cpp,obj/%.o,$(SRC))
all: $(TARGET)

.PHONY: all clean

$(TARGET): $(OBJFILES)
	$(CXX) $(CPPFLAGS) -o $@ $^

$(OBJFILES): $(OBJDIR) | $(BINDIR)
	$(CXX) -Wall -v $(CPPFLAGS) -c $(SRC)
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
