#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>nums){
    int count = 0;
    int curr;
    int n = nums.size();
    int i = 0;
    while (i < n)
    {
        if (count == 0)
        {
            curr = nums[i];
        }
        if (nums[i] == curr)
        {
            count++;
        }
        else{
            count--;
        }
        i++;
    }

    return curr;
        
}
int main()
{
    vector<int>nums = {3,2,3};
    cout<<"The majority element is "<<majorityElement(nums);
    return 0;
}