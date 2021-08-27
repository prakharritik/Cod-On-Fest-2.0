//https://www.codechef.com/problems/TLG
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,s=0,t=0,l=0,w;
	cin>>n;
	while(n--){
	    int x1,x2;
	    cin>>x1;
	    s+=x1;
	    cin>>x2;
	    t+=x2;
	    if(l<abs(s-t))
	    {
	        l=abs(s-t);
	        w=(s<t)?2:1;
	    }

	}
	if(s<t)cout<<w<<' '<<l;
	else cout<<w<<' '<<l;
	return 0;
}
