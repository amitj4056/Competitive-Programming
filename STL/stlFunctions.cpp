#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
    //1.MERGE Function
            vector<ll>A = {1,2,15};
            vector<ll>B = {0,13,11};
            vector<ll>C(6);    // C will be final merged vector **define size 
            merge(A.begin(),A.end(),B.begin(),B.end(),C.begin());
            for(int i = 0;i<C.size();i++)
            cout<<C[i]<<" ";   
                /*Output
                    0 1 2 13 11 15
                    */
/*------------------------------------------------------------------------------------------------------------------------------------*/


            
}
