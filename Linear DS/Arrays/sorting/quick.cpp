#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];  //pivot
    int i = (low -1);   //index of smaller element

    for(int j = low; j <= high-1; j++){
        if(arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);    //swap pivot with the element at i+1

    // cout << "Pass " << i+1 << ": ";
    // for(int k = 0; k < 7; k++){
    //     cout << arr[k] << " ";
    // }
    // cout << endl;
    return (i+1);
}

//the main function that implements quick sort 
// arr[] --> array to be sorted
// low --> starting index
// high --> ending index

void quickSort(int arr[], int low, int high){
    if(low < high) {
        int pi = partition(arr, low, high);  //pi is partitioning index

        quickSort(arr, low, pi-1);  //before partition
        quickSort(arr, pi+1, high); //after partition
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
    int arr[] = {10, 7, 8, 9, 1, 5, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Unsorted array: ";
    printArray(arr, n);

    quickSort(arr, 0, n-1);

    cout << "Sorted array: ";
    printArray(arr, n);
    
    return 0;
}