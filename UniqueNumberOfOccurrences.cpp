#include <iostream>
using namespace std;

bool uniqueOccurrence(int *arr, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        cout << count << " ^ " << arr[i] << " is " << (count ^ arr[i]) << endl;
        count = count ^ arr[i];
    }

    cout << "------" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << count << " ^ " << arr[i] << " is " << (count ^ arr[i]) << endl;
        count = count ^ arr[i];
    }
}

int main()
{

    int arr[] = {5, 5, 2, 1,1, 5, 2};
    int size = 7;

    uniqueOccurrence(arr, size);

    return 0;
}

// 0 1 1 2