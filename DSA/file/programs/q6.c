#include <stdio.h>  
    int linearSearch(int a[], int n, int val) {  
      for (int i = 0; i < n; i++)  
        {  
            if (a[i] == val)  
            return i+1;  
        }  
      return -1;  
    }  
    int main() {  
      int a[] = {80, 24, 37, 11, 58, 40, 15, 14, 52}; // given array  
      int val = 40; // value to be searched  
      int n = sizeof(a) / sizeof(a[0]); // size of array  
      int res = linearSearch(a, n, val); // Store result  
      printf("The elements of the array are - ");  
      for (int i = 0; i < n; i++)  
      printf("%d ", a[i]);   
      printf("\nElement to be searched is - %d", val);  
      if (res == -1)  
      printf("\nElement is not present in the array");  
      else  
      printf("\nElement is present at %d position of array", res);  
      return 0;  
    }  
