#include <iostream>
#include <string>

#include "ArrayList.h"

using namespace std;


int main() {
    ArrayList< ArrayList<int> > myIntArrayList;
    myIntArrayList.append(ArrayList<int>());
    myIntArrayList.append(ArrayList<int>());
    myIntArrayList.append(ArrayList<int>());

    myIntArrayList.arr[0].append(42);
    myIntArrayList.arr[0].append(10);
    myIntArrayList.arr[1].append(100);

    ArrayList<ArrayList<int> > myMixedArrayList = myIntArrayList;
    myMixedArrayList.append(ArrayList<int>());

    myMixedArrayList.arr[2].append(69);

    std::cout << myIntArrayList.arr[0].arr[0] << std::endl; 
    std::cout << myIntArrayList.arr[0].arr[1] << std::endl; 

    std::cout << myIntArrayList.arr[1].arr[0] << std::endl;
    
    std::cout << myMixedArrayList.arr[2].arr[0] << std::endl;

    return 0;
}
