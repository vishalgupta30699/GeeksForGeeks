#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n,i;
cin>>tc;
while(tc--)
{
cin>>n;
vector<string> v(n);
for(i=0;i<n;++i) cin>>v[i];
sort(v.begin(),v.end());
cout<<v[0]<<" "<<v[v.size()-1]<<"\n";
}
return 0;
}