class Solution {
public:
void fun(vector<int> &edges,vector<int> &v,int node,int dis,vector<int> &vis){
    if(vis[node])return;
    vis[node]=1;
    v[node]=dis;
    if(edges[node]==-1)return;
    int x=edges[node];
    fun(edges,v,x,dis+1,vis);

}
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n=edges.size();
        if(node1==node2)return node1;
        vector<int> two(n,-1),one(n,-1);
        two[node2]=0;
        one[node1]=0;
        vector<int> vis(n,0);
        fun(edges,one,node1,0,vis);
        for(int i=0;i<n;i++)vis[i]=0;
        fun(edges,two,node2,0,vis);
        // for(int i=0;i<n;i++){
        //     cout<<one[i]<<" "<<two[i]<<endl;
        // }
        int ind=-1;
        int mini=1e8;
        for(int i=0;i<n;i++){
            if(one[i]==-1 || two[i]==-1)continue;
            int temp=max(one[i],two[i]);
            if(temp<mini){
                mini=temp;
                ind=i;
            }
        }
        return ind;
    }
};