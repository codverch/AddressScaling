#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "../../include/sim_api.h"

#define NUM_ARR_ELE 1000000

int accessArray(int *arr, int arr_index);

int sumArray(int *arr, int num_ele);


int main() 
{
    int *arr = (int *)malloc(NUM_ARR_ELE * sizeof(int));

    if (arr == NULL) 
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    int sum = 0;

    for (int i = 0; i < NUM_ARR_ELE; i++) 
    {
        arr[i] = i;
    }

    // Sum of N elements of an array
    sum = sumArray(arr, NUM_ARR_ELE);
    printf("Sum of %d elements of an array: %d\n", NUM_ARR_ELE, sum);

    free(arr);
    return 0;
}

// Access array elements in the array (memory)
int accessArray(int *arr, int arr_index) 
{
    return arr[arr_index];
}

// Sum of N elements of an array
int sumArray(int *arr, int num_ele) 
{
    int sum = 0;

    // One iteration before the measurement
    for(int j=0; j<10; j++)
    {
        for (int i = 0; i < num_ele; i++) 
        {
            sum += accessArray(arr, i);
        }
    }
    
    SimRoiStart();

    // 10 iterations
    for(int j=0; j<10; j++)
    {
        for (int i = 0; i < num_ele; i++) 
        {
            sum += accessArray(arr, i);
        }
    }

    SimRoiEnd();

    return sum;
}
