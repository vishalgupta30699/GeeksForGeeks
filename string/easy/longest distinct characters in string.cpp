#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,i;
string str;
cin>>tc;
while(tc--)
{
cin>>str;
set<char> s;
for(i=0;i<str.length();++i)
{
s.insert(str[i]);
}
cout<<s.size()<<"\n";
}
return 0;
}