#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int size){
    int i, j;
    for(i=0; i<size-1; i++){
        for(j=0; j<size-1; j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
        cout << "Pass " << i+1 << ": ";
        for(int k=0; k<size; k++){
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {5, 1, 4, 2, 8};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Array before sorting: ";
    printArray(arr, size);

    bubbleSort(arr, size);

    cout<<"Array after sorting: ";
    printArray(arr, size);

    return 0;
}