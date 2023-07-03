//link: https://practice.geeksforgeeks.org/problems/maximum-index3307/1

CODE:

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        int i=0;
        int r=0;
        for(i=0;i<n;i++){
            int b=i;
            int e=n-1;
            while(e>=i && arr[i]>arr[e])
            e--;
            r=max(r,e-b);
            if(i>r)
            break;
        }
        return r;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
