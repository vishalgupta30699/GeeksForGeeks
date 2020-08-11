#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n,i,l,u;
string lower,upper,str,res;
cin>>tc;
while(tc--)
{
cin>>n;
cin>>str;
vector<int> v(n);
lower="";
upper="";
for(i=0;i<n;++i)
{
if(str[i]>='a'&&str[i]<='z')
{
v[i]=0;
lower+=str[i];
}
else
{
v[i]=1;
upper+=str[i];
}
}
sort(lower.begin(),lower.end());
sort(upper.begin(),upper.end());
res="";
l=0,u=0;
for(i=0;i<n;++i)
{
if(v[i]) res+=upper[u++];
else res+=lower[l++];
}
cout<<res<<"\n";
}
return 0;
}