class Solution {
public:
    int minJumps(vector<int>& arr) {
        
         unordered_map<int,vector<int>>mp;

         for(int i=0;i<arr.size();i++){

             mp[arr[i]].push_back(i);
         }


         // start bfs traversal

         queue<int>q;
         q.push(0);  // because of we are starting from zero index

         vector<bool>vis(arr.size(),false);

         vis[0]=true;

         int cnt=0;

         while(!q.empty()){


             int n=q.size();

             while(n--){

                 int indx=q.front();
                 q.pop();



                 // check whether we have reached at last index or not

                 if(indx==arr.size()-1){
                     return cnt;
                 }

                 // else 


                 // we have three cases   

                 // indx+1

                 if(indx+1<arr.size() and !vis[indx+1]){

                     q.push(indx+1);
                     vis[indx+1]=true;
                 }


                 // indx-1

                 if(indx-1>=0 and !vis[indx-1]){

                     q.push(indx-1);
                     vis[indx-1]=true;
                 }


                 // now the third wher we have to check the other index with this value at which we are at now

                 // [100,-23,-23,404,100,23,23,23,3,404]


                 for(int newIndx: mp[arr[indx]]){


                     if(!vis[newIndx]){
                         

                         vis[newIndx]=true;
                         q.push(newIndx);

                     }
                 }

                 mp[arr[indx]].clear();



             }


             cnt++;
         }
        

        return -1;

    }
};