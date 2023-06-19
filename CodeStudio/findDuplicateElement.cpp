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

int duplicateElement(int *arr, int size)
{
    int ans = 0;
    for (int i = 0; i < size; ++i)
    {
        cout << ans << "^" << arr[i] << " is " << (ans ^ arr[i]) << endl;
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < size; ++i)
    {
        cout << ans << "^" <<i<< " is " << (ans ^ i) << endl;
        ans = ans ^ i;
    }
    return ans;
}

int main()
{

    int arr[] = {4,2,1,3,1};
    int size = 5;

    printArray(arr, size);

    cout<<duplicateElement(arr, size);
}
