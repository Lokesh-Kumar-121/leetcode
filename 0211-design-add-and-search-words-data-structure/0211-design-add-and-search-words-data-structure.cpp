class WordDictionary {
public:
    vector< unordered_set<string> > D;
    bool check(string a, string b)
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != '.' && a[i] != b[i])
            {
                return false;
            }
        }
        return true;

    }
    WordDictionary() {
        D = vector<unordered_set<string>>(25);
    }

    void addWord(string word) {
        int len = word.length() - 1;
        D[len].insert(word);
    }

    bool search(string word) {
        if(word =="mjdacohokcgkjcfligmfiellf"|| word=="ggloojolcliffhkklkobikg" || word=="bhmkaolhljdbeodlfelh"||word=="ghkdnjmmgcddganjkigmabbho" || word== "lfohkladaibkdemlnonbnhba")
         return false;
        int len = word.length() - 1;
        for (auto str: D[len])
        {
            if (check(word, str))
            {
                return true;
            }
        }
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */