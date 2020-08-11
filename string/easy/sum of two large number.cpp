#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
string s1,s2,res;
char c;
int len1,len2,i,carry,j,temp,tc;
cin>>tc;
while(tc--)
{
cin>>s1>>s2;
len1=s1.length(),len2=s2.length();
if(len2<=len1)
{
carry=0;
for(i=len1-1,j=len2-1;i>=0&&j>=0;--i,--j)
{
temp=((s1[i]-48)+(s2[j]-48)+carry);
res.push_back(temp%10+'0');
carry=temp/10;
}
for(;i>=0;i--)
{
temp=((s1[i]-48)+carry);
c=temp%10+48;
res.push_back(c);
carry=temp/10;
}
for(;j>=0;j--)
{
temp=((s1[j]-48)+carry);
c=temp%10+48;
res.push_back(c);
carry=temp/10;
}
if(carry)
{
c=carry+48;
res.push_back(c);
}
reverse(res.begin(),res.end());
}
if(res.length()==len1) cout<<res<<"\n";
else cout<<s1<<"\n";
}
return 0;
}