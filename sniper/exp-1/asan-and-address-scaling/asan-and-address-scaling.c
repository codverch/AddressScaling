// Address Scaling with 56 bytes in hardware, no checks in software since code will be compiled with Address Sanitizer and the location of the correct data computation is in hardware


#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "../../include/sim_api.h"

#define NUM_ARR_ELE 2000000

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
    // Calculate the number of full blocks before the given index
    int full_blocks = arr_index / 16;

    // Calculate the offset within the current block
    int block_offset = arr_index % 16;

    // Calculate the actual index within the array by considering empty spaces
    int actual_index = full_blocks * 14 + block_offset;

    // Access the element at the calculated index
    return arr[actual_index];

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
