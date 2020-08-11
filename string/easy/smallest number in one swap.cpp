#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,i,n,j,ind;
string str;
cin>>tc;
char g;
while(tc--)
{
cin>>str;
n=str.length();
vector<pair<int,int> > v(n);
for(i=0;i<n;++i)
{
v[i]=make_pair(str[i],i);
}
sort(v.begin(),v.end());
for(i=0;i<n;++i)
{
if(str[i]!=v[i].first)
{
g=str[i];
str[i]=str[v[i].second];
str[v[i].second]=g;
break;
}
}
cout<<str<<"\n";
}
return 0;
}