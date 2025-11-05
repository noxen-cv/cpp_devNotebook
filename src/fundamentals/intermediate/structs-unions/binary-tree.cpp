#include <iostream>
#include <vector>

using namespace std;

// User function Template for C++

struct NODE {
    // This union allows reuse of memory:
    // - Leaf: uses 'data'
    // - Internal: uses 'left' and 'right'
    union {
        double data; // used in leaf node
        struct {
            NODE* left;
            NODE* right;
        };
    };
};



int main() {
    NODE* leaf = new NODE;
    leaf->data = 42.0;

    NODE* internal = new NODE;
    internal->left = leaf;
    internal->right = new NODE;
    internal->right->data = 17.5;

    cout << "Leaf 1: " << internal->left->data << endl;
    cout << "Leaf 2: " << internal->right->data << endl;

    delete leaf;
    delete internal->right;
    delete internal;
}

/*
Leaf nodes: contain a double data value

Internal nodes: contain left and right pointers to child nodes but no data

And you want to save memory by using a union, since a node either has data or children, not both.

A union ensures only one of its members uses memory at any given time. This saves memory since a node is either a leaf (with data) or an internal node (with children), but not both.

*/