//https://practice.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1

class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i=0,j=0,l=0,ans;
        while(i!=n && j!=m){
            if(arr1[i]<arr2[j]){ans=arr1[i];i++;}
            else {ans=arr2[j];j++;}
            l++;
            if(l==k)return ans;
        }
        if(l!=k){
            if(i!=n){
                return arr1[i+k-l-1];
            }
            else return arr2[j+k-l-1];
        }
    }
};