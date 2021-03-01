#include "huffman.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


//Plan out main before you start here. 
//Input,Outputs call order matters!!!

int decode(char* compressed){
    printf("decode\n");
   //filename: Name of the file that we decode 
   //num_bytes: Number of bytes topology uses
   //num_chars: Number of bytes in the uncompressed file
   //chars_decoded: Number of bytes in the uncompressed file
   long int num_bytes;
   long int num_chars;
   long int chars_decoded;
   FILE *fptr = fopen(compressed, "r ");
   //Read the file and store num_bytes and num_chars
   long int var = 0;
   int flag = 0;
   while (fread(&var, sizeof(long), 1, fptr) == 1){
      if(flag == 0){
         printf("%ld\n", var);
         num_bytes = var;
         flag++;
      } else if(flag == 1){
         printf("%ld\n", var);
         num_chars = var;
         flag++;
      } else{
         flag = 0;
         break;
      }
   }
   Tnode * tree = malloc(sizeof(Tnode));
   //Build a Huffman coding tree based on the rest of header information
   //If compressed file is non-huffman reconstuct strictly binary coding tree
   //decode strictly binary coding tree

   //decode file until decoded chars match the num_chars in the original file 
   //count & calculate argv[6] 
   fclose(fptr);
   return 0;
}

void write_decode(char *filename,Tnode *node){

}

void topology(char *filename, Tnode *node){
    //filename: Name of the file we will construct topology  
    //node: pass constructed node from decode 
    //num_bytes: Number of bytes topology uses //Needed ? Needs to be passed : delete



}

void occurance(char* compressed, char *filename){
    //Can be passed from decode ? pass : construct
    //Find val in decode, call decode if needed. 
}

void header_info(char* compressed, char *filename){
    //Can be passed from decode ? pass : construct
    //Find val in decode, call decode if needed. 
}




void Postorder(Tnode *node)
{
   if (node == NULL) 
      return;
   Postorder(node->left);
   Postorder(node->right);
   fprintf(stdout, "%d ", node->weight);
}

void Preorder(Tnode *node)
{
   if (node == NULL) 
      return;
   fprintf(stdout, "%d ", node->weight);
   Preorder(node->left);
   Preorder(node->right);
}

void Inorder(Tnode *node)
{
   if (node == NULL) 
      return;
   Inorder(node->left);
   fprintf(stdout, "%d ", node->weight);
   Inorder(node->right);
}

void Destroy_tree(Tnode *node)
{
   if (node == NULL)
      return;
   Destroy_tree(node->left);
   Destroy_tree(node->right);
   free(node);
}