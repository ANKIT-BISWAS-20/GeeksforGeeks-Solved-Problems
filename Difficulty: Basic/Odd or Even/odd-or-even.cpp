//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string oddEven(int n) {
        return (n & 1) ? "odd" : "even";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.oddEven(N) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends