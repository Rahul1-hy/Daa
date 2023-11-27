#include<iostream>
#include<ctime>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of element of array:"<<endl;
    cin>>n;
    cout<<"Enter the array:"<<endl;
    int arr[n];
    clock_t start_time=clock();
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    clock_t end_time=clock();
    cout<<"using selection shorting array:"<<endl;
    
    for(int i=0; i<n-1; i++){
        for(int j=i+1;j<n;j++){
           if (arr[j]<arr[i])
           {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
           }
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    double time_taken=double(end_time-start_time)/clock_t(10000);
    cout<<"\ntime taken:"<<time_taken<<endl;
    return 0;
    
}