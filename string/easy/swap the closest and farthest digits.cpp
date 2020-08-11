#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin.tie(NULL);
int tc,n,l1,l2;
string n1,n2;
char g;
cin>>tc;
while(tc--)
{
cin>>n1>>n2;
l1=n1.length();
l2=n2.length();
g=n1[0];
n1[0]=n2[l2-1];
n2[l2-1]=g;
g=n1[l1-1];
n1[l1-1]=n2[0];
n2[0]=g;
cout<<n1<<" "<<n2<<"\n";
}
return 0;

}