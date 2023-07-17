//link: https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1

CODE:

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    string str="";
            queue<char>q;
            unordered_map<char,int>m;
            
            for(int i=0;i<A.size();i++)
            {
                q.push(A[i]);
                m[A[i]]++;
                
                while(!q.empty())
                {
                    if(m[q.front()]>1)
                    {
                        q.pop();
                    }
                    else
                    {
                        str+=q.front();
                        break;
                    }
                }
                if(q.empty())
                {
                    str+="#";
                }
            }
            return str;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
