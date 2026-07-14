class Solution {
public:
    void solve(vector<vector<int>> &ans , vector<int> arr,int i){
        if(i==arr.size()){
            ans.push_back(arr);
            return ;
        }
        for(int j=i;j<arr.size();j++){
            swap(arr[i],arr[j]);
            solve(ans,arr,i+1);
            swap(arr[i],arr[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(ans,nums,0);
        return ans;
    }
};