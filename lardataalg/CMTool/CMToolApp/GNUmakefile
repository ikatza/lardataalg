#
# This is an example GNUmakefile for CMToolBase package
#

# specific names for this package
DICT  = CMToolAppCint
SHLIB = liblardataalg_CMToolApp.so
SOURCES = $(filter-out $(DICT).cxx, $(wildcard *.cxx))
FMWK_HEADERS = LinkDef.h $(DICT).h
HEADERS = $(filter-out $(FMWK_HEADERS), $(wildcard *.h))
OBJECTS = $(SOURCES:.cxx=.o)

# include options for this package
INCFLAGS  = -I.                       #Include itself
INCFLAGS += $(shell larlite-config --includes)
INCFLAGS += $(shell recotool-config --includes)
INCFLAGS += -I$(LARLITE_USERDEVDIR)/lardataalg/ClusterRecoUtil/Alg

# platform-specific options
OSNAME          = $(shell uname -s)
HOST            = $(shell uname -n)
OSNAMEMODE      = $(OSNAME)

CINTFLAGS += -p

LDFLAGS += $(shell larlite-config --libs)
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_CMTAlgMerge
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_CMTAlgMatch
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_CMTAlgPriority
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_CMToolBase
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_ClusterRecoUtilBase
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_ClusterRecoUtilAlg
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_Cluster3DRecoUtilBase
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_Cluster3DRecoUtilAlg

include $(LARLITE_BASEDIR)/Makefile/Makefile.${OSNAME}

# call the common GNUmakefile
include $(LARLITE_BASEDIR)/Makefile/GNUmakefile.CORE



