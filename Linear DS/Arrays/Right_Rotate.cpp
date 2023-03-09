#include<bits/stdc++.h>
using namespace std;

// Function to right rotate the array
void Rotate(int arr[], int d, int size){
    d = d % size; //d > size

    for(int i=0; i<size; i++){
        if(i < d){
            //printing the rightmost dth elements
            cout << arr[size - d + i] << " ";
        } else {
            //printing the remaining elements
            cout << arr[i - d] << " ";
        }
    }
    cout << endl;
}

// Driver code
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int d = 10;

    Rotate(arr, d, size);

    return 0;
}