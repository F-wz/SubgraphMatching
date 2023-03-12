//
// Created by ssunah on 12/3/18.
//

#include <vector>

#include "subgraph_matching_graph/graph.h"


#define NANOSECTOSEC(elapsed_time) ((elapsed_time)/(double)1000000000)
#define BYTESTOMB(memory_cost) ((memory_cost)/(double)(1024 * 1024))

namespace subgraph_matching {

size_t enumerate(Graph* data_graph, Graph* query_graph, Edges*** edge_matrix, ui** candidates, ui* candidates_count,
                ui* matching_order, size_t output_limit);

void spectrum_analysis(Graph* data_graph, Graph* query_graph, Edges*** edge_matrix, ui** candidates, ui* candidates_count,
                       size_t output_limit, std::vector<std::vector<ui>>& spectrum, size_t time_limit_in_sec);

};