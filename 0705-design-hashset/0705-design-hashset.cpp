class MyHashSet {
    
    unordered_set<int>sett;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        
        sett.insert(key);
    }
    
    void remove(int key) {
        
        sett.erase(key);
        
    }
    
    bool contains(int key) {
         
        if(sett.find(key) == sett.end())
            return false;
        return true;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */