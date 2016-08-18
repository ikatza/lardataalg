#
# This is an example GNUmakefile for my packages
#

# specific names for this package
DICT  = lardataalg_Cluster3DRecoUtilAlgDict
SHLIB = liblardataalg_Cluster3DRecoUtilAlg.so
SOURCES = $(filter-out $(DICT).cxx, $(wildcard *.cxx))
FMWK_HEADERS = LinkDef.h $(DICT).h classes.h
HEADERS = $(filter-out $(FMWK_HEADERS), $(wildcard *.h))
OBJECTS = $(SOURCES:.cxx=.o)

# include options for this package
INCFLAGS  = -I.                      #Include itself
INCFLAGS += $(shell larlite-config --includes)
INCFLAGS += $(shell recotool-config --includes)
INCFLAGS += -I../Base #Include one layer up

# Add -p flag to CINT 
CINTFLAGS += -p

# platform-specific options
OSNAME          = $(shell uname -s)
HOST            = $(shell uname -n)
OSNAMEMODE      = $(OSNAME)

# linker flags
LDFLAGS += $(shell larlite-config --libs)
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_Cluster3DRecoUtilBase

include $(LARLITE_BASEDIR)/Makefile/Makefile.${OSNAME}

# call the common GNUmakefile
include $(LARLITE_BASEDIR)/Makefile/GNUmakefile.CORE

