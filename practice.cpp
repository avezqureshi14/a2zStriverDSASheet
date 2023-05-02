#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int kthElementOfTwoSortedArrays(int arr1[], int arr2[], int n, int m, int k)
{
    vector<int> nums3;
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            nums3.push_back(arr1[i]);
            i++;
        }
        else
        {
            nums3.push_back(arr2[j]);
            j++;
        }
    }

    while (i < n)
    {
        nums3.push_back(arr1[i]);
        i++;
    }

    while (j < m)
    {
        nums3.push_back(arr2[i]);
        j++;
    }
    int ans;
    for (int i = 0; i < nums3.size(); i++)
    {
        //because vector is indexed from 0
        ans = nums3[k-1];
    }
    
    return ans;
}
int main()
{
    return 0;
}