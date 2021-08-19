//https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
public:
    int binarySearch(vector<int> arr, int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }

    return -1;
}

int sorted_array_rotated(vector<int> arr, int l, int r)
{
    int m=0;
    while (l <= r) {
        if(r==1){
            if(arr[0]<arr[1])return 0;
            else return 1;
        }
        if(l==r)return l;
        m = l + (r - l) / 2;
        if (arr[m] < arr[m+1] && arr[m] < arr[m-1])
            return m;
        else if(arr[m] > arr[m+1] && arr[m] > arr[m-1])
            return m+1;
        if (arr[m] > arr[r])
            l = m + 1;
        else
            r = m - 1;
    }
    
    return m;
    
}
    int search(vector<int>& arr, int target) {
        int n=arr.size();
      int   min_ele=sorted_array_rotated(arr,0,n-1);
if(arr[min_ele]==target)return min_ele;
else if(arr[n-1]<target)return binarySearch(arr,0,min_ele-1,target);
else return binarySearch(arr,min_ele,n-1,target);
    }
};