class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> map;
        //count the number of every task
        for(int &task : tasks){
            map[task]++;
        }
        
        int rounds = 0;
        for(auto &it : map){
            int count = it.second;
            if(count==1)          //count should be divisible by 2 or 3;
            { return -1; }
            if(count%3==0){       // count is in the form of 3k;
                rounds += count/3;
            }
            else{                 //count is in the form of 3k+1 or 3k+2;
                rounds += (count/3)+1;
            }
        }
        return rounds;
    }
};