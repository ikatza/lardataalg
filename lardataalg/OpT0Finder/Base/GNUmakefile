#
# This is an example GNUmakefile for my packages
#

# specific names for this package
DICT  = lardataalg_OpT0FinderBaseDict
SHLIB = liblardataalg_OpT0FinderBase.so
SOURCES = $(filter-out $(DICT).cxx, $(wildcard *.cxx))
FMWK_HEADERS = LinkDef.h $(DICT).h classes.h
HEADERS = $(filter-out $(FMWK_HEADERS), $(wildcard *.h))
OBJECTS = $(SOURCES:.cxx=.o)

# include options for this package
INCFLAGS  = -I.                       #Include itself
#INCFLAGS += $(shell basictool-config --includes) #-I/home/lsimons/scratch/LArLite_LArSoft_Int/larlite/UserDev/BasicTool 
INCFLAGS += -I$(LARLITE_USERDEVDIR)/lardataalg
INCFLAGS += -I$(LARLITE_USERDEVDIR)/larcorealg
INCFLAGS += -I$(FHICLCPP_INC) # Incured by fhiclcpp/ParameterSet
INCFLAGS += -I$(CETLIB_INC) # Incured by fhiclcpp/ParameterSet
INCFLAGS += -I$(LARCOREOBJ_INC) # Incured by larcorealg/Geometry/GeometryCore.h
INCFLAGS += -I$(CLHEP_INC) # Incured by larcorealg/Geometry/WireGeo.h

# platform-specific options
OSNAME          = $(shell uname -s)
HOST            = $(shell uname -n)
OSNAMEMODE      = $(OSNAME)

# call kernel specific compiler setup
include $(LARLITE_BASEDIR)/Makefile/Makefile.${OSNAME}

LDFLAGS += $(shell basictool-config --libs) # -L/home/lsimons/scratch/LArLite_LArSoft_Int/larlite/lib -lBasicTool_LArPyBackend -lBasicTool_EMShowerTools -lBasicTool_GeoAlgo -lBasicTool_FhiclLite -BasicTool_TreeGraph

# call the common GNUmakefile
include $(LARLITE_BASEDIR)/Makefile/GNUmakefile.CORE
