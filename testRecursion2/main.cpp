#include <iostream>

using namespace std;

void printSpaces(int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << " ";
    }
}

void printStars(int n, int height, int currentRow)
{
    for (int i = 0; i < n; ++i)
    {
        if (i == 0 || i == n - 1)
        {
            std::cout << "*";
        }
        else
        {
            if (height - currentRow == 0)
            {
                if (i % 2 == 0)
                {

                    std::cout << "*";
                }
                else
                {
                    std::cout << " ";
                }
            }
            else
            {
                if (height % 2 == 0)
                {
                    if (n / 2 == i && (currentRow - 1) * 2 == height)
                    {
                        std::cout << "👁";
                    }
                    else
                    {
                        std::cout << " ";
                    }
                }
                else
                {
                    if (n / 2 == i && (currentRow - 1) * 2 == height + 1)
                    {
                        std::cout << "👁";
                    }
                    else
                    {
                        std::cout << " ";
                    }
                }
            }
        }
    }
}

void printPyramid(int height, int currentRow)
{
    if (currentRow > height)
    {
        return;
    }

    printSpaces(height - currentRow);

    printStars(2 * currentRow - 1, height, currentRow);
    std::cout << std::endl;

    printPyramid(height, currentRow + 1);
}

int main()
{
    int height;
    std::cout << "Enter the height of the pyramid: ";
    std::cin >> height;

    cout << endl;
    printPyramid(height, 1);
    cout << endl;

    return 0;
}
