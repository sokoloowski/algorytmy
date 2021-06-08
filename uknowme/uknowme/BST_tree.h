//
// Created by Michał on 07.06.2021.
//

#ifndef UKNOWME_BST_TREE_H
#define UKNOWME_BST_TREE_H
#include <iostream>
using namespace std;


class BST_tree {

private:
    struct Node{
        double wartosc;
        struct Node* left;
        struct Node* right;
        struct Node* parent;
    };

    static void wypisz(struct Node *root);

    static struct Node* wyszukaj_min(struct Node* ws);
    static struct Node* wyszukaj_maks(struct Node* ws);
    static struct Node* wyszukaj(struct Node* ws, double wartosc);
    static struct Node* nastepnik(struct Node* wezel);

    static void leftRotation(struct Node **root, struct Node *x);
    static void rightRotation(struct Node **root, struct Node *x);
    static int getRotValue(unsigned int n);
    static void DSW(struct Node **root, int n);


    static void wstaw(double wart, struct Node **root);

public:
    static void bst_tree_main();

};


#endif //UKNOWME_BST_TREE_H
