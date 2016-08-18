#
# This is an example GNUmakefile for CMToolBase package
#

# specific names for this package
DICT  = lardataalg_CMTAlgMergeDict
SHLIB = liblardataalg_CMTAlgMerge.so
SOURCES = $(filter-out $(DICT).cxx, $(wildcard *.cxx))
FMWK_HEADERS = LinkDef.h $(DICT).h
HEADERS = $(filter-out $(FMWK_HEADERS), $(wildcard *.h))
OBJECTS = $(SOURCES:.cxx=.o)

# include options for this package
INCFLAGS  = -I.                       #Include itself
INCFLAGS += $(shell larlite-config --includes)
INCFLAGS += $(shell recotool-config --includes)
INCFLAGS += -I../../ClusterRecoUtil/Alg

# platform-specific options
OSNAME          = $(shell uname -s)
HOST            = $(shell uname -n)
OSNAMEMODE      = $(OSNAME)

CINTFLAGS += -p
include $(LARLITE_BASEDIR)/Makefile/Makefile.${OSNAME}

LDFLAGS += $(shell larlite-config --libs)
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_CMToolBase
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_ClusterRecoUtilBase
LDFLAGS += -L$(LARLITE_LIBDIR) -llardataalg_ClusterRecoUtilAlg

# call the common GNUmakefile
include $(LARLITE_BASEDIR)/Makefile/GNUmakefile.CORE



