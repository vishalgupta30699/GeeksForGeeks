#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n,i,idx;
string str;
cin>>tc;
while(tc--)
{
cin>>str;
cin>>idx;
stack<char> s;
s.push('[');
for(i=idx+1;i<str.length();++i)
{
if(str[i]=='[') s.push('[');
else if(str[i]==']')
{
s.pop();
if(s.empty()) break;
}
else continue;
}
cout<<i<<"\n";
}
return 0;
}