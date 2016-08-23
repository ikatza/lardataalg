# Include your header file location
CXXFLAGS += -I$(LARLITE_USERDEVDIR)/lardataalg/
#CXXFLAGS += -I. $(shell root-config --cflags) -g
CXXFLAGS += -I. -pthread -std=c++14 -Wno-deprecated-declarations -m64 -I/products/root/v6_06_04b/Linux64bit+2.6-2.12-e10-prof/include -g
CXXFLAGS += -pedantic -Wno-unused-local-typedefs
CXXFLAGS += -I$(FHICLCPP_INC)
CXXFLAGS += -I$(CETLIB_INC)
CXXFLAGS += -I$(LARLITE_COREDIR)
CXXFLAGS += -I$(LARLITE_USERDEVDIR)/larcorealg/
CXXFLAGS += -I$(LARLITE_USERDEVDIR)/BasicTool/
CXXFLAGS += -I$(LARLITE_COREDIR)/DataFormat

# Include your shared object lib location
LDFLAGS += $(shell larlite-config --libs)
LDFLAGS += $(shell basictool-config --libs)
LDFLAGS += $(shell root-config --libs) -lPhysics -lMatrix -g
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_OpT0FinderApp
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_OpT0FinderBase 
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_OpT0PhotonLibrary
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_OpT0FinderAlgorithms
LDFLAGS += -L$(FHICLCPP_LIB) -lfhiclcpp
LDFLAGS += -L$(CETLIB_LIB) -lcetlib

# platform-specific options
OSNAME = $(shell uname -s)
include $(LARLITE_BASEDIR)/Makefile/Makefile.${OSNAME}

# Add your program below with a space after the previous one.
# This makefile compiles all binaries specified below.
PROGRAMS = example

all:		$(PROGRAMS)

$(PROGRAMS):
	@echo '<<compiling' $@'>>'
	@$(CXX) $@.cc -o $@ $(CXXFLAGS) $(LDFLAGS)
	@rm -rf *.dSYM
clean:	
	rm -f $(PROGRAMS)
