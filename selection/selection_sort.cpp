#include <iostream>
using namespace std;

/**
 * We have an unsorted array {20, 12, 10, 15, 2}
 * We interate from first to last element with a loop
 * We take the first element as smallest
 * In the loop we check if the next element to marked smallest is smaller
 * If smaller then we mark it as smaller and if not we proceed
 * At the end we swap the smallest got element with the previous one `S`
 */

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
}

// ~ Function to swap the `first` and `smallest` element
void swap(int a[], int first, int smallest)
{
    int temp = a[first];
    a[first] = a[smallest];
    a[smallest] = temp;
}

// ~ Function to get the smallest number index from the given array
int getTheSmallestElement(int a[], int size)
{

    int f = 0;    // first element
    int l = size; // last element

    for (int i = 0; i < l; i++)
    {
        if (a[i] < a[f])
        {
            f = i;
        }
    }

    return f;
}

// ~ Function for selection sort
void selectionSort(int a[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        int smallestIndex = getTheSmallestElement(a, size);
        swap(a, smallestIndex, i);
    }

    cout << "Unsorted array is --" << endl;
    printArray(a, size);
}

int main()
{
    int array[] = {20, 12, 10, 15, 2};

    int size = sizeof(array) / sizeof(array[0]);

    cout << "Unsorted array is --" << endl;

    printArray(array, size);

    selectionSort(array, size);

    return 0;
}