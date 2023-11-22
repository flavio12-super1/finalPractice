#include <iostream>
#include <string>

#include "ArrayList.h"

using namespace std;

int main() {
    ArrayList< ArrayList<int> > myIntArrayList;
    myIntArrayList.append(ArrayList<int>());
    myIntArrayList.append(ArrayList<int>());
    myIntArrayList.append(ArrayList<int>());


    // Append some elements to the inner ArrayList<int>
    myIntArrayList.arr[0].append(42);
    myIntArrayList.arr[0].append(10);
    myIntArrayList.arr[1].append(100);


    // Access elements
    std::cout << myIntArrayList.arr[0].arr[0] << std::endl;  // Output: 42
    std::cout << myIntArrayList.arr[0].arr[1] << std::endl;  // Output: 10

    std::cout << myIntArrayList.arr[1].arr[0] << std::endl;

    return 0;
}
