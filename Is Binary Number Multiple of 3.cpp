//link: https://practice.geeksforgeeks.org/problems/is-binary-number-multiple-of-30654/1

CODE:

//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    int n=s.size();
	    int res=0,b=1;
	    for(int i=n-1;i>=0;i--){
	        if(s[i]=='1')
	        res=(res+b)%3;
	        b=(b*2)%3;
	    }
	    if(res==0)
	    return 1;
	    else
	    return 0;
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends
