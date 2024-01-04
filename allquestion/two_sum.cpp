/*it is solve by maping */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int>ans;
   
    unordered_map<int,int>mp;
    int n= nums.size();
    for(int i=0;i<n;i++){
        int find = target-nums[i];
        if(mp.count(find)){
            return {i,mp[find]};
        }
        mp[nums[i]]=i;
    }
    return {};
    }
};
/*it is solve by brute force*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        for(int j= i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }

    return ans;
    }
};