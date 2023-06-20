#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr)
{

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++, j++;
            break;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        } else {
            j++;
        }
    }
    printArray(ans);
    return ans;
}

int main()
{
    vector<int> nums1 = {3, 3};
    int n1 = 3, n2 = 3;
    vector<int> nums2 = {1, 3, 5};

    printArray(nums1);
    printArray(nums2);
    findArrayIntersection(nums1, n1, nums2, n2);

    return 0;
}