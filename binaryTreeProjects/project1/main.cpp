#include <iostream>
#include <string>

#include "BinaryTree.h"

using namespace std;

int main()
{
    BinarayTree<int> tree;
    tree.insert(5);
    tree.insert(4);
    tree.insert(6);
    tree.insert(7);
    tree.insert(3);
    tree.insert(5);
    tree.insert(2);

    tree.drawTree();
    return 0;
}