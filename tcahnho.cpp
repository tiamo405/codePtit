#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
};

Node* createNode(int x) {
    Node* p = new Node;
    p->key = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}

Node* insert(Node* root, int x) {
    if (root == NULL)
        return createNode(x);

    if (x < root->key)
        root->left = insert(root->left, x);
    else if (x > root->key)
        root->right = insert(root->right, x);

    return root;
}

Node* createTree(int n) {
    Node* root = NULL;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        root = insert(root, x);
    }
    return root;
}
int main() {
    int n;
    cin >> n;

    Node* root = createTree(n);

    return 0;
}