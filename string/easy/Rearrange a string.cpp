#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,i,x[26],j,sum;
string str;
char g;
cin>>tc;
while(tc--)
{
cin>>str;
memset(x,0,sizeof(x));
sum=0;
for(i=0;i<str.length();++i)
{
if(str[i]>=48&&str[i]<=57) sum=sum+(str[i]-'0');
else
{
x[str[i]-'A']++;
}
}
for(i=0;i<26;++i)
{
for(j=0;j<x[i];++j)
{
g='A'+i;
cout<<g;
}
}
cout<<sum<<"\n";
}
return 0;
}