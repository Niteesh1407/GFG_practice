//link: https://practice.geeksforgeeks.org/problems/copy-set-bits-in-range0623/1

CODE:

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        int res=0;
        while(l<=r){
            if((y>>(l-1))&1)
            res=res|(1<<(l-1));
            l++;
        }
        return res|x;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, l, r;
        cin>>x>>y>>l>>r;
        
        Solution ob;
        cout<<ob.setSetBit(x, y, l, r)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
