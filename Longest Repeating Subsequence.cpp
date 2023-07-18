//link: https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1

CODE:

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    string s=str;
		    int n=s.size();
		    vector<vector<int>>v(n+1,vector<int>(n+1,0));
		    for(int i=1;i<=n;i++){
		        for(int j=1;j<=n;j++){
		            if(str[i-1]==s[j-1] && i!=j)
		            v[i][j]=1+v[i-1][j-1];
		            else
		            v[i][j]=max(v[i][j-1],v[i-1][j]);
		        }
		    }
		    return v[n][n];
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
