#include<bits/stdc++.h>
using namespace std;
int main()
{
int tc,n,diff,prev,i;
cin>>tc;
while(tc--)
{
cin>>n;
vector<int> v(n);
for(i=0;i<n;++i) cin>>v[i];
prev=v[1]-v[0];
for(i=1;i<n-1;++i)
{
diff=v[i+1]-v[i];
if(diff==prev>>1||diff==prev<<1) break;
else continue;
}
cout<<v[i-1]+min(diff,prev)<<"\n";
}
return 0;
}