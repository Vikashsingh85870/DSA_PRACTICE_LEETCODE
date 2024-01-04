class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n= numRows;
        vector<vector<int>>arr;
        for(int i=1;i<=n;i++){
            vector<int>a(i,1);
            arr.push_back(a);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                if(i!=0 && j!=0 && j!=i){
                   arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
                }
                
            }
        }
        return arr;
    }
};