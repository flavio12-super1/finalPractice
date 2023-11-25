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
            // if (temp->data < root->data ){ 
            //     if (!root->left) return root->left = temp;
            //     insert_helper(root->left, temp);
            // }else{
            //     if (!root->right) return root->right = temp;
            //     insert_helper(root->right, temp);
            // }
            // return temp;
            return (temp->data < root->data) ? (!root->left ? root->left = temp : insert_helper(root->left, temp))
                : (!root->right ? root->right = temp : insert_helper(root->right, temp));
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
            std::cout << root->left->right->data << std::endl;
            std::cout << root->right->right->data << std::endl;
        }

        void drawTree(){
            drawTree_helper();
        }
};

#endif