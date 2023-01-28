class SummaryRanges {
    set<int> nums;
public:
    SummaryRanges() {
        
    }
    
    void addNum(int value) {
        nums.insert(value);
    }
    
    vector<vector<int>> getIntervals() {
        vector<vector<int>> ans;
        int start = -1,end=-1;
        for(auto& val:nums){
            if(start!=-1){
                if(val == end+1){
                    end = val;
                }else {
                    ans.push_back({start,end});
                    start = val;
                    end = val;
                }    
            } else{
                start = val;
                end = val;
            }
        }
        ans.push_back({start,end});
        return ans;
    }
};
/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */