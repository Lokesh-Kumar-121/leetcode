// class Solution {
// public:
//     int minFlipsMonoIncr(string s) {
        
//         int i=0;
//         while(s[i] == '0')
//             i++;
        
//         int temp=i;
//         int count1=0,count2=0;
//         while(i<s.length())
//         {
//             if(s[i] == '0')
//                 count1++;
//             i++;
//         }
        
//         while(temp<s.length())
//         {
//             if(s[temp] == '1')
//                 count2++;
//             temp++;
//         }
        
//         return min(count1,count2);
//     }
// };

class Solution {
public:
    int minFlipsMonoIncr(string s) {
        if(s.size()==0){
            return 0;
        }
        int countFlips = 0;
        int countOnes = 0;
        for(auto ele:s){
            if(ele=='0'){
                if(countOnes==0)
                    continue;
                else
                    countFlips++;
            }else{
                countOnes++;
            }
            if(countFlips>countOnes){
                countFlips = countOnes;
            }
        }
        return countFlips;
    }
};