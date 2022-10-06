class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        vector<int>v(digits.size(),0),ans;
        v[0]=1;
        reverse(digits.begin(),digits.end());
        int c=0;
        for(int i=0;i<digits.size();i++){
            int sum=digits[i]+v[i]+c;
            if(sum>9)
            {
                ans.push_back(0);
                c=1;
            }
            else{
                ans.push_back(sum);
                c=0;
            }
                
            
        }
        if(c!=0)
            ans.push_back(c);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};