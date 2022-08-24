#include <stdio.h>

struct treeNode {
    int number;
    int count;
    struct treeNode *left;
    struct teeeNode *right;
};

/* parseInt: parse integer into the binary tree s */
void parseInt(struct treeNode *tree, int x){
    // parse through tree. each node: check >=. If 'yes' go to right ptr. Else left ptr.
    struct treeNode *lastNode;

    //if(tree==NULL){
    //    struct treeNode currNode = {.number = x, .count = 1};
    while((tree!=NULL) && (tree->number) != x){
        lastNode = tree;
        if(x > tree->number)
            tree = tree->left;
        else
            tree = tree->right;
    }
    if(tree==NULL){
        struct treeNode currNode = {.number = x, .count = 1};   // no match: create new node
        struct treeNode *currPtr = &currNode;

        if(lastNode->number > x)
            lastNode->left  = currPtr;
        else
            lastNode->right = currPtr;
    }
    if((tree->number) == x)
        ++tree->count;         // match! increment count of that node's number
}



int main(){

    // Task: Given an array arr[], count number of occurences on an integer. Entries are unknown a-priori.
    int arr[] = {10, 7, 6}; //tacitely assumes vallues > 0

    // empty tree (list of node pointers)
    //static int N = sizeof(arr) /sizeof(arr[0]); 
    struct treeNode *tree = NULL;

    int x = 7;
    parseInt(tree, x);

    
    //printf("tree ptr: %p\n", tree);
    //printf("tree ptr is NULL? %d\n", tree==NULL);
    //printf("n1.left  is NULL? %d\n", n1.left==NULL);
    //printf("n1.right is NULL? %d\n", n1.right==NULL);

    //printf();
    



    return 0;
}