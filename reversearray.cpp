#include<iostream>
using namespace std;
void reverseArray(int arr[],int start,int end){
    while(start<end){
        int temp= arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
    
    start++;
    end--;
    }
}
   void printArray(int arr[],int size){
         for(int i=0;i<size;i++)
         cout<<arr[i]<<" ";
         cout<<endl;
    }
    int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        printArray(arr,n);
        reverseArray(arr,0,n-1);
        cout<<"Reversed array is";
        printArray(arr,n);
        
    }
