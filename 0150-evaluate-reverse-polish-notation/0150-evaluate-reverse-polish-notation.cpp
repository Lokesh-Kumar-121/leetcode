class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int> st;
        
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "/" || tokens[i] == "*")
            {
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                
                int z = 0;
                if(tokens[i] == "+")
                    z = x + y;
                if(tokens[i] == "-")
                    z = y-x;
                if(tokens[i] == "*")
                    z = x * y;
                if(tokens[i] == "/")
                    z = y/x;
                
                st.push(z);
            }
            else
            {
                int z = stoi(tokens[i]);
                st.push(z);
            }
            
        }
        
        return st.top();
    }
};