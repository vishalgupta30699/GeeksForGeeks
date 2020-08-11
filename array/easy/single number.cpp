#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n,res,i;
cin>>tc;
while(tc--)
{
cin>>n;
vector<int> v(n);
for(i=0;i<n;++i) cin>>v[i];
res=v[0];
for(i=1;i<n;++i)
{
res^=v[i];
}
cout<<res<<"\n";
}
return 0;
}