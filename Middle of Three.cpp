class Solution{
  public:
    int middle(int A, int B, int C){
      int mx=max(A,max(B,C));
      int mn=min(A,min(B,C));
      return mx^mn^A^B^C;
        //code here//Position this line where user code will be pasted.
    }
};
