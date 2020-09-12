#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int o=-1;
        for (int i = str.length() - 1; i >= 0; i--) {
         if (str[i] == '1'){
            o=i;
            break;
         }
            
        }
        cout<<o<<endl;
        
    }
	//code
	return 0;
}
