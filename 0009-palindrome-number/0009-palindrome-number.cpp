class Solution {
public:
    bool isPalindrome(int x) {
        
        string str=to_string(x);
        string temp=str;
        reverse(temp.begin(),temp.end());

        if(str==temp)
        return true;
        else return false;
    }
};