//https://www.codechef.com/problems/FLOW006
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long n,s=0;
	    cin>>n;
	    while(n!=0){
	        s+=n%10;
	        n/=10;
	    }
	    cout<<s<<'\n';
	}
	return 0;
}
