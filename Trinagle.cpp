#include <iostream>
using namespace std;

int main()
{
    int num;
    int row = 1;
    cout << "Enter num : ";
    cin >> num;
    while (row <= num)
    {
        int col = 1;
        while (col <= row)
        {
            cout << " * ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}