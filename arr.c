#include <stdio.h>

int main()
{

    // array initialization using initialier list
    int arr[5] = { 10, 20, 30, 40, 50 };

    // array initialization using initializer list without
    // specifying size
    int arr1[] = { 1, 2, 3, 4, 5 };

    // array initialization using for loop
    float arr2[5];
    for (int i=0;i<5;i++){
        arr2[i] = i * 2.1;
     
    }
    
    printf("element at arr[0] is %d\n",arr[0]);
    printf("%d is the element in arr1[0] \n", arr1[0]);
    printf("%f is element in arr2[1]\n",arr2[1]);
}