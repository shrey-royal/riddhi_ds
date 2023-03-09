#include<bits/stdc++.h>
using namespace std;

// Function to left rotate the array
void Rotate(int arr[], int d, int size){
    //storing rotated version of array
    int temp[size];

    //keeping track of current index of temp array
    int k = 0;

    //storing the size-d elements in temp array
    for (int i = d; i < size; i++) {
        temp[k] = arr[i];
        k++;
    }

    //storing the first d elements in temp array
    for (int i = 0; i < d; i++) {
        temp[k] = arr[i];
        k++;
    }

    //copying the temp array to original array
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}

//utility function to print the array
void printArray(int arr[], int size){
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Driver code
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int d = 2;

    Rotate(arr, d, size);
    printArray(arr, size);

    return 0;
}