//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string &s)
	{
	   if(s.size()==0){
	       return 1;
	   }
	   else if (s[0]==s[s.size()-1]){
	       s.erase(0,1);
	       s.erase(s.size()-1,1);
	       isPalindrome(s);
	   }
	   else{
	       return 0;
	   }
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends