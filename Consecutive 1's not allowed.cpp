class Solution{
public:
    
	// #define ll long long
	ll countStrings(int n) {
	    ll ans[n];
	    ans[0]=2;
	    ans[1]=3;
	    ll mod=1000000007;
	    for(int i=2;i<n;i++){
	        ans[i]=(ans[i-1]%mod)+(ans[i-2]%mod);
	    }
	    ll r=ans[n-1];
	    
	    return r%mod;// code here
	}
};
