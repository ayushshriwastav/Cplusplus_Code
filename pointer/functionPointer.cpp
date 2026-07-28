#include <iostream>
#include <cstdint>
using namespace std;


int main(){
    int a = 10;

    int *ptr = &a;

    int arr[5] = {1, 2, 3, 4, 5};

    int *strptr = arr;

    printf("Value of a: %d\n", *ptr);
    printf("Value of a: %d\n", a);
    printf("Value of a: %p\n", &a);
    printf("Value of a: %p\n", ptr);
    printf("Value of a: %p\n", &ptr);

    printf("\n");
    printf("Value of a: %d\n", *ptr + 5);
    printf("Value of a: %d\n", a + 5);


    printf("Value of a: %p\n", (ptr + 5));
    printf("Value of a: %p\n", (int *)(ptr + 5));
     printf("Value of a: %p\n", (int *)(*&ptr + 5));
    printf("Value of a: %d\n", (a + 5));


    printf("\n");

    printf("address of array \n");
    printf("Value of a: %p\n", arr);
    printf("Value of a: %p\n", &arr);
     printf("Value of a: %p\n", &arr[0]);
    printf("Value of a: %p\n", strptr);
    printf("Value of a: %d\n", *strptr + 1 );
    printf("Value of a: %p\n", &strptr);
     printf("Value of a: %p\n", &strptr + 1);
    printf("Value of a: %p\n", &strptr[0] +1 );
    printf("Value of a: %p\n", arr + 1 );
    printf("Value of a: %d\n", *((strptr +1)+1));


    return 0;
}