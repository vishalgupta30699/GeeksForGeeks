#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,i,n,flag,sum,max;
string str;
cin>>tc;
while(tc--)
{
cin>>ws;
getline(cin,str);
n=str.length();
flag=0;
sum=0;
max=0;
for(i=0;i<n;++i)
{
if(str[i]<48||str[i]>57) continue;
else
{
sum=0;
flag=1;
while(str[i]>=48&&str[i]<=57)
{
if(str[i]=='9') flag=0;
sum=(sum*10)+(str[i]-'0');
i++;
}

if(flag&&sum>max) max=sum;
}
}
if(flag) cout<<max<<"\n";
if(sum==0&&flag==0) cout<<"-1\n"; 
}
return 0;
}