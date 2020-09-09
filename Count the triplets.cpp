
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
	cin >> t;
	while(t>0)
	{
	    int n;
	    cin >> n;
	    int i, count = 0, a[n];
	    for(i=0; i<n; i++)
	    {
	        cin >> a[i];
	    }
	    
	    sort(a, a+n);                                                  //built-in sort function using mergesort
	    
        for(i=n-1; i>1; i--)                                         //here i checks for the possible sum value
        {
            int j = 0;
            int k = i-1;
            while(j<k)
            {
                if(a[j]+a[k] == a[i])
                {
                    count++ ;
                    j++;
                    k--;
                    
                }
                else if(a[j]+a[k] < a[i])
                j++;
                else
                k--;
            }

        }
        if(count!=0)
        cout << count << endl;
        else
        cout << -1 << endl;
	    
	    t--;
	}
	return 0;
}
