//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    long long low = 1;
	    long long high = m;
	    while(low <= high){
	        long long mid = low + (high - low)/2;
	        long long value = 1;
	        for (int i = 1; i <= n; i++) {
                value *= mid;
                if (value > m) {
                    break;
                }
            }
	        if(value == m) return mid;
	        else if(value > m) high = mid - 1;
	        else low = mid + 1;
	    }
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends