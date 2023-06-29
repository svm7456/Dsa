 
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Please enter size of array \n";
    cin>>n;
    int k;
    cout<<"Please enter how many times do you want to rotate \n";
    cin>>k;
    int arr[n];
    int m=sizeof(arr)/sizeof(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int crr[k];
    for(int i=0;i<k;i++){
        crr[i]=arr[i];
    }
    cout<<"Changing into new = ";
    int i=k;
    while(i<n){
        arr[i-k]=arr[i];
        cout<<arr[i]<<" ";
        i++;
    }
    int j=0;
    for(int i=n-k;i<n;i++){
        arr[i]=crr[j];
        j++;
    }
    cout<<"\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
