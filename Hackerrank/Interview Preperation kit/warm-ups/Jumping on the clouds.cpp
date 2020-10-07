// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c) {
    int n=c.size();
    if(n==0)return 0;
    if(n==2 && c[0]==0 && c[1]==0)return 1;
    int i=0,count=0;
    while(i<n){
        if(c[i]==0 && c[i+2]==0){
            i+=2;count++;
        }
        else if(c[i]==0 && c[i+1]==0){
            i++;count++;
        }
        else return 0;
    }
    return count-1;
}
