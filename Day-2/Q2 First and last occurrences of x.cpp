//https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1

#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


// } Driver Code Ends

int lastSearch(int arr[],int n, int x)
{
    int l=0,r=n-1,res=-1;
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (arr[m] < x)
            l = m + 1;
        else if (arr[m] > x)
            r = m - 1;
        else
            {
                res=m;
                l=m+1;
            }
    }

    return res;
}
int firstSearch(int arr[],int n, int x)
{
    int l=0,r=n-1,res=-1;
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (arr[m] < x)
            l = m + 1;
        else if (arr[m] > x)
            r = m - 1;
        else
            {
                res=m;
                r=m-1;
            }
    }

    return res;
}
vector<int> find(int arr[], int n , int x )
{
    vector<int> res;
    int first,last;
    first=firstSearch(arr,n,x);
    last=lastSearch(arr,n,x);
    res.push_back(first);
    res.push_back(last);
    return res;
}
