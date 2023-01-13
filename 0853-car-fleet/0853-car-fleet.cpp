class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        if(speed.size()==1)
            return 1;
        
        vector<pair<int,float>>car;
        for(int i=0;i<speed.size();i++)
        {
            float t=(target-position[i])/(float)speed[i];
            car.push_back({position[i],t});
        }
        sort(car.rbegin(),car.rend());
        
        // for(auto x:car)
        //     cout<<x.first<<" "<<x.second<<endl;
        
        
        int count=1;
        
        for(int i=1;i<car.size();i++)
        {
            if(car[i].second > car[i-1].second)
                count++;
            else
                car[i].second=car[i-1].second;
        }
        return count;
        
        
        
    }
};