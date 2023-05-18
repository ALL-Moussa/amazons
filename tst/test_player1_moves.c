#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "../src/graph.h"
#include "../src/move.h"
#include "../src/moteur.h"
#include "../src/server_functions.h"
#include <dlfcn.h>
extern struct graph_t * initialize_graph(unsigned int length);
extern void free_graph(struct graph_t* g);

void test_available_dst_all(){
     printf("-----Started Testing available_dst---------- \n");
    unsigned int size=8;
    struct graph_t* graph = initialize_graph(size);
    enum dir_t DIR_NORTH=1, DIR_NE=2, DIR_WEST=3,  DIR_SE=4, DIR_SOUTH=5, DIR_SW=6, DIR_EAST=7,  DIR_NW=8;
    struct player player;
    player.num_queens=0;

    unsigned int position=0;
    unsigned int* t=available_dst(graph, DIR_NORTH, position, player);
    assert(t[0]==0);
    printf("\033[32mTest 1/8 PASSED\033[0m\n");
    free(t);
    t=available_dst(graph, DIR_SOUTH, position, player);
    assert(t[0]==size-1);
    assert(t[1]==position+size);
    assert(t[2]==position+size*2);
    assert(t[3]==position+size*3);
    printf("\033[32mTest 2/8 PASSED\033[0m\n");
    free(t);
    t=available_dst(graph, DIR_EAST, position, player);
    assert(t[0]==size-1);
    assert(t[1]==position+1);
    assert(t[2]==position+2);
    assert(t[3]==position+3);
    free(t);
    printf("\033[32mTest 3/8 PASSED\033[0m\n");
    t=available_dst(graph, DIR_SE, position, player);
    assert(t[0]==size-1);
    assert(t[1]==position+size+1);
    assert(t[2]==position+size*2+2);
    assert(t[3]==position+size*3+3);
    free(t);
    printf("\033[32mTest 4/8 PASSED\033[0m\n");
    t=available_dst(graph, DIR_WEST, position, player);
    assert(t[0]==0);
    free(t);
    printf("\033[32mTest 5/8 PASSED\033[0m\n");
    t=available_dst(graph, DIR_NE, position, player);
    assert(t[0]==0);
    free(t);
    printf("\033[32mTest 6/8 PASSED\033[0m\n");
    t=available_dst(graph, DIR_NW, position, player);
    assert(t[0]==0);
    free(t);
    printf("\033[32mTest 7/8 PASSED\033[0m\n");
    t=available_dst(graph, DIR_SW, position, player);
    assert(t[0]==0);
    printf("\033[32mTest 8/8 PASSED\033[0m\n");
    free(t);
    free_graph(graph);
    printf("-----Finished Testing available_dst---------- \n");

}