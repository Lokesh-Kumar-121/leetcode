class Solution {
public:
    string removeStars(string s) {
        
//         stack<char>st;
//         for(int i=0;i<s.length();i++)
//         {
//             if(st.empty())
//                 st.push(s[i]);
//             else
//             {
//                 if(s[i] == '*')
//                 {
//                     st.pop();
//                 }
//                 else
//                     st.push(s[i]);
//             }
//         }
        
        

        
//         s.clear();
//         // s="";
//         while(!st.empty())
//         {
//             s+=st.top();
//             st.pop();
//         }
        
//         reverse(s.begin(),s.end());
        
//         return s;
        
        
        string ans;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '*')
                ans.pop_back();
            else
                ans.push_back(s[i]);
        }
        
        return ans;
        
    }
};