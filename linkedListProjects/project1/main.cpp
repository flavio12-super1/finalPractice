#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(){

    LinkedList <int> list;

    list.append(5);
    list.append(4);
    list.append(7);
    cout << list.count << endl;

    cout << list << endl;

    return 0;

}