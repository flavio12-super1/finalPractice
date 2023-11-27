#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <iostream>
#include <ostream>
#include <stdexcept>

using namespace std;


struct Node{

    int data;
    Node *left;
    Node *right;

    Node(){
        data = 0;
        left = nullptr;
        right = nullptr;   
    }

    Node(int value){
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree{
    private:
    public:
        Node *root;

        BinaryTree(){
            root = nullptr;
        }

        // Node* insert_helper(Node *&root, Node *temp){
        //     return (root ? (temp->data < root->data) ? (!root->left ? root->left = temp : insert_helper(root->left, temp))
        //         : (!root->right ? root->right = temp : insert_helper(root->right, temp)) : root = temp);
        // }
        
        // void append(int value){
        //     Node *temp = new Node(value);
        //     insert_helper(root, temp);
        // }

        
        Node* insert_helper(Node*& root, Node* temp) {
            return (root ? (temp->data < root->data) ? (!root->left ? root->left = temp : insert_helper(root->left, temp))
                : (!root->right ? root->right = temp : insert_helper(root->right, temp)) : root = temp);
        }

        void append(int value) {
            insert_helper(root, new Node(value));
        }

        // void drawTree_helper(){
        //     std::cout << root->data << std::endl;
        //     std::cout << root->left->data << std::endl;
        //     std::cout << root->right->data << std::endl;
        //     std::cout << root->left->right->data << std::endl;
        //     std::cout << root->right->right->data << std::endl;
        // }

        // void drawTree(){
        //     drawTree_helper();
        // }
            // A function to display the tree graphically
    void displayTree(Node *r, int level, int direction)
    {
        // Don't worry about this function, just use it
        if (r != NULL && level < 4)
        {
            displayTree(r->right, level + 1, 1);

            for (int i = 0; i < level - 1; i++)
            {
                std::cout << "   ";
            }
            if (level > 0)
            {
                if (direction == 1)
                {
                    std::cout << " /--";
                }
                else
                {
                    std::cout << " \\--";
                }
            }

            std::cout << r->data;

            std::cout << std::endl;

            displayTree(r->left, level + 1, -1);
            level++;
        }
    }

    void drawTree()
    {
        displayTree(root, 0, 0);
    }
};

#endif