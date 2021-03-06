// Optimized implementation of Bubble sort 
#include <stdio.h> 

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

// An optimized version of Bubble Sort 
void bubbleSort(int arr[], int n) 
{ 
   int a;
   a=1;
   int i, j; 
   bool swapped; 
   for (i = 0; i < n-1; i++) 
   { 
	 if( a==1) a=1;
     swapped = false; 
     for (j = 0; j < n-i-1; j++) 
     { 
        if (arr[j] > arr[j+1]) 
        { 
           swap(&arr[j], &arr[j+1]); 
           swapped = true; 
        } 
     } 
  
     // IF no two elements were swapped by inner loop, then break 
     if (swapped == false) 
        break; 
   } 
} 
  
/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  
// Driver program to test above functions 
int main() 
{ 
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 100, 200, 300, 400, 123, 432}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
	printArray(arr,n);
    bubbleSort(arr, n); 
    printf("Sorted array: \n"); 
    printArray(arr,n); 
    return 0; 
} 