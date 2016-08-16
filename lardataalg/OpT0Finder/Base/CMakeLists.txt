# define ROOTLIB
set( ROOTLIB -L$ENV{ROOTSYS}/lib -lCore -lRIO -lNet -lHist -lGraf -lGraf3d -lGpad -lTree -lRint -lPostscript -lMatrix -lPhysics -lMathCore -lThread -pthread -lm -ldl)

link_libraries( ${LIB_NAME} -L$ENV{BOOST_LIB} ${ROOTLIB} )

cet_make( LIBRARIES canvas_Persistency_Common
                    larcoreobj_GeoAlgo
                    lardataalg_PhotonLibrary
		    ${ROOT_BASIC_LIB_LIST}
		    ${FHICLCPP}
                    ${CETLIB}
                    NO_DICTIONARY )

art_dictionary( DICTIONARY_LIBRARIES lardataalg_OpT0Finder_Base )


install_headers()
install_source()

