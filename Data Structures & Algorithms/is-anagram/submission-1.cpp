class Solution {
public:
    bool isAnagram(string s, string t) {
        int m = s.size(),n = t.size();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(m==n){
            for(int i=0;i<m;i++){
                if(s[i]!=t[i]){
                    return false;
                }
            }
            return true;
        }else{
            return false;
        }
    }
};
