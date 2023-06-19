#include <iostream>
using namespace std;

void inputArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void printArray(int arr[], int s)
{

    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findUnique(int arr[], int size)
{
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] != arr[j])
            {
                index = arr[i];
            }
            else
            {
                break;
            }
        }
    }
    return index;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 1, 2, 3};
    int size = 7;

    cout << "array ";
    printArray(arr, size);

    cout << "unique number is ";
    cout << findUnique(arr, size);
    return 0;
}