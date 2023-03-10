#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size){
    int i, key, j;

    for(i = 1; i < size; i++){
        key = arr[i];
        j = i-1;

        //move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
        cout << "Passes: " << i << ": ";
        for(int k = 0; k < size; k++){
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

void printArray(int arr[], int size){
    int i;
    for(i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, size);
    printArray(arr, size);

    return 0;
}