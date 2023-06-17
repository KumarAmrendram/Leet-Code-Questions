// https://leetcode.com/problems/number-of-1-bits/

#include <iostream>
using namespace std;

int hammingWeight(uint32_t n)
{

    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{

    cout << hammingWeight(0000000000000000000000110000101);

    return 0;
}