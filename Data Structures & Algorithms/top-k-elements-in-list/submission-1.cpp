class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n=nums.size();
        int count=1;
        vector<int>ans;
        unordered_map<int,int>freq;
        for(auto num:nums){
            freq[num]++;
        }
        vector<pair<int,int>>freqVector(freq.begin(),freq.end());
        sort(freqVector.begin(), freqVector.end(), [](const auto& a, const auto& b) {
            if (a.second == b.second) {
                return a.first < b.first; // Tie-breaker: smaller number comes first if frequencies match
            }
            return a.second > b.second;   // Sort by frequency in descending order
        });
        for(auto it: freqVector){
            ans.push_back(it.first);
            if(ans.size()>=k){
                break;
            }
        }
        return ans;
    }
};
