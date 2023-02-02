class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        unordered_map<char,int>mapp;
        for(int i=0;i<order.length();i++)
        {
            mapp[order[i]] = i;
        }
        
        // for(auto x:mapp)
        //     cout<<x.first<<" "<<x.second<<endl;
        
        for(int i=1;i<words.size();i++)
        {
            string s1=words[i-1];
            string s2=words[i];
            cout<<s1<<" "<<s2<<endl;
            int n1=s1.length();
            int n2=s2.length();
            
            int j=0;
            while(j<n1 && j<n2)
            {
                //cout<<s1[j]<<" "<<s2[j]<<"  ";
                if(mapp[s1[j]] > mapp[s2[j]])
                    return false;
                if(mapp[s1[j]] < mapp[s2[j]])
                    break;
                if(mapp[s1[j]] == mapp[s2[j]])
                    j++;
            }
            
            if(j==n2 && j!= n1)
                return false;
            
        }
        
        return true;
    }
};