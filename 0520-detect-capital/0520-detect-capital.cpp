class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int flag=0;
        for(int i=0;i<word.length();i++)
        {
            if(word[i] < 65 || word[i] > 90)
                flag=1;
        }
        if(flag==0)
            return true;
        
        for(int i=1;i<word.length();i++)
        {
            if(word[i] >=65 && word[i] <=90)
                return false;
        }
        return true;
            
        
    }
};