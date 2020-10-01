int atoi(string str)
{
    int i=0,res=0,sign=1;
    if(str[i]=='-'){
        i++;
        sign=-1;
    }
        
    while(str[i]){
        if(str[i]-'0'<0 || str[i]-'0'>9)
            return -1;
        else
            res=res*10+str[i]-'0';
        i++;
    }
    
    return res*sign;
        
    
    //Your code here
}
