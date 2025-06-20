#include <iostream>
#include <vector>
using namespace std;

// Define a Node structure for the binary tree
struct Node {
    int data;           // Data stored in the node
    Node* left;         // Pointer to the left child
    Node* right;        // Pointer to the right child

    // Constructor to initialize node with a value and null children
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Class that contains the logic for computing left and right side views
class Solution {
public:
    // Function to compute the right view of the binary tree
    vector<int> rightsideView(Node* root) {
        vector<int> res;                     // To store the right view result
        recursionRight(root, 0, res);        // Start DFS from level 0
        return res;                          // Return the filled result vector
    }

    // Function to compute the left view of the binary tree
    vector<int> leftsideView(Node* root) {
        vector<int> res;                     // To store the left view result
        recursionLeft(root, 0, res);         // Start DFS from level 0
        return res;                          // Return the filled result vector
    }

private:
    // Helper function for computing left view using DFS
    void recursionLeft(Node* root, int level, vector<int>& res) {
        if (root == nullptr) return;         // Base case: if the node is null, return

        // If this is the first node at this level, it's the leftmost
        if (res.size() == level) {
            res.push_back(root->data);       // Store this node's value
        }

        // Recurse to the left child first (left → right DFS)
        recursionLeft(root->left, level + 1, res);
        recursionLeft(root->right, level + 1, res);
    }

    // Helper function for computing right view using DFS
    void recursionRight(Node* root, int level, vector<int>& res) {
        if (root == nullptr) return;         // Base case: if the node is null, return

        // If this is the first node at this level, it's the rightmost
        if (res.size() == level) {
            res.push_back(root->data);       // Store this node's value
        }

        // Recurse to the right child first (right → left DFS)
        recursionRight(root->right, level + 1, res);
        recursionRight(root->left, level + 1, res);
    }
};

// Main function to test the code
int main() {
    // Create the binary tree
    Node* root = new Node(1);                         //        1
    root->left = new Node(2);                         //       /
    root->left->left = new Node(4);                   //      2
    root->left->right = new Node(10);                 //     / \
                                                      //    4  10

    // Adding more nodes safely
    root->left->left->right = new Node(5);            //       \
    root->left->left->right->right = new Node(6);     //        5
                                                      //         \
                                                      //          6

    // Create solution object
    Solution solution;

    // Get and print the right side view
    vector<int> rightView = solution.rightsideView(root);
    cout << "Right View Traversal: ";
    for (int node : rightView) {
        cout << node << " ";
    }
    cout << endl;

    // Get and print the left side view
    vector<int> leftView = solution.leftsideView(root);
    cout << "Left View Traversal: ";
    for (int node : leftView) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}

