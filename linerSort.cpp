#include <iostream>

#define MAX 10
using namespace std;

int main()
{
    int n;
    int arr[MAX];

    cout << "Enter a number N which is smaller then 10: " << endl;
    cin >> n;

    // Let's populate array with random numbers

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }

    // Outputting the unsorted array

    cout << "The Given array is" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    // Sorting the unsorted array with liner fashion

    for (int i = 0; i < n; i++)
    {
        for (int j = i - 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    // Outputting the sorted array

    cout << "\nSorted array is" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}