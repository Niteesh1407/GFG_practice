//link: https://practice.geeksforgeeks.org/problems/task-scheduler/1

CODE:

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        vector<int>v(26);
        int m=0;
        for(auto ch:tasks){
            v[ch-'A']++;
            m=max(m,v[ch-'A']);
        }
        int mc=0;
        for(int i=0;i<26;i++){
            if(v[i]==m)
            mc++;
        }
        int t=(m-1)*(K+1)+mc;
        return max(t,N);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++) cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}
// } Driver Code Ends
