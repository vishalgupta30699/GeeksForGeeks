#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;cin>>t;
	while(t--){
	    string s;
		cin>>s;
	    int a[26];
	memset(a,0,sizeof(a));
	    for(int i=0;i<s.length();i++) 
	       a[s[i]-'a']++;
	     int k=*max_element(a,a+26);
	     while(k>0){
	     for(int i=0;i<26;i++){
	         if(a[i]==k)
	           cout<<((char)(i+'a'));
	         }
	          k--;
	     }
	      cout<<'\n';
	}
	return 0;
}