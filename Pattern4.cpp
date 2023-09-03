#include <iostream>
using namespace std;

int main()
{
    // int num;
    // cout << "Enter num : ";
    // cin >> num;
    // int row = 1;
    // while (row <= num)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << row << " ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int num;
    // cout << "Enter num : ";
    // cin >> num;
    // int row = 1;
    // int incrementNum = 1;
    // while (row <= num)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << incrementNum << " ";
    //         incrementNum++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int num;
    // cout << "Enter num : ";
    // cin >> num;
    // int row = 1;
    // while (row <= num)
    // {
    //     int col = 1;
    //     int value = row;
    //     while (col <= row)
    //     {
    //         cout << value << " ";
    //         value++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int num;
    // cout << "Enter num : ";
    // cin >> num;
    // int row = 1;
    // while (row <= num)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << row - col + 1 << " ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int num;
    // cout << "Enter num : ";
    // cin >> num;
    // int row = 1;
    // while (row <= num)
    // {
    //     int col = 1;

    //     char ch = 'A' + row - 1;
    //     while (col <= num)
    //     {
    //         cout << ch << " ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int num;
    // cout << "Enter num : ";
    // cin >> num;
    // int row = 1;
    // while (row <= num)
    // {
    //     int col = 1;

    //     char ch = 'A';
    //     while (col <= num)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int num;
    // cout << "Enter num : ";
    // cin >> num;
    // int row = 1;
    // char value = 'A';
    // while (row <= num)
    // {
    //     int col = 1;
    //     while (col <= num)
    //     {
    //         cout << value << " ";
    //         value++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int num;
    // cout << "Enter num : ";
    // cin >> num;
    // int row = 1;
    // while (row <= num)
    // {
    //     int col = 1;
    //     while (col <= num)
    //     {
    //         char value = 'A' + row + col - 2;
    //         cout << value << " ";
    //         value++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int num;
    // cout << "Enter num : ";
    // cin >> num;
    // int row = 1;
    // while (row <= num)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         char value = 'A' + row - 1;
    //         cout << value << " ";
    //         value++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int num;                // Enter num : 4
    // cout << "Enter num : "; // A
    // cin >> num;             // B C
    // int row = 1;            // D E F
    // char value = 'A';       // G H I J
    // while (row <= num)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << value << " ";
    //         value++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int num;
    // cout << "Enter num : "; // Enter num : 4
    // cin >> num;             // D
    // int row = 1;            // C D
    // while (row <= num)      // B C D
    // {                       // A B C D
    //     int col = 1;
    //     char value = 'A' + num - row;
    //     while (col <= row)
    //     {
    //         cout << value << " ";
    //         value++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    int num;
    cout << "Enter num : ";
    cin >> num;
    int row = 1;

    while (row <= num)
    {

        int space = num - row;
        while (space)
        {
            cout << " ";
            space--;
        }
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
