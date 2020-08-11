#include<bits/stdc++.h>
using namespace std;
#define max_digit 6
int getValue(string str,int i,int m)
{
if(i+m>str.length()) return -1;
int val=0,c;
for(int j=0;j<m;++j)
{
c=str[i+j]-'0';
if(c<0||c>9) return -1;
val=val*10+c;
}
return val;
}
int findMissingNumber(string str)
{
for(int i=1;i<=max_digit;++i)
{
int n=getValue(str,0,i);
if(n==-1) break;
int missingNo=-1;
bool fail=false;
for(int k=i;k!=str.length();k+=1+log10l(n))
{
if(missingNo==-1&&(getValue(str,k,1+log10l(n+2))==n+2))
{
missingNo=n+1;
n+=2;
}
else if(getValue(str,k,1+log10l(n+1))==n+1)
{
n++;
}
else
{
fail=true;
break;
}
}
if(!fail) return missingNo;
}
return -1;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n,i;
string str;
cin>>tc;
while(tc--)
{
cin>>str;
cout<<findMissingNumber(str);
}
return 0;
}