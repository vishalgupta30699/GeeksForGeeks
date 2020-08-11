#include<bits/stdc++.h>
using namespace std;
int main()
{
int tc,n,i,p,tot;
cin>>tc;
while(tc--)
{
cin>>n>>tot;
p=(n*(n+1))>>1;
tot=tot%p;
for(i=1;i<=n;++i)
{
if(tot<i) break;
tot=tot-i; 
}
cout<<tot<<"\n";
}
return 0;
}