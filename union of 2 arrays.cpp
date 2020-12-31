#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n1,n2;
	    cin>>n1>>n2;
	    int a1[n1],a2[n2];
	    set<int> count;
	    for(int i=0;i<n1;i++){
	        cin>>a1[i];
	        count.insert(a1[i]);
	    }
	    for(int i=0;i<n2;i++){
	        cin>>a2[i];
	        count.insert(a2[i]);
	    }
	    
	    cout<<count.size()<<endl;
	 
	 
	    
	}
	return 0;
}
