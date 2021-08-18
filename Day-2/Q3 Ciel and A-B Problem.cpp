#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

typedef long long int ll;



int main()
{
    fastio();
    long a,b,ans;
    cin>>a>>b;
    ans=a-b;
    if(ans%10==0|| ans%10==1)ans++;
    else ans--;
    cout<<ans;
    return 0;
}