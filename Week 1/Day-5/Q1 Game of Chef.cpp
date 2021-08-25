//https://www.codechef.com/problems/CHGM1

#include <iostream>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
	{
	    long n;cin>>n;
	    long nums[n];
	    for(long i=0;i<n;i++)cin>>nums[i];
	    long res=nums[0],maxEnding=nums[0];
        for(long i=1;i<n;i++){
            maxEnding=max(nums[i],nums[i]+maxEnding);
            res=max(res,maxEnding);
        }
        cout<< res<<'\n';
	    
	}
}
