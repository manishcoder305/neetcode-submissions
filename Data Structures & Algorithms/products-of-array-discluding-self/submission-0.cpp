class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prefMul;
        int n = nums.size();
        for(int i=0;i<n;i++){
            long long k=1;
            for(int j=0;j<n;j++){
                if(i!=j){
                    k *=nums[j]; 
                }
            }
            prefMul.push_back(k);
        }
        return prefMul;
    }
};
