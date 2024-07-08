//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
    
    public:
        int evenlyDivides(int N){
            int n = N;
            int totalDigit=0;
            int currentDigit;
            while ( n >= 1 ){
                currentDigit=n%10;
                if (currentDigit != 0 && N%currentDigit==0){
                    totalDigit++;
                }
                n=(n-n%10)/10;
            }
            return totalDigit;
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
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends