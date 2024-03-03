#include<bits/stdc++.h>
using namespace std;




// // Selection Sort

// // Ex:
// // arr = {8, 6, 2, 5, 1};

// // Time Complexity: O(n^2)
// //Space Complexity: O(1)

// void selectionSort(vector<int>& arr) {

//     int n = arr.size();

//     for (int i = 0; i < n; i++) {

//         int min = i;

//         for (int j = i; j < n; j++) {

//             if (arr[j] < arr[min]) {

//                 min = j;
//             }
//         }

//         int temp = arr[i];

//         arr[i] = arr[min];

//         arr[min] = temp;
//     }
// }




// //Bubble Sort

// // Ex:
// // arr = {8, 6, 2, 5, 1};

// //Time Complexity: O(n^2)
// //Spcae complexity: O(1)

// void bubbleSort(vector<int>& arr) {

//     int n = arr.size();

//     for (int i = n-1; i>=0; i--) {

//         for (int j = 0; j < n - i; j++) {

//             if (arr[j] > arr[j + 1]) {

//                 int temp = arr[j];

//                 arr[j] = arr[j + 1];

//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }




// //Insertion Sort

// // Ex:
// // arr = {8, 6, 2, 5, 1};

// //Time Complexity: O(n^2)
// //Space Complexity: O(1)

// void insertionSort(vector<int>& arr)
// {
//     int n = arr.size();
    
//     for(int i = 0; i<n; i++){
//         int j=i;
//         while(j>0 && arr[j-1]>arr[j]){
//             int temp = arr[j-1];
//             arr[j-1] = arr[j];
//             arr[j] = temp;
//             j--;
//         }
//     }  
// }




// //Merge Sort
 
// // Ex:
// // arr = {8, 6, 2, 5, 1};

// //Time Complexity: O(nlogn)
// //Space Complexity: O(n)

// void merge(vector<int> &arr, int low, int mid, int high){

//     vector<int> temp;

//     int left= low;

//     int right = mid+1;

//     while(left<=mid && right <=high){

//         if(arr[left]< arr[right]){

//             temp.push_back(arr[left]);

//             left++;

//         } else {

//             temp.push_back(arr[right]);

//             right++;

//         }

//     }

//     while(left<=mid){

//         temp.push_back(arr[left]);

//         left++;

//     }

//     while(right<=high){

//         temp.push_back(arr[right]);

//         right++;

//     }

//     for(int i = low ;i<=high;i++){

//         arr[i] = temp[i-low];

//     }

// }

// void mergeSort(vector<int> &arr, int l, int r) {

//     int low = l;

//     int high = r;

//     if(low == high){

//         return;

//     }
    
//     int mid = (low + high)/2;

//     mergeSort(arr, low, mid);

//     mergeSort(arr,mid+1, high);

//     merge(arr, low, mid,high);

// }




// //Quick Sort

// // Ex:
// // arr = {8, 6, 2, 5, 1};

// //Time Complexity: O(nlogn)
// //Space Complexity: O(1)

// int partitionArray(int arr[], int low, int high) {

//     int pivot = arr[low];

//     int i = low;

//     int j = high;

 
//     while(i<j) {

//         while(arr[i] <= pivot && i <= high - 1){

//             i++;

//         }

//         while(arr[j] > pivot && j >= low + 1){

//             j--;

//         }

//         if(i<j) swap(arr[i], arr[j]);

//     }

//     swap(arr[j], arr[low]);

//     return j;

// }

// void quickSort(int arr[], int low, int high) {

//     if(low < high) {
        
//         int pIndex = partitionArray(arr, low, high);

//         quickSort(arr, low , pIndex - 1);

//         quickSort(arr, pIndex + 1, high);
//     }

// }


int main(){
    vector<int> arr = {8, 6, 2, 5, 1};
    // selectionSort(arr);
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
