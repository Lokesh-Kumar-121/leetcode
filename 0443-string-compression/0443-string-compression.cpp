class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size() == 1)
        {
            return 1;
        }
        
        vector<char>ans;
        
        for(int i=1;i<chars.size();i++)
        {
            int count=1;
            while(i<chars.size() && chars[i] == chars[i-1])
            {
                i++;
                count++;
            }
            
            ans.push_back(chars[i-1]);
            if(count>1)
            {
            string num=to_string(count);
            for(int j=0;j<num.size();j++)
            {
                ans.push_back(num[j]);
            }
            }
        }
        
        if(chars[chars.size()-1] != chars[chars.size()-2])
        {
            ans.push_back(chars[chars.size()-1]);
        }
        
        for(int i=0;i<ans.size();i++)
        {
            chars[i] = ans[i];
        }
        
        return ans.size();
    }
};