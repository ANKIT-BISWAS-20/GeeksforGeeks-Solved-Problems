//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void bitManipulation(int num, int i) {
        int IthBit = ((num & (1<<i-1)) > 0) ? 1 : 0;
        int SetIthBit = num | (1<<i-1);
        int ClearIthBit = num & ~(1<<i-1);
        cout<<IthBit<<" "<<SetIthBit<<" "<<ClearIthBit;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends