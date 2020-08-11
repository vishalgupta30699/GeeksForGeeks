#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n,i,tot;
string str;
cin>>tc;
while(tc--)
{
cin>>str;
tot=0;
for(i=0;i<str.length();++i)
{
tot=tot+(i*26)+(str[i]-'A')+1;
}
cout<<tot<<"\n";
}
}