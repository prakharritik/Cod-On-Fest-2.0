//https://www.codechef.com/problems/EXPCODE1/

#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

typedef long long int ll;



int main()
{
    fastio();
    long n,i,k;
    cin>>n;
    long a[n];
    for(i=0;i<n;i++)cin>>a[i];
    cin>>k;
    sort(a,a+n);
    cout<<a[n-1]<<'\n'<<a[n-k];
    return 0;
}