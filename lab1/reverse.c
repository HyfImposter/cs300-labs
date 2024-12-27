#include <stdio.h>
#include <stdlib.h>

/**
 * TODO:
 * In this file, you will write two functions:
 *
 * 1. reverse_arr: will take in two inputs a char* array and the number of
 * elements in the array. It's responsible for reversing the input array. You
 * should be modifying this array in place. Meaning that you shouldn't returning
 * anything from this function.
 *
 * 2. swap: will take in two elements from the array and swap them. Returns
 * nothing.
 *
 * Example:
 * Given an array ["hello", "my", "name", "is"], after calling reverse_arr
 * will result in ["is", "name", "my", "hello"]
 */
void swap(char **c1, char **c2) {
    char *tmp = *c1;
    *c1 = *c2;
    *c2 = tmp;
}

void reverse_arr(char **arr, int num) {
    // modify this array in place
    // use 2 pointers method, the first pointer go for 1 step each, the second go for 2 step each
    // until the second pointer reach the '\0' we get to the middle of this array
//     for(int i=0; i<array.length/2; i++)
// { int temp = array[i]; 
// array[i] = array[array.length -i -1]; 
// array[array.length -i -1] = temp; 
// }
    if(num <= 0) {
        return;
    }
    int i = 0;
    int j = num - 1;

    while (i < j) {
        swap(&arr[i], &arr[j]);
        i++;
        j--;
    }
}

