#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,i,n;
cin>>tc;
while(tc--)
{
cin>>n;
vector<string> v(n);
for(i=0;i<n;++i) cin>>v[i];
map<string,int> map;
for(i=0;i<n;++i)
{
map[v[i]]++;
}
string ans="";
int max;
max=0;
for(auto it:map)
{
if(it.second>max)
{
max=it.second;
ans=it.first;
}
}
cout<<ans<<" "<<max<<"\n";
}
return 0;
}