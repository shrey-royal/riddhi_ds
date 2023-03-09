#include<bits/stdc++.h>
using namespace std;

//we will print the passes of selection sort and the array elements along with the passes

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n){
    int i, j, min_idx;
    for(i=0; i<n-1; i++){
        min_idx = i;
        for(j=i+1; j<n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
        cout << "Pass " << i+1 << ": ";
        for(int k=0; k<n; k++){
            cout << arr[k] << " ";
        }
        cout << endl;
    }
    cout << "Number of Total passes: " << i+1 << endl;
}

int main(){
    int arr[5] = {65, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<endl;
    selectionSort(arr, n);
    cout<<"\nSorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}