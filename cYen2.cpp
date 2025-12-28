#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int x) {
    Node* p = new Node;
    p->data = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}

Node* insert(Node* root, int x) {
    if (root == NULL)
        return createNode(x);

    if (x < root->data)
        root->left = insert(root->left, x);
    else if (x > root->data)
        root->right = insert(root->right, x);

    return root;
}

void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int height(Node* root) {
    if (root == NULL) return 0;
    int hLeft = height(root->left);
    int hRight = height(root->right);
    return (hLeft > hRight ? hLeft : hRight) + 1;
}

int countLeaf(Node* root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    return countLeaf(root->left) + countLeaf(root->right);
}

int main() {
    int n;
    cin >> n;

    Node* root = NULL;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        root = insert(root, x);
    }

    inorder(root);
    cout << endl;

    cout << height(root) << endl;

    cout << countLeaf(root) << endl;

    return 0;
}
