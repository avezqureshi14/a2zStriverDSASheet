#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int floorInSortedArray(vector<int>nums, int target){
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if(nums[mid] <= target){
            ans = nums[mid];
            low = mid + 1;
        }
        else if(nums[mid] > target){
            high = mid - 1;
        }
    }
    return ans;
}
int main()
{
    vector<int>nums = {1,3,5,7,9};
    cout<<"Floor of the given element is "<<floorInSortedArray(nums,4);
    return 0;
}