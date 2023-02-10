class Solution {
public:
    vector<int> intersection(vector<int>& num1, vector<int>& num2) {
        unordered_set<int>set1;
        for(auto x:num1)
            set1.insert(x);
        
        unordered_set<int>set2;
        for(auto x:num2)
            set2.insert(x);
        
        vector<int>res;
        for(auto x:set1)
        {
            if(set2.find(x) != set2.end())
                res.push_back(x);
        }
        
        return res;
    }
};