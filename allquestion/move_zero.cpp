class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();
        int count_z=0;
        for(int i=0;i<n;i++){
             if(nums[i]==0)count_z++;
        }
        if(count_z==0) return;
        else{
            int j=0;
            for(int i=0;i<n;i++){
                if(nums[i]!=0){
                    nums[j]=nums[i];
                    j++;

                }

            }
            int x= n-1;
          while(count_z-- && x>=0){
              nums[x]=0;
              x--;

          }
        }
    }
};