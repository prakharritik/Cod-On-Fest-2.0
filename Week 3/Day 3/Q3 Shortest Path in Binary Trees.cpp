// https://www.codechef.com/problems/BINTREE
#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int res =0;
        while(x!=y){
           (x>y)?x=x/2:y=y/2;
          
           res++;
        }
        
        cout<<res<<endl;
    }
    
	return 0;
}