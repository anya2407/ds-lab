#include<iostream>
using namespace std;

void improvedSelectionSort(int arr[], int n){
 int s=0,e=n-1;
 while(s<e){
   int minI=s, maxI=s;
   for(int i=s;i<=e;i++){
     if(arr[i]<arr[minI]) minI=i;
     if(arr[i]>arr[maxI]) maxI=i;
   }
   swap(arr[s],arr[minI]);
   if(maxI==s) maxI=minI;
   swap(arr[e],arr[maxI]);
   s++;
   e--;
 }
}

void printArray(int arr[],int n){
 for(int i=0;i<n;i++) cout<<arr[i]<<" ";
 cout<<endl;
}

int main(){
 int n;
 cout<<"Enter number of elements: ";
 cin>>n;
 int arr[100];
 cout<<"Enter "<<n<<" elements: ";
 for(int i=0;i<n;i++) cin>>arr[i];
 
 cout<<"\nOriginal Array: ";
 printArray(arr,n);

 improvedSelectionSort(arr,n);

 cout<<"Sorted Array (Improved Selection Sort): ";
 printArray(arr,n);
 return 0;
}
