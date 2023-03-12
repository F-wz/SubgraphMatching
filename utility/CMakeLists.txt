set(SUBGRAPH_MATCHING_UTILITY_SRC
        graphoperations.cpp
        commandparser.cpp
        computesetintersection.cpp
        bitsetoperation.cpp
        han/intersection_algos.cpp
        han/utils/util.cpp)

add_library(subgraph_matching_utility STATIC ${SUBGRAPH_MATCHING_UTILITY_SRC})