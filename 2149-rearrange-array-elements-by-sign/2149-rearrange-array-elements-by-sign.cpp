class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int postINDEX=0;
        int negINDEX=1;

        for(int i=0;i<n;i++){
        if(nums[i]<0){
            ans[negINDEX]=nums[i];
            negINDEX+=2;
        }    
        else{
            ans[postINDEX]=nums[i];
            postINDEX+=2;
        }
        }
        return ans; 
    }
    
};