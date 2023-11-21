#include <iostream>

using namespace std;

void printLetter(int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << "o";
    }
}

int main()
{

    int currentRow = 1;
    if (currentRow == 1)
    {

        printLetter(2 * currentRow - 1);
    }

    cout << (2 * currentRow - 1);
    // order of operation matters

    return 0;
}