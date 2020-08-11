#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n,i,prev;
string str;
cin>>tc;
while(tc--)
{
cin>>str;
int x[26]={0};
prev=str[0];
x[str[0]-'A']=1;
for(i=0;i<str.length();++i)
{
if(str[i]==prev) continue;
else if(str[i]!=prev&&x[str[i]-'A']!=1)
{
x[str[i]-'A']=1;
prev=str[i];
}
else break;
}
if(i<str.length()) cout<<"0\n";
else cout<<"1\n";
}
return 0;
}