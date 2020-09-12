#include <bits/stdc++.h>
using namespace std;

int main() {
	 int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        s.insert(s.end(),'.');
        int j=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                reverse(s.begin() + j , s.begin() + i);
                j=i+1;
            }
        }
        s.pop_back();
        cout<<s<<endl;
    }
	//code
	return 0;
}
