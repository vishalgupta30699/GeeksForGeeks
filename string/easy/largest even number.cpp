#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n,i,g,min,index;
cin>>tc;
while(tc--)
{
cin>>n;
vector<int> v;
while(n>0)
{
v.push_back(n%10);
n=n/10;
}
min=INT_MAX;
sort(v.begin(),v.end(),greater<int>() );
for(i=0;i<v.size();++i)
{
if(v[i]%2==0&&v[i]<min)
{
min=v[i];
index=i;
}
}
if(min==INT_MAX)
{
for(i=0;i<v.size();++i) cout<<v[i]<<" ";
}
else
{
g=v[index];
v[index]=v[v.size()-1];
v[v.size()-1]=g;
for(i=0;i<v.size();++i) cout<<v[i]<<" ";
}
cout<<"\n";
}
return 0;
}