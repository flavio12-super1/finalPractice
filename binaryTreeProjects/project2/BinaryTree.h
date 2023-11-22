#ifndef BINARYTREE_H
#define BINARYTREE_H

template <class T>

struct Node
{
    T data;
    Node *left;
    Node *right;

    Node()
    {
        data = 0;
    }

    Node(T value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

template <class T>
class BinarayTree
{
private:
public:
    Node<T> *root;
    BinarayTree()
    {
        root = nullptr;
    }

    void insert_helper(Node<T> *root, Node<T> *node)
    {
        if (node->data < root->data && root->left == nullptr)
        {
            root->left = node;
        }
        else if (node->data < root->data && root->left != nullptr)
        {
            root = root->left;

            insert_helper(root, node);
        }
        else if (node->data >= root->data && root->right == nullptr)
        {
            root->right = node;
        }
        else if (node->data >= root->data && root->right != nullptr)
        {
            root = root->right;
            insert_helper(root, node);
        }
    }

    void insert(T value)
    {
        if (root == nullptr)
        {
            root = new Node<T>(value);
        }
        else
        {
            Node<T> *node = new Node<T>(value);
            insert_helper(root, node);
        }
    }

    // A function to display the tree graphically
    void displayTree(Node<T> *r, int level, int direction)
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