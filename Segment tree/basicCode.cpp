/*

AUTHOR : amitj4056
MNNIT ALLAHABAD
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define flash ios_base::sync_with_stdio(false),cin.tie(NULL)
//declare array(s)
string s;
void build(ll l,ll r,ll node)
{
    if(l==r)
    {
        //assing value to array(s)
        return;
    }
    ll mid = (l+r)/2;
    build(l,mid,2*node);
    build(mid+1,r,2*node+1);
    //upadte array
    //update array
    //update array
    return;
}
void update(ll i,ll val,ll l,ll r,ll node)
{
    // here i is index
    if(l==r)
    {
       //update value in array(s)
       //eg- tree[node] = val and A[i] = val
        return;
    }
    ll mid= (l+r)/2;
    if(i>=l && i<=mid)
    update(i,val,l,mid,2*node);
    else
    update(i,val,mid+1,r,2*node+1);
    //update array(s)
     //example :--------tree[node] = min(tree[2*node],tree[2*node+1]);
     return;
    
}
/*return type*/ query(ll l,ll r,ll start,ll end,ll node)
{
    if(r<start or l>end)
    {
       //return 
    }
    if(l<= start and end<=r)
    {
      // return ans to this query 
    }
    ll mid = (start+end)/2;
    p1 = query(l,r,start,mid,2*node);
    p2 = query(l,r,mid+1,end,2*node+1);
     
     // return accordingly
}
int main()
{
   flash;
   //***** make array start from index 1(imp)
   build(1,n,1);
   while(q--)
   {
      
   }
}

