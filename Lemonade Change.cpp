//link: https://practice.geeksforgeeks.org/problems/lemonade-change/1

CODE:

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        vector<int>v(3,0);
        if(bills[0]==10 || bills[0]==20)
        return false;
        if(bills[0]==5 && bills[1]==20)
        return false;
        int i;
        for(i=0;i<N;i++){
            if(bills[i]==5){
                v[0]++;
            }
            else if(bills[i]==10){
                v[1]++;
                v[0]--;
            }
            else{
                v[2]++;
                if(v[1]>=1){
                    v[1]--;
                    v[0]--;
                }
                else{
                    v[0]=v[0]-3;
                }
            }
            if(v[0]<0 || v[1]<0)
            break;
        }
        if(i==N)
        return true;
        return false;
    }
};


// } Driver Code Ends
