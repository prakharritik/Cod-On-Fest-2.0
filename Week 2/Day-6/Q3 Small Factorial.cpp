//https://www.codechef.com/problems/FLOW018
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long fac[21]={1};
    fac[1]=1;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(fac[n]!=0)cout<<fac[n]<<'\n';
		else{long long fact=1;
		for(int i=n;i>=2;i--){
		    if(fac[i])
		    {fact=fact*fac[i];break;}
			fact=fact*i;
			
		}
		fac[n]=fact;
		cout<<fac[n]<<'\n';}
	}
}