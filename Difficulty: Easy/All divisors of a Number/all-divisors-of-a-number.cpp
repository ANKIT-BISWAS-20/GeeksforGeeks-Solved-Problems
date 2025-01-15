//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void print_divisors(int n) {
        vector <int> arr1;
        vector <int> arr2;
        for(int i=1;i*i<=n;i++){
            if(n%i == 0){
                arr1.push_back(i);
                if(n/i != i)    arr2.push_back(n/i);
            }
        }
        for(auto i: arr1){
            cout<<i<<" ";
        }
        int length = arr2.size()-1;
        for(int i=length;i>=0;i--){
            cout<<arr2[i]<<" ";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.print_divisors(n);
        cout << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends