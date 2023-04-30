#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int k = j + 1;
            int l = n - 1;
            while (k < l)
            {
                long long sum = nums[i];
                sum += nums[j];
                sum += nums[k];
                sum += nums[l];
                if (sum == target)
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    res.push_back(temp);
                    k++;
                    l--;
                    while (k < l && nums[k] == nums[k - 1])
                    {
                        ++k;
                    }
                    while (k < l && nums[l] == nums[l + 1])
                    {
                        --l;
                    }
                }
                else if (sum < target)
                {
                    ++k;
                }
                else
                {
                    --l;
                }
            }

            while (j + 1 < n && nums[j + 1] == nums[j])
            {
                ++j;
            }
        }
        while (i + 1 < n && nums[i + 1] == nums[i])
        {
            ++i;
        }
    }
    return res;
}
int main()
{
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    cout << "The Quads are " << endl;
    for (auto i : fourSum(nums, 0))
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}