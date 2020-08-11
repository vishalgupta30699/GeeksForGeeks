#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n,m,i;
cin>>tc;
while(tc--)
{
cin>>n;
vector<int> a(n);
int num1,num2;
for(i=0;i<n;++i) cin>>a[i];
cin>>m;
vector<int> b(m);
for(i=0;i<m;++i) cin>>b[i];
num1=0;
for(i=0;i<n;++i)
{
num1=(num1*10)+a[i];
}
num2=0;
for(i=0;i<m;++i)
{
num2=(num2*10)+b[i];
}
cout<<num1+num2<<"\n";
}
return 0;
}