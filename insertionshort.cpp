#include<iostream>
#include<ctime>
#include<unistd.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of element of array:"<<endl;
    cin>>n;
    cout<<"Enter the array:"<<endl;
    int arr[n];
    clock_t start_time=clock();
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    clock_t end_time=clock();
    cout<<"Using insertion Shorted array:"<<endl;
    for(int i=1; i<n;i++){
        int current =arr[i];
        int j=i-1;
        
        while(arr [j]>current && j>=0){
                
            arr[j+1]=arr[j];
            j--;
           
        }
        arr[j+1]=current;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    
    double time_taken= double(end_time-start_time)/clock_t(100000);

    cout<<"\ntime taken:" <<time_taken<<endl;
    return 0;
    
}