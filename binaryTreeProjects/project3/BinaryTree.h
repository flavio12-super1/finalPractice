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

        Node* insert_helper(Node *root, Node *temp){
            if (temp->data < root->data ){ 
                // if (root->left == nullptr){
                //     root->left = temp;
                // }else{
                //     insert_helper(root->left, temp);
                // }
                root->left = (root->left)? insert_helper(root->left, temp) : temp;
            }else{
                // if (root->right == nullptr){
                //     root->right = temp;
                // }else{
                //     insert_helper(root->right, temp);
                // }
                root->right = (root->right)? insert_helper(root->right, temp) : temp;
            }
            return temp;
        }

        void append(int value){
            if (root == nullptr){
                root = new Node(value);
            }else{
                Node *temp = new Node(value);
                insert_helper(root, temp);
            }
        }

        void drawTree_helper(){
            std::cout << root->data << std::endl;
            std::cout << root->left->data << std::endl;
            std::cout << root->right->data << std::endl;
        }

        void drawTree(){
            drawTree_helper();
        }
};

#endif