#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,i,n,bracketCount;
string str;
cin>>tc;
while(tc--)
{
cin>>str;
stack<int> s;
bracketCount=1;
for(i=0;i<str.length();++i)
{
if(str[i]=='(')
{
cout<<bracketCount<<" ";
s.push(bracketCount);
bracketCount++;
}
else if(str[i]==')')
{
cout<<s.top()<<" ";
s.pop();
}
else continue;
}
cout<<"\n";
}
return 0;
}
