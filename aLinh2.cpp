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

void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

void preorder(Node* root) {
    if (root != NULL) {
        cout << root->key << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

Node* findMax(Node* root) {
    while (root->right != NULL)
        root = root->right;
    return root;
}

Node* deleteNode(Node* root, int x) {
    if (root == NULL)
        return NULL;

    if (x < root->key)
        root->left = deleteNode(root->left, x);
    else if (x > root->key)
        root->right = deleteNode(root->right, x);
    else {
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else {
            Node* temp = findMax(root->left);
            root->key = temp->key;
            root->left = deleteNode(root->left, temp->key);
        }
    }
    return root;
}

int main() {
    int n;
    cin >> n;

    Node* root = createTree(n);

    inorder(root);
    cout << endl;

    int x;
    cin >> x;

    root = deleteNode(root, x);

    preorder(root);

    return 0;
}
