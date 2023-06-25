
#include <iostream>
using namespace std;
int findmid(int arr[],int k,int key){
    int start=0;
    int end=k-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=(start+end)/2;
        
    }
    return -1;
}
int main()
{
    
    int even[15]={2,14,16,30,36,40,52,56};
    int odd[15]={1,3,5,13,17,23,29,31,41};
    int n=sizeof(even)/sizeof(n);
    int m=sizeof(odd)/sizeof(m);
    int key1;
    cout<<"please enter a key \n";
    cin>>key1;
    int a=findmid(even,n,key1);
    if(a==-1){
        cout<<"key is not found in the array \n";
    }
    else
    {
        cout<<"index of key is = "<<a;
    }

    return 0;
}
