class Solution {
public:
    int maximum69Number (int num) {
     
        string str=to_string(num);
        //int n=str.size();
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='6'){
                str[i]='9';
                break;
            }
        }
        
        num=stoi(str);
        
        return num;
    }
};