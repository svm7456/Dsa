 unordered_map<int,int> m;
    int n;
    cout<<"Please enter the size of the array \n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int ele=arr[i];
        auto it=m.find(ele);
        if(it==m.end()){
            m.insert({ele,1});
        }
        else
        {
            it->second=it->second+1;
        }
    }
    for(auto it : m){
       auto x=it.find(1);
       if(x==it.end()){
           cout<<"Not found ";
        }
        else
        {
            cout<<"Answer is "<< x.first<<" ";
        }
    }
    

    return 0;
