class Solution{
public:
    static bool cmp(string x,string y){
        string one=x.append(y);
        string two=y.append(x);
        return (one>two)?true:false;
    }
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	string printLargest(vector<string> &arr) {
	     sort(arr.begin(),arr.end(),cmp);
	     string ans="";
	     for(auto e:arr){
	         ans+=e;
	     }
	     return ans;
	    // code here
	}
