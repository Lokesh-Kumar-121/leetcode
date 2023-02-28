class Solution {
public:
    int ladderLength(string startWord, string targetWord, vector<string>& wordList) {
        
        unordered_set<string>sett;
        for(int i=0;i<wordList.size();i++)
        {
            if(wordList[i] != startWord)
                sett.insert(wordList[i]);
        }
        if(sett.find(targetWord) == sett.end())
            return 0;
        
        queue<pair<string,int>>q;
        q.push({startWord,1});
        
        while(!q.empty())
        {
            string temp=q.front().first;
            // cout<<temp<<endl;
            int count=q.front().second;
            q.pop();
            for(int i=0;i<temp.length();i++)
            {
                char xx = temp[i];
                for(int j=0;j<26;j++)
                {
                    if(temp[i] == j+'a')
                        continue;
                    temp[i] = j + 'a';
                    
                    if(temp == targetWord)
                        return count+1;
                    if(sett.find(temp) != sett.end())
                    {
                        q.push({temp,count+1});
                        sett.erase(temp);
                    }
                }
                temp[i] = xx;
                
            }
        }
        
        return 0;
    }
};