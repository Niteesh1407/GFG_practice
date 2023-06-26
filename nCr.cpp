//link: https://practice.geeksforgeeks.org/problems/ncr1019/1

CODE:

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int nCr(int n, int r){
        if(r==0 || n==r)
        return 1;
        if(n<r)
        return 0;
        vector<vector<int>> dp(n+1,vector<int>(n+1));
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
            dp[i][i]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=r;j++){
                dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%1000000007;
            }
        }
        return dp[n][r]%1000000007;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends
