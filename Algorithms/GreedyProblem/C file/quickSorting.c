
// Quick Sorting

#include<stdio.h>

int partition(int arr[], int p, int r)
{
    int x = arr[r] ;
    int i = p-1 ;
    for(int j = p ; j <= r-1 ; j++){
        if(arr[j] <= x){
            i = i+1 ;
            int temp = arr[j] ;
            arr[j] = arr[i] ;
            arr[i] = temp ;
        }
    }
        i = i+1 ;
        int temp = arr[r] ;
        arr[r] = arr[i] ;
        arr[i] = temp ;

    return i ;
}

void quickSort(int arr[] , int p , int r)  // r = pivot
{
    if(p < r){
        int q = partition(arr, p, r) ;
        quickSort(arr, p, q-1) ;
        quickSort(arr, q+1, r) ;
    }
}


int main()
{
    int n, arr[100] ;
    // input array size
    scanf("%d", &n) ;

    // input array element
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &arr[i]) ;
    }

    // sorting
    quickSort(arr, 0, n-1) ;

    // print shorting array
    printf("Sorting array ") ;
    for(int i = 0 ; i < n ; i++){
        printf(" %d ", arr[i]) ;
    }

}




