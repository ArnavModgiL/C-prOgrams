// Important : - ONE 

// realloc() -- ka use hota hai allreay allocated ka size change krne ke liye .

// syntax:  --
// ptr = (type*) realloc(ptr,new_size);

// ptr - pehle se allocated memory ka address -
// new_ size - new required size -

// Internally kya hota hai --
// realloc() 2 kam karta hai --

// same memory block ko resize karne ki try karta hai --
// Agar possibe nahi hua -
// new memory allocate karta hai -
// old data copy karta hai
// old memory hoti hai free kr deeta hai -

// Exmaple -

#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;
    ptr = (int*) malloc(3 * sizeof(int));

    for(int i = 0; i < 3; i ++){
        ptr[i] = i + 1;
    }
    // resize to 6 elements:
    ptr = (int*) realloc(ptr, 6 * sizeof(int));

    for(int i = 3; i < 6; i++) {
        ptr[i] = i + 1;
    }

    for(int i = 0; i < 6; i++) {
        printf("%d ",ptr[i]);
    }

    free(ptr);

    return 0;

}

// output -- 1 2 3 4 5 6


