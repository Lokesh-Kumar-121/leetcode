class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> m;
        int count=0;
        
//         for(auto x:words)
//         {
//             m[x]++;
//         }
        
//         int count=0;
        
//         for(auto x:words)
//         {
//             string str=x;
//             reverse(str.begin(),str.end());
//            // if()
//             if(m.find(str) != m.end() && m[str] > 0)
//             {
//                 count+=2;
//                 m[str]--;
//             }
//         }
        for(auto x:words){
            string s=x;
            reverse(s.begin(),s.end());
            if(m[s]>0){
                count+=4;
                m[s]--;
            }
            else
                m[x]++;
        }
        for(auto x:m){
            if(x.first[0]==x.first[1] && x.second>0)
                return count+2;
        }
        
        return count;
    }
};