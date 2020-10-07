// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar) {
    if(n==1)return 0;
    if(n==2 && ar[0]==ar[1])return 1;
    if(n==2 && ar[0]!=ar[1])return 0;
    int arr[101];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;++i){
        arr[ar[i]]++;
    }
    int count=0;
    for(int i=0;i<101;++i){
        count+= int(arr[i]/2);
    }
    return count;
}
