class Solution {
public:
    int dayOfYear(string date) {
        int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        int y=stoi(date.substr(0,4));
         int m=stoi(date.substr(5,2));
         if(m==1){
             return stoi(date.substr(8,2));
         }
        int ans=0;
        for(int i=0;i<m-1;i++){
            ans+=days[i];
        }
        if(y%4==0 && m!=2 && y!=1900)
         return (ans+stoi(date.substr(8,2)))+1;

         return (ans+stoi(date.substr(8,2)));
        
    }
};