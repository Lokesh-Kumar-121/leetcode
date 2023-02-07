class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans = 1, current = 1;
        int first = 0, second = 0;
        for(int i=1;i<fruits.size();i++){
            if(fruits[i] == fruits[second]) current+=1;
            else if(fruits[i] == fruits[first]){
                current+=1;
                first = second;
                second = i;
            }
            else{
                first = second;
                second = i;
                current = i - first + 1;
            }
            ans = ((ans > current) ? ans : current);
        }
        return ans;
    }
};