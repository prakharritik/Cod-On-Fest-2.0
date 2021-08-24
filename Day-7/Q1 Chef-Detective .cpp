//https://www.codechef.com/problems/CHEFDETE
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a;
	cin>>n;
	unordered_set<int> s;
	for(int i=0;i<n;i++){
	    cin>>a;
	    s.insert(a);
	}
	for(int i=1;i<=n;i++){
	    if(s.find(i)==s.end()){
	        cout<<i<<" ";
	    }
	}
	cout<<endl;
	return 0;
}
