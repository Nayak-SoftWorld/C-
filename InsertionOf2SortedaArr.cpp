#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 8, 2, 9, 13};

    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr1[i] == arr2[j])
            {
                ans = arr1[i];
                // cout << arr1[i] << " ";
            }
        }
    }
    cout << ans << endl;

        return 0;
}
