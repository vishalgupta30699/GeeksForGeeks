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
for(i=0;i<n-1;++i)
{
g=str[i];
for(j=i+1;j<n;++j)
{
if(g<=str[j])
{
g=str[j];
ind=j;
}
}
if(g!=str[i])
{
g=str[ind];
str[ind]=str[i];
str[i]=g;
break;
}
}
cout<<str<<"\n";
}
return 0;
}