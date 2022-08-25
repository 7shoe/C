#include <stdio.h>

struct treeNode {
    int number;
    int count;
    struct treeNode *left;
    struct treeNode *right;
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
    int arr[] = {5, 5, 7, 5, 5, 2}; //tacitely assumes vallues > 0

    // empty tree (list of node pointers)
    struct treeNode *tree = NULL;

    for(int i=0; i < 3; ++i)
        parseInt(&tree, arr[i]);

    printf("tree.number : %d\n", tree->number);
    printf("tree.count  : %d\n", tree->count);

    if((tree->left) != NULL)
        printf("tree->left  is not NULL\n");
    if((tree->right) != NULL)
        printf("tree->right is not NULL\n");

    printf("tree.left   : %d\n", (*(tree->left)).number);
    printf("tree.left   : %d\n", (*(tree->left)).count);
    // printf("tree.right  : %p\n", tree->right);


    return 0;
}