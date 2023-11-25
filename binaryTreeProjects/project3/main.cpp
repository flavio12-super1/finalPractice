#include <iostream>

#include "BinaryTree.h"

using namespace std;

int main(){

    BinaryTree tree;

    tree.append(5);
    tree.append(3);
    tree.append(8);

    tree.drawTree();

    return 0;
}