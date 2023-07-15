//link: https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1

CODE:

//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    void deletemid(stack<int>&s,int n,int pos){
        if(pos==n/2){
            s.pop();
            return;
        }
        int k=s.top();
        s.pop();
        pos=pos+1;
        deletemid(s,n,pos);
        s.push(k);
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        deletemid(s,sizeOfStack,0);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends
