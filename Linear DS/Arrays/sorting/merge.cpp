#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int left, int mid, int right){
    int i, j, k, size_left, size_right;
    // size of left and right subarrays
    size_left = mid - left + 1;
    size_right = right - mid;

    int left_arr[size_left], right_arr[size_right];
    //fill left and right subarrays
    for(i = 0; i < size_left; i++)
        left_arr[i] = arr[left + i];

    for(j = 0; j < size_right; j++)
        right_arr[j] = arr[mid + 1 + j];

    i=0, j=0, k=left;
    //merge the left and right subarrays
    while(i < size_left && i < size_right){
        if(left_arr[i] <= right_arr[j]){
            arr[k] = left_arr[i];
            i++;
        } else{
            arr[k] = right_arr[j];
            j++;
        }
        k++;
    }

    while(i < size_left){   //if left subarray has more elements
        arr[k] = left_arr[i];
        i++; k++;
    }

    while(j < size_right){  //if right subarray has more elements
        arr[k] = right_arr[j];
        j++; k++;
    }
    
    cout<<"\n\nPass " << i << ": ";
    for(int i = left; i <= right; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void merge_sort(int *arr, int left, int right){
    if(left < right){
        int mid = left + (right - left)/2;
        merge_sort(arr, left, mid); //sort left subarray
        merge_sort(arr, mid+1, right);  //sort right subarray
        merge(arr, left, mid, right);
    }
}

void print_array(int *arr, int size){
    for(int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Given array: ";
    print_array(arr, size);
    merge_sort(arr, 0, size-1);
    cout<<"\nSorted array: ";
    print_array(arr, size);
    return 0;
}