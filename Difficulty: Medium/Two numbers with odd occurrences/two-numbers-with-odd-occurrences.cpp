//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        long long int x = 0;
        for(long long int i = 0; i < N; i++){
            x = x ^ Arr[i];
        }
        long long int rightMost = (( x & ( x - 1 )) ^ x );
        long long int bucket1 = 0;
        long long int bucket2 = 0;
        for(long long int i = 0; i < N; i++){
            if(Arr[i] & rightMost)   bucket1 = bucket1 ^ Arr[i];
            else    bucket2 = bucket2 ^ Arr[i];
        }
        if(bucket1<bucket2) return {bucket2,bucket1};
        return {bucket1,bucket2};
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends