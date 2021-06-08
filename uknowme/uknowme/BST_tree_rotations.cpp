//
// Created by Michał on 08.06.2021.
//

#include "BST_tree.h"


void BST_tree::leftRotation(struct Node **root, struct Node *x){
    struct  Node *y = x->right;     //przechwycenie Y
    x->right = y->left;             //podpięcie B
    if(y->left)
        y->left->parent= x;         //podpięcie rodzica B
    y->parent=x->parent;
    if( !(x->parent) ) {
        *root=y;
    }
    else if(x==x->parent->left)
        x->parent->left=y;
    else// if(x==x->parent->right)
        x->parent->right=y;

    y->left=x;
    x->parent=y;
}

void BST_tree::rightRotation(struct Node **root, struct Node *x){
    struct  Node *y = x->left;      //przechwycenie Y
    x->left= y->right;              //podpięcie B
    if(y->right)
        y->right->parent= x;        //podpięcie rodzica B
    y->parent=x->parent;
    if( !(x->parent) ) {
        *root=y;
    }
    else if(x==x->parent->right)
        x->parent->right=y;
    else// if(x==x->parent->left)
        x->parent->left=y;

    y->right=x;
    x->parent=y;
}

int BST_tree::getRotValue(unsigned int n){
    unsigned int n2=1;
    while(n>>=1) n2<<=1;
    return n2;
}

void BST_tree::DSW(struct Node **root, int n){
                                    //konwersja na listę
    struct Node* a=*root;
    while (a){
        while (a->left){
            rightRotation(root,a);
            a=a->parent;
        }
        a=a->right;
    }
                                    //konwersja na drzewo
    int m=getRotValue(n+1)-1;
    a=*root;
    for(int i=0; i<n-m; i++){
        leftRotation(root,a);
        a=a->parent->right;
    }
    while(m>1){
        a=*root;
        m/=2;
        for(int i=0; i<m; i++){
            leftRotation(root,a);
            a=a->parent->right;
        }

    }
}