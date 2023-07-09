//link: https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1

CODE:

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        sort(arr,arr+n);
        int i=0,k=1;
        while(arr[i]<=0)
        i++;
        set<int>s;
        for(int j=i;j<n;j++)
        s.insert(arr[j]);
        for(auto val:s){
            if(val==k){
                k++;
            }
            else{
                break;
            }
        }
        return k;
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends
