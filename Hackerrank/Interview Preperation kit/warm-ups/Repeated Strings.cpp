// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    int size=s.length();
    long count=0;
    if(n<size){
        for(int i=0;i<n;++i){
            if(s[i]=='a')count++;
            else continue;
        }
    }
    else{
        int j=0;
        for(int i=0;i<size;++i){
            if(s[i]=='a')j++;
            else continue;
        }
        if(n%size==0)
            count+= j*(n/size);
        else{
            count+= j*(n/size);
            int x=(n%size),i=0;
            while(i<x){
                if(s[i]=='a'){
                    count++;i++;
                }
                else i++;
            }
        }
    }
    return count;
}
