#include <iostream>

using namespace std;

int addNumbers(int start, int result)
{
    start++;

    if (start < 10)
    {
        // cout << start << result << endl;
        // Recursively call addAndSubtractNumbers and accumulate the result
        return addNumbers(start, result + start);
    }
    else
    {
        // Base case: return the cumulative sum when start reaches 10
        return result;
    }
}

int subNumbers(int start, int result)
{
    start++;
    cout << start << result << endl;
    if (start < 10)
    {
        // cout << start << result << endl;
        return subNumbers(start, result - start);
    }
    else
    {
        // cout << start << result << endl;
        return result;
    }
}

int main()
{
    int start = 0;
    int result = 0;
    int firstRes = addNumbers(start, result);
    cout << "---------------------------------" << endl;
    int finalRes = subNumbers(start, firstRes);

    cout << "The first result is: " << firstRes << endl;
    cout << "The final result is: " << finalRes << endl;

    return 0;
}
