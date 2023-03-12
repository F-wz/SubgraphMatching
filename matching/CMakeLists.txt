set(SUBGRAPH_MATCHING_FILE_LIST
        matchingcommand.cpp
        FilterVertices.cpp
        BuildTable.cpp
        GenerateQueryPlan.cpp
        EvaluateQuery.cpp
        GenerateFilteringPlan.cpp)

set(SUBGRAPH_MATCHING_GRAPH_CONVERTER_FILE_LIST
        GraphConverter.cpp)

add_library(sub_graph_matching_algorithems STATIC ${SUBGRAPH_MATCHING_FILE_LIST})
target_link_libraries(sub_graph_matching_algorithems subgraph_matching_graph subgraph_matching_utility)

add_library(subgraph_matching_analysis STATIC subgraph_matching_analysis.cpp)
target_link_libraries(subgraph_matching_analysis sub_graph_matching_algorithems)

add_executable(SubgraphMatching.out StudyPerformance.cpp)
target_link_libraries(SubgraphMatching.out subgraph_matching_graph subgraph_matching_utility sub_graph_matching_algorithems subgraph_matching_analysis)

add_executable(GraphConverter.out ${SUBGRAPH_MATCHING_GRAPH_CONVERTER_FILE_LIST})
target_link_libraries(GraphConverter.out subgraph_matching_graph subgraph_matching_utility)

add_executable(EdgeListConverter.out EdgeListToCSR.cpp)
add_executable(ReassignLabel ReassignLabel.cpp)
add_executable(SelectEdge SelectEdge.cpp)