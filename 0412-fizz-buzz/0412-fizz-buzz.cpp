class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>arr;
        
        int i=1;
        while(i!=n+1)
        {
            //cout<<i<<endl;
            if(i % 3 == 0 && i % 5 == 0)
                arr.push_back("FizzBuzz");
            
            else if( i % 3 == 0)
                arr.push_back("Fizz");
            
            else if(i % 5 == 0)
                arr.push_back("Buzz");
            else 
                arr.push_back(to_string(i));
            
            i++;
        }
        
        return arr;
    }
};