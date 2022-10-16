class Solution {
public:
    string interpret(string str) {
        
        string res;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='G')
                res+='G';
            else if(str[i]== '(' && str[i+1]==')') {
                 res+='o';
                i++;}
            else {
                res+= 'a';
                res+='l';
                i+=3;
            }
            
        }
        return res;
    }
};