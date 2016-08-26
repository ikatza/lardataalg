#
# This is an example GNUmakefile for my packages
#

# specific names for this package
DICT  = lardataalg_ShowerRecoAppDict
SHLIB = liblardataalg_ShowerRecoApp.so
SOURCES = $(filter-out $(DICT).cxx, $(wildcard *.cxx))
FMWK_HEADERS = LinkDef.h $(DICT).h
HEADERS = $(filter-out $(FMWK_HEADERS), $(wildcard *.h))
OBJECTS = $(SOURCES:.cxx=.o)

# include options for this package
INCFLAGS = -I.                       #Include itself
INCFLAGS += $(shell basictool-config --includes)
INCFLAGS += $(shell larlite-config --includes)
INCFLAGS += $(shell recotool-config --includes)
INCFLAGS += -I$(LARLITE_USERDEVDIR)/lardataalg/ClusterRecoUtil/Alg
INCFLAGS += -I$(LARLITE_USERDEVDIR)/lardataalg/

# platform-specific options
OSNAME          = $(shell uname -s)
HOST            = $(shell uname -n)
OSNAMEMODE      = $(OSNAME)

# CINT flag
CINTFLAGS += "-p"

LDFLAGS += $(shell larlite-config --libs)
LDFLAGS += $(shell basictool-config --libs)
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_ShowerRecoProtoShower
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_ShowerRecoAlgo
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_ShowerRecoBase
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_AnalysisAlg
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_MCComp
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_CMTAlgMatch
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_CMToolBase
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_ClusterRecoUtilBase
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_Cluster3DRecoUtilBase
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_ClusterRecoUtilAlg
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_Cluster3DRecoUtilAlg

include $(LARLITE_BASEDIR)/Makefile/Makefile.${OSNAME}

# call the common GNUmakefile
include $(LARLITE_BASEDIR)/Makefile/GNUmakefile.CORE



