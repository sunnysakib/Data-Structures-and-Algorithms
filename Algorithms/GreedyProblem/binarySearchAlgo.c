// Binary Search Algorithms
#include <stdio.h>

// arr[] = {10,20,30,40,50,60};

int main(void) {
  int arr[] = {10,20,30,40,50,60,70};
  int x = 30;
  int n = sizeof(arr)/sizeof(arr[0]);
  int result = binarySearch(arr, 0, n-1,x);

  if(result==0){
    printf("element not found");
  } else{
    printf("element found at index %d", result);
  }
}

int binarySearch(int arr[], int start , int end, int key){
  while(start<=end){
    int mid = start+(end-start)/2;
    if(arr[mid] == key){
      return mid;
    }
    if(arr[mid] < key){
      start = mid + 1;
    } else {
        end = mid - 1;
    }

  }
    return 0;

};
