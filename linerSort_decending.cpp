#include <iostream>

using namespace std;

#define MAX 10

int main()
{
    int n;
    int arr[MAX];

    cout << "Enter a number N lower then 10" << endl;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "\nSorted array is \n"
         << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}