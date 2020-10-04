#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
   int n = s.size();
   string t=s;
   reverse(s.begin(),s.end());
   //Longest Common Subsequence with reverse string = Longest Palindrome Subsequence
   int dp[n+1][n+1];
   for(int i=0;i<n+1;i++){
       for(int j=0;j<n+1;j++){
           if(i==0 || j==0)
            dp[i][j]=0;
       }
   }
    for(int i=1;i<n+1;i++){
       for(int j=1;j<n+1;j++){
           if(s[i-1]==t[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                
       }
    }
   int nl=dp[n][n];
   cout<<n-nl<<endl;
    }
   

	//code
	return 0;
}
