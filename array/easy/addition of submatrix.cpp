#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
//cin.tie(NULL);
//cout.tie(NULL);
int tc,n,m,x,i,sum,j;
cin>>tc;
while(tc--)
{
cin>>n>>m;
int v[n][m];
for(i=0;i<n;++i)
{
for(j=0;j<m;++j)
{
cin>>v[i][j];
}
}
int x1,x2,y1,y2;
cin>>x1>>y1>>x2>>y2;
x1--;
y1--;
x2--;
y2--;
sum=0;
for(i=x1;i<=x2;++i)
{
for(j=y1;j<=y2;++j)
{
sum+=v[i][j];
}
}
cout<<sum<<"\n";
}
return 0;
}