class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            set<int>result;
            set<int> s1(A,A+n1);
            set<int> s2(B, B + n2);
            set<int> s3(C, C + n3);
            for(int i = 0; i < n1; i++)
            {
                if (s1.find(A[i]) != s1.end() && 
                    s2.find(A[i]) != s2.end() &&    
                    s3.find(A[i]) != s3.end())
                        result.insert(A[i]);
            //code here.
            }
            vector<int> v(result.begin(),result.end());
            return v;
        }

};
