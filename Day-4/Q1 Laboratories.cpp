//https://www.codechef.com/problems/GOOGOL05

#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

typedef long long int ll;



int main()
{
    fastio();
    int n;
    cin>>n;
    map<string,int> m;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        m[s]++;
    }
    for(auto x:m){
        cout<<x.first<<' '<<x.second<<'\n';
    }
    return 0;
}