//link: https://practice.geeksforgeeks.org/contest/gfg-weekly-coding-contest-108/problems

CODE:

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    int MinCost(int n, int prices[], int dislike[]){
        int c=INT_MAX;
        vector<int>v;
        int m=INT_MAX;
        int in;
        for(int i=0;i<n;i++){
            if(prices[i]<m){
                m=prices[i];
                in=i;
            }
        }
        for(int i=0;i<n;i++){
            if(dislike[in]!=dislike[i]){
                c=min(c,prices[in]+prices[i]);
            }
        }
        if(c==INT_MAX)
        return -1;
        return c;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    Solution ob;
    while(t--)
    {
        int n;
        cin>>n;
        int prices[n];
        int dislike[n];
        for(int i=0;i<n;i++)
        {
            cin>>prices[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>dislike[i];
        }
        cout<<ob.MinCost(n,prices,dislike)<<endl;
    }
}
// } Driver Code Ends
