#include <stdio.h>

struct treeNode {
    int number;
    int count;
    struct treeNode *left;
    struct teeeNode *right;
};

// typedef struct treeNode node; // typedef for lazy people

/* parseInt: parse integer into the binary tree s */
void parseInt(struct treeNode **tree, int x){
    // parse through tree. each node: check >=. If 'yes' go to right ptr. Else left ptr.
    if(!(*tree)){
        struct treeNode *seedNodePtr, seedNode = {.number = x, .count=1};
        seedNodePtr = &seedNode;
        *tree = seedNodePtr;
    }else{
        if(x > (*tree)->number)
            parseInt(&((*tree)->left), x);
        else if(x < (*tree)->number)
            parseInt(&((*tree)->right), x);
        else
            (*tree)->count += 1;
    }       
}

int main(){

    // Task: Given an array arr[], count number of occurences on an integer. Entries are unknown a-priori.
    int arr[] = {10, 7, 6}; //tacitely assumes vallues > 0

    // empty tree (list of node pointers)
    struct treeNode *tree = NULL;

    int x = 7;
    int y = 42;
    parseInt(&tree, x);
    parseInt(&tree, y);

    printf("tree.number : %d\n", tree->number);
    printf("tree.number : %p\n", tree->right);


    return 0;
}