//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int countOnes(vector<int> &arr){
        int low = 0;
        int high = arr.size()-1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(arr[mid]==1) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
    
    int rowWithMax1s(vector<vector<int> > &arr) {
        int n = arr.size();
        int m = arr[0].size();
        int index = -1;
        int cnt_max = 0;
        for(int i=0;i<n;i++){
            int current_cnt = m - countOnes(arr[i]);
            if(current_cnt > cnt_max){
                cnt_max = current_cnt;
                index = i;
            }
        }
        return index;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends