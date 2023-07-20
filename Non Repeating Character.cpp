//link: https://practice.geeksforgeeks.org/problems/non-repeating-character-1587115620/1

CODE:

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
        char ch='$';
        vector<int>v(26,0);
        for(int i=0;i<S.size();i++){
            v[S[i]-'a']++;
        }
        for(int i=0;i<S.size();i++){
            if(v[S[i]-'a']==1){
                ch=S[i];
                break;
            }
        }
        return ch;
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends
