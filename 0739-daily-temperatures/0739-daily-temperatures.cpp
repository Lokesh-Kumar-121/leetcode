class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
//         vector<int>res;
//         for(int i=0;i<t.size();i++)
//         {
//             for(int j=i+1;j<=t.size();j++)
//             {
//                 if(j==t.size())
//                 {
//                     res.push_back(0);
//                     break;
//                 }
//                 if(t[j] > t[i])
//                 {
//                     res.push_back(j-i);
//                     break;
//                 }
                
//             }
//         }
//         return res;
        
         int n = temperatures.size();

        vector<int> ans(n);
        stack<int> st;

        for(int i = 0 ; i < n ; i++)
        {
            while(st.size() > 0 && temperatures[st.top()] < temperatures[i] )
            {
                ans[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        return ans;


    }
};