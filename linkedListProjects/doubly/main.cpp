#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(){

    LinkedList<int> list;
    // list.append(5);
    // list.append(7);
    // list.append(9);

    list.addSorted(9);
    list.addSorted(5);
    list.addSorted(3);
    list.addSorted(7);
    list.addSorted(10);
    list.addSorted(-5);

    cout << list.average() << endl;

    cout << list << endl;
    

    return 0;
}