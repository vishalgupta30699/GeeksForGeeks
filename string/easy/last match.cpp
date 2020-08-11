#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s,s1;
	    cin>>s;
	    cin>>s1;
	    int i;
	    int p;
	    p=s.rfind(s1);
        if(p!=-1)
            cout<<p+1;
        else
            cout<<"-1";
            cout<<endl;
	}
	return 0;
}
