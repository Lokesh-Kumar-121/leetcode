class Solution {
public:
    bool canPlaceFlowers(vector<int>& bed, int n) {
        
        if(n<=0)
            return true;
        if(bed.size() == 1)
        {
            if(bed[0] == 1)
                return false;
            else
            {
                if(n<=1)
                    return true;
            }
            return false;
        }
        
        for(int i=0;i<bed.size();i++)
        {
            if(i == 0)
            {
                if(bed[i] == 0 && bed[i+1] == 0)
                {
                    bed[i] = 1;
                    n--;
                    if(n <= 0)
                        return true;
                }
                
            }
            
            else if(i == bed.size()-1)
            {
                if(bed[i] == 0 && bed[i-1] == 0)
                {
                    bed[i] = 1;
                    n--;
                    if(n <= 0)
                        return true;
                }
                
            }
            
            else
            {
                if(bed[i] == 0 && bed[i-1] == 0 && bed[i+1] == 0)
                {
                    bed[i] = 1;
                    n--;
                    if(n <= 0)
                        return true;
                }
            }
            
        }
        
        return false;
    }
};


// 1 0 1 0 1
// 0 1 0 1 0

// 1 0 1 0 1 0
// 0 1 0 1 0 1