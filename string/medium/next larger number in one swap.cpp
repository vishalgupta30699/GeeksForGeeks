#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n,i,j,flag,ind,equal;
string str;
char g;
cin>>tc;
while(tc--)
{
cin>>str;
flag=0;
n=str.length();
equal=0;
for(i=n-1;i>0;--i)
{
equal=0;
for(j=i-1;j>=0;--j)
{
if(str[i]==str[j]) {ind=j;equal=1;}
if(str[j]<str[i]&&equal)
{
g=str[ind];
str[ind]=str[j];
str[j]=g;
flag=1;
break;
}
if(str[j]<str[i]&&equal==0)
{
g=str[j];
str[j]=str[i];
str[i]=g;
flag=1;
break;
}
}
if(flag) break;
}
if(flag==0) cout<<"-1\n";
else
{
cout<<str<<"\n";
}
}
return 0;
}