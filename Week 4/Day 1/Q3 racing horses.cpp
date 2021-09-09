//https://www.codechef.com/problems/HORSES

#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++){
			cin>>s[i];

		}

		sort(s,s+n);
		int min=s[1]-s[0];
		for(int i=1;i<n-1;i++){
			if(min>s[i+1]-s[i]){
				min=s[i+1]-s[i];
			}
		}
		cout<<min<<'\n';
	}


	return 0;
}