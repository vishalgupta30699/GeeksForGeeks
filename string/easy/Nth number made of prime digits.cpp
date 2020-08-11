#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n,i,d;
cin>>tc;
string x[4]={"7","2","3","5"};
string res;
while(tc--)
{
cin>>n;
res="";
while(n>0)
{
d=n%4;
res+=x[d];
if(n%4==0) n--;
n=n/4;
}
n=res.length();
for(i=n-1;i>=0;--i) cout<<res[i];
cout<<"\n";
}
return 0;
}