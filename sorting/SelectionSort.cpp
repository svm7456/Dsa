
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Please enter the size of array \n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
           int temp=arr[i];
           arr[i]=arr[min];
           arr[min]=temp;
        }
        
    }
    cout<<"Final output is "<<"\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
