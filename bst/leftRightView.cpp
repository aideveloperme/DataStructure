#include <iostream>
#include <vector>
using namespace std;

// Binary Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    vector<int> rightsideView(Node* root) {
        vector<int> res;
        recursionRight(root, 0, res);
        return res;
    }

    vector<int> leftsideView(Node* root) {
        vector<int> res;
        recursionLeft(root, 0, res);
        return res;
    }

private:
    // For Left View: Visit left before right
    void recursionLeft(Node* root, int level, vector<int>& res) {
        if (root == nullptr) return;
        if (res.size() == level) {
            res.push_back(root->data);
        }
        recursionLeft(root->left, level + 1, res);
        recursionLeft(root->right, level + 1, res);
    }

    // For Right View: Visit right before left
    void recursionRight(Node* root, int level, vector<int>& res) {
        if (root == nullptr) return;
        if (res.size() == level) {
            res.push_back(root->data);
        }
        recursionRight(root->right, level + 1, res);
        recursionRight(root->left, level + 1, res);
    }
};

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(10);
    root->left->left->right = new Node(5);
    root->left->left->right->right = new Node(6);

    Solution solution;

    vector<int> rightView = solution.rightsideView(root);
    cout << "Right View Traversal: ";
    for (auto node : rightView) {
        cout << node << " ";
    }
    cout << endl;

    vector<int> leftView = solution.leftsideView(root);
    cout << "Left View Traversal: ";
    for (auto node : leftView) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}

