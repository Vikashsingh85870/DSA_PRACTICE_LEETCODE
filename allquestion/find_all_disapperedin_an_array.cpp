class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        vector<int>v;
        for(int i=1;i<=nums.size();i++){
            if(!st.count(i)) v.push_back(i);
        }
        return v;
    }
};