class Trie {
private: 
    bool is_end ;
    Trie* children[26] ;
public:
    Trie() {
        is_end = false ;
        for (int i = 0 ; i < 26; i++){
            children[i] = nullptr ;
        }
    }
    
    void insert(string word) {
        Trie* iter = this ;
        int size = word.size() ;
        for (int i = 0 ; i < size ; i++){
            int index = word[i] - 'a' ;
            if (iter->children[index] == nullptr){
                iter->children[index] = new Trie ;
            }
            iter = iter->children[index] ;
        }
        iter->is_end = true ;
    }
    
    Trie* searchforanything(string word){
        int size = word.size() ;
        Trie* iter = this ;
        for (int i = 0 ; i < size ; i++){
            int index = word[i] - 'a' ;
            if (iter->children[index] == nullptr) return nullptr ;
            iter = iter->children[index] ;
        }
        return iter ;
    }

    bool search(string word) {
        Trie* ptr = searchforanything(word) ;
        return (ptr != nullptr && ptr->is_end);
    }
    
    bool startsWith(string prefix) {
        return searchforanything(prefix) != nullptr ;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */