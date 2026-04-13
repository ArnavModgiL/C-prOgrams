/* 💾 Dynamic Memory Allocation (DMA) in C

Dynamic Memory Allocation ka matlab hai:

👉 Program run hone ke time memory allocate karna.

Memory heap area me allocate hoti hai.

Static memory me size fix hota hai, but dynamic memory me size runtime par decide hota hai.

Example:
User se puchna ki kitne numbers store karne hain. */


// Static Memory : -

int arr[10];

// Size fixed HAI :
// Compile TIme par decide hota hai -

// Dynamic Memory : 

int *arr;
// arr = (int*) malloc(10 * sizeof(int));

// size runtime par decide hota hai -
// Memory HEAP me allocate hoti hai -

// Malloc : -- [ Memory ALLocations ]

// synatx: 

// ptr = (type*) malloc(size);

// Exmaple :

#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;
    ptr = (int*) malloc(5 *sizeof(int));

    for(int i = 0; i < 5; i++) {
        scanf("%d",&ptr[i]);
    }

    for(int i = 0; i < 5; i++) {
        printf("%d ",ptr[i]);
    }
    free(ptr);
    return 0;
}

// user input store ho rahe hai --
// memory runtime par allocate hui --


// CALLOC() -- contiguous Allocation : 

// Memory intitalized to 0 :
// two arguments :

// synatx: 

// ptr = (type *) calloc(n,size);

#include<stdio.h>
#include<stdlib.h>

int main() {

    int *ptr;

    ptr = (int*) calloc(5,sizeof(int));

    for(int i = 0; i < 5; i++) {
        printf("%d ",ptr[i]);
    }
    free(ptr);

    return 0;
}

// REALLOC -- MEMORY SIZE CHANGE KANRE --

#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;

    ptr = (int*) malloc(3 * sizeof(int));
    ptr = (int*) realloc(ptr, 6 * sizeof(int));

    free(ptr);

    return 0;

} // memory increase ya decrease kar sakte ho -

// free() -- allocated memory ko release karna -

// synatx :  -- free(ptr);

// aghr free nahi karogye to memory leak ho skata hai -

#include<stdio.h>
#include<stdlib.h>

int main() {

    int n;
    int *arr;

    printf("ENTER NUMBER OF ELEMENTS: ");
    scanf("%d",&n);

    arr = (int*) malloc( n * sizeof(int));

    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);

    }
    for(int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }

    free(arr);
    return 0;

} // user jitne numbers bole utni memory allocate hogyi --:
