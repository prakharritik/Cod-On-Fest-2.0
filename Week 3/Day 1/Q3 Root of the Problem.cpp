// https://www.codechef.com/problems/TREEROOT
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int root=0;
	    while(n--){
	        int id,sum;
	        cin>>id>>sum;
	        root+=id-sum;
	    }
	    cout<<root<<endl;
	}
	return 0;
}
