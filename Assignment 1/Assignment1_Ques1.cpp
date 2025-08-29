#include<bits/stdc++.h>

using namespace std;

void displayArr(int* arr, int n){
    cout<<"\nYour array:\t[";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]\n";
}

void displayMenu(){
    cout<<"\n----MENU----"<<endl;
    cout<<"1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.LINEAR SEARCH\n6.EXIT\n"<<endl;
}



int main(){
    int *arr = NULL;
    int input;
    int n = 0;
    while(1){
        displayMenu();
        cin>>input;
        switch(input){
        case 1:
            cout<<"How many elements do you require?\n";
            cin>>n;
            arr = (int*)malloc(n*sizeof(int));
            for(int i = 0; i<n; i++){
                cout<<"Enter element "<<i<<": ";
                cin>>arr[i];
            }
            cout<<"Array created"<<endl;
            continue;
        case 2:
            displayArr(arr, n);
            continue;
        case 3:
            if(arr == NULL){
                cout<<"Array not declared yet.";
                return -1;
            } 
            n++;
            arr = (int*)realloc(arr,(sizeof(int)*n));
            int pos;
            cout<<"Enter index to insert in:\t";
            cin>> pos;
            if(pos<0 || pos >=n){
                cout<<"Error! Invalid input.\n";
                return -1;
            }
            for (int i = n-1; i > pos; i--)
            {
                arr[i] = arr[i-1];
            }            
            cout<<"Enter Element to add at index "<<pos<<":\t";
            cin>>arr[pos];

            cout<<endl<<"Element added."<<endl;
            continue;
        case 4:
            if(arr == NULL){
                cout<<"Array not declared yet.";
                return -1;
            } 
            free(arr);
            n = 0;
            arr = NULL;
            cout<<endl<<"Array deleted."<<endl;
            continue;
        case 5:
            if(arr == NULL){
                cout<<"Array not declared yet.";
                return -1;
            } 
            cout<<"Enter element you want to search:\t";
            int x;
            cin>>x;
            cout<<endl<< "index of element:\t[";
            for(int i = 0; i < n; i++){
                if(arr[i] == x) cout<<i<<", ";
            }
            cout<<"]."<<endl;
            continue;
        case 6:
            cout<<endl<<"Exiting program..."<<endl<<endl;
            return 0;
        default:
            break;
        }
        break;
    }
    free(arr);
    return 0;
}