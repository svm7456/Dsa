vector<int> rotateArray(vector<int>& arr, int n) {
    vector<int> v;
    
    int temp=arr[0];
    for(int i=1;i<n;i++){
       arr[i-1]=arr[i];

    } 
    arr[n-1]=temp;
    for(int i=0;i<n;i++){
        v.push_back(arr[i]);
    }
    return v;

}
