#include <bits/stdc++.h>
using namespace std;

vector<int> unionOfTwoaArrays(vector<int> nums1, vector<int> nums2)
{
    int n1 = nums1.size();
    int n2 = nums2.size();
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < n1 && j < n2)
    {
        if (nums1[i] < nums2[j])
        {
            ans.push_back(nums1[i]);
            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            ans.push_back(nums2[j]);
            j++;
        }
        else
        {
            ans.push_back(nums1[i]);
            i++;
            j++;
        }

        while (i < n1 && nums1[i-1] == nums1[i])
        {
            i++;
        }

        while (j < n2 && nums2[j-1] == nums2[j])
        {
            j++;
        }
    }

    while (i < n1)
    {
        ans.push_back(nums1[i]);
        i++;
    } 

    while (j < n2)
    {
        ans.push_back(nums2[j]);
        j++;
    }
    return ans;
}

int main()
{
    vector<int> nums1 = {1, 2, 4, 5, 6};
    vector<int> nums2 = {2, 2, 3, 5, 7};

    for(auto i : unionOfTwoaArrays(nums1,nums2)){
        cout<<i<<" ";
    }

    return 0;
}
