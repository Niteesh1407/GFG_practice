//link: https://practice.geeksforgeeks.org/problems/next-happy-number4538/1

CODE:

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    bool isHappy(int n) {
        if(n==1 || n==7)
        return true;
        else if(n<10)
        return false;
        int sum=0;
        while(n){
            sum=sum+(n%10)*(n%10);
            n=n/10;
        }
        return isHappy(sum);
    }
    int nextHappy(int N){
        int k=N+1;
        while(isHappy(k)==false){
            isHappy(++k);
        }
        return k;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
