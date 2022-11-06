class Solution {
public:
    string reverseWords(string s) {
        
        int n=s.size();
        //cout<<n<<endl;
        string str="";
        string temp="";
        for(int i=0;i<=n;i++)
        {
           // cout<<i<<" "<<s[i]<<"  ";
            if( i==n || s[i] == ' ')
            {
                //cout<<temp<<" ";
                reverse(temp.begin(),temp.end());
                str+=temp;
                str+=' ';
                temp="";
            }
            else
                temp+=s[i];
            
        }
        str.pop_back();
        return str;
    }
};