//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        long long N = arr.size();
        long long SN = (N*(N+1))/2;
        long long S2N = (N * (N + 1) * (2 * N + 1)) / 6;
        long long S = 0;
        long long S2 = 0;
        for(auto i:arr){
            S += (long long) i;
            S2 += (long long) i* (long long) i;
        }
        long long val1 = S - SN;
        long long val2 = S2 - S2N;
        val2 = val2/val1;
        long long x = (val1 + val2)/2;
        long long y = val2 - x;
        return {(int)x,(int)y};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends