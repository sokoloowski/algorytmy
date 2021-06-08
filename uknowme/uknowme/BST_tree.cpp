//
// Created by Michał on 07.06.2021.
//

#include "BST_tree.h"


void BST_tree::wypisz(BST_tree::Node *root) {
    if(root == nullptr) {
        return;
    }
    wypisz(root->left);
    printf("%lf ", root->wartosc);
    wypisz(root->right);
}

BST_tree::Node *BST_tree::wyszukaj_min(BST_tree::Node *ws) {
    while(ws->left){
        ws = ws->left;
    }
    return ws;
}

BST_tree::Node *BST_tree::wyszukaj_maks(BST_tree::Node *ws) {
    while(ws->right){
        ws = ws->right;
    }
    return ws;
}

BST_tree::Node *BST_tree::wyszukaj(BST_tree::Node *ws, double wartosc) {
    while(ws && wartosc!=ws->wartosc){
        if (wartosc >= ws->wartosc){
            ws = ws->right;
        }
        else{
            ws = ws->left;
        }
    }
    if (ws->wartosc == wartosc){
        return ws;
    }
    else{
        return nullptr;
    }
}

BST_tree::Node *BST_tree::nastepnik(BST_tree::Node *wezel) {
    struct Node *poprzednik = wezel->parent;
    if(wezel->right) {
        return wyszukaj_min(wezel->right);
    }

    while(poprzednik && poprzednik->right == wezel){
        wezel = poprzednik;
        poprzednik = poprzednik->parent;
    }
    return poprzednik;
}

void BST_tree::wstaw(double wart, BST_tree::Node **root) {
    struct Node *nowy = new Node;
    struct Node *poprzednik, *ws;
    nowy->left = nullptr;
    nowy->right= nullptr;
    nowy->wartosc = wart;
    poprzednik = nullptr;
    ws = *root;

    while(ws){
        poprzednik = ws;
        if(wart >= ws->wartosc ) {
            ws = ws->right;
        }
        else {
            ws = ws->left;
        }
    }

    nowy->parent = poprzednik;
    if(poprzednik == nullptr) {
        *root = nowy;
    }
    else if(wart >= poprzednik->wartosc ){
        poprzednik->right = nowy;
    }
    else {
        poprzednik->left = nowy;
    }
}

void BST_tree::bst_tree_main() {
    struct  Node* root = nullptr;

    cout << endl << "BST tree start: " << endl;

    wstaw(12, &root);
    wstaw(6, &root);
    wstaw(2, &root);
    wstaw(13, &root);
    wstaw(8, &root);
    wstaw(9, &root);
    cout << "Values: ";
    wypisz(root);
    cout << endl << "Max value: " << wyszukaj_maks(root)->wartosc << endl;
    cout << "Min value: " << wyszukaj_min(root)->wartosc << endl;
    cout << "node of 13 is: : " << wyszukaj(root, 13) << endl;
    cout << "\"nastepnik\" of 8 is: : " << nastepnik(wyszukaj(root, 8))->wartosc << endl;
    cout << "\"nastepnik\" of 9 is: : " << nastepnik(wyszukaj(root, 9))->wartosc << endl;
    cout << "\"nastepnik\" of 13 is: : ";
    if (nastepnik(wyszukaj(root, 13)) != nullptr){
        cout << nastepnik(wyszukaj(root, 13))->wartosc << endl;
    }
    else{
        cout << "brak \"nastepnika\"";
    }
    DSW(&root, 6);

    cout << endl << "BST tree end" << endl;
}
