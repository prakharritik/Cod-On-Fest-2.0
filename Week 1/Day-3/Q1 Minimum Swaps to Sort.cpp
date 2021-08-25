//https://practice.geeksforgeeks.org/problems/minimum-swaps/1 

class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&arr)
	{
	    int c=0;
	   vector<pair<int,int>> v(arr.size());
	   for(int i=0;i<arr.size();i++){
	       v[i].first=arr[i];
	       v[i].second=i;
	   }
	   sort(v.begin(),v.end());
	   bool vis[v.size()]={false};
	   for(int i=0;i<v.size();i++){
	       int j=i;
	       if(i==v[j].second)vis[i]=true;
	       while(!vis[j]){
	           vis[j]=true;
	           j=v[j].second;//cout<<j<<' ';
	            if(!vis[j])c++;
	       }
	   }
	   return c;
	}
};