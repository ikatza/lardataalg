# define ROOTLIB

set( ROOTLIB -L$ENV{ROOTSYS}/lib -lCore -lRIO -lNet -lHist -lGraf -lGraf3d -lGpad -lTree -lRint -lPostscript -lMatrix -lPhysics -lMathCore -lThread -pthread -lm -ldl)

link_libraries( ${LIB_NAME} -L$ENV{BOOST_LIB} ${ROOTLIB} )

cet_make( LIBRARIES
          ${LARCORE}
          NO_DICTIONARY )

art_dictionary( DICTIONARY_LIBRARIES lardataalg_ClusterRecoUtil_Base )

install_headers()
install_source()

