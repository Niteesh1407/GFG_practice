//link: https://practice.geeksforgeeks.org/problems/find-nth-element-of-spiral-matrix/1

CODE:

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		int rs=0,cs=0,re=n-1,ce=m-1;
 		int i=0,j=0;
 		while(i<(n*m)){
 		    j=cs;
 		    while(j<=ce && i<(n*m)){
 		        k--;
 		        i++;
 		        if(k==0)
 		        return a[rs][j];
 		        j++;
 		    }
 		    rs++;
 		    j=rs;
 		    while(j<=re && i<(n*m)){
 		        k--;
 		        i++;
 		        if(k==0)
 		        return a[j][ce];
 		        j++;
 		    }
 		    ce--;
 		    j=ce;
 		    while(j>=cs && i<(n*m)){
 		        k--;
 		        i++;
 		        if(k==0)
 		        return a[re][j];
 		        j--;
 		    }
 		    re--;
 		    j=re;
 		    while(j>=rs && i<(n*m)){
 		        k--;
 		        i++;
 		        if(k==0)
 		        return a[j][cs];
 		        j--;
 		    }
 		    cs++;
 		}
 		return -1;
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends
