
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "huffman.h"
#include "huffman.c"




int main (int argc, char ** argv){

    if(argc != 6){
        return EXIT_FAILURE;
    }

    // Tnode* coding_tree = malloc(sizeof(coding_tree));
    // coding_tree = decode(argv[1]);
    int a = decode(argv[1]);
    // topology(argv[2], coding_tree);
    // write_decode(argv[3], coding_tree);


    


    return 0;
}



