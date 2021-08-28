//https://www.codechef.com/problems/THESAV
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int f=1;
	    stack<char> st;
	    string s;cin>>s;
	    reverse(s.begin(),s.end());
	    for(long i=0;i<s.length();i++){
	        if(s[i]=='0')st.push('0');
	        if(s[i]=='*'){
	            if(!st.empty()) st.pop();
		        if(!st.empty()) st.pop();
		        if(!st.empty())break;
	        }
	    }
	    if(st.size()==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
