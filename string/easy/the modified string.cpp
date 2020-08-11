#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n,i,count,tot,prev;
string str;
cin>>tc;
while(tc--)
{
cin>>str;
prev=str[0];
count=1;
tot=0;
for(i=1;i<str.length();++i)
{
if(str[i]==prev) count++;
else
{
prev=str[i];
tot=tot+((count-1)/2);
count=1;
}
}
tot=tot+((count-1)/2);
cout<<tot<<"\n";
}
return 0;
}