class Solution {
public:
    int longestPalindrome(string s) {
        int count = 0 ;
        int max_odd = 0;
        int ctr = 0;
        unordered_map<char,int> mpp;
        for (int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for (auto i : mpp){
            int val = i.second;
            int ch = i.first;
            if (val%2 == 0){
                count+=val;
            }
            else{
                ctr = 1;
                count =count + val - 1;
            }
        }
        count = count + ctr;
        return count;
        
    }
};