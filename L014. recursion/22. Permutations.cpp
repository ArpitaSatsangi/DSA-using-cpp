/*
Given an array 'nums' of distinct integers, return all the possible permutations. 
You can return the answer in any order.

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
*/

class Solution {

private:
    void solve(vector<vector<int>> &ans, vector<int> nums, int index)
    {
        //base case
        if(index>=nums.size())
        {
            ans.push_back(nums);
            return ;
        }

        for(int j=index; j<nums.size(); j++)
        {
            swap(nums[index], nums[j]);
            solve(ans,nums,index+1);

            //backtrack
            swap(nums[index],nums[j]);
        }

    }


public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans;
        int index=0;

        solve(ans,nums,index);

        return ans;
    }
};
