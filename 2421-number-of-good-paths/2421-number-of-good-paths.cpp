class UF{
    public:
   vector<int>parent;
   UF(int n){
       parent.resize(n);
       for(int i=0;i<n;i++){
           parent[i]=i;
       }
   }
   int find(int x){
       if(parent[x]==x)
       return x;
       return parent[x]=find(parent[x]);
   }
   void Union(int x,int y){
      int parx=find(x);
       int pary=find(y);
       if(parx==pary)
       return ;
       parent[pary]=parx;
   }
};
class Solution {
public:
    int numberOfGoodPaths(vector<int>& vals, vector<vector<int>>& edges) {
        int n=vals.size();
      sort(edges.begin(),edges.end(),[&](vector<int>&a,vector<int>&b){
          return max(vals[a[0]],vals[a[1]])<max(vals[b[0]],vals[b[1]]);
      });
      UF data(n);
      vector<unordered_map<int,int>>freq(n);
      for(int i=0;i<n;i++){
          freq[i][vals[i]]++;
      }
      int mx;
      int res=0;
      for(vector<int> &x:edges){
          int u=x[0];
          int v=x[1];
          mx=max(vals[u],vals[v]);
          int upar=data.find(u);
          int vpar=data.find(v);
          data.Union(u,v);
         res+=freq[upar][mx]*freq[vpar][mx];
         freq[upar][mx]+=freq[vpar][mx];
         freq[vpar].erase(mx);
      }
       return res+n;
    }
   
};