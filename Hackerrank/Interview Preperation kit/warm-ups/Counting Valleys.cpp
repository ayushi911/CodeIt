// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    if(n<=2)return 0;
    int alti=0,valley=0;
    for(int i=0;i<n;++i){
        if(s[i]=='U'){
            if(++alti==0) valley++;
          }
            else alti--;
    }
    return valley;
}
