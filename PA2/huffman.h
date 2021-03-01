#ifndef __TREE_H__
#define __TREE_H__


typedef struct Tnode {
    unsigned char ch;
    int weight;

    struct Tnode * left;
    struct Tnode * right;

} Tnode;

void Postorder(Tnode *node);
void Preorder(Tnode *node);
void Inorder(Tnode *node);
void Destroy_tree(Tnode *node);


#endif
