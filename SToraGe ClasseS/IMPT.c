// Storage Classes in C

// This repository contains detailed explanations and C programs related to Storage Classes in C


// Static Variable Output Question : --->

#include<stdio.h>

void fun() {
    static int x = 0;
    x++;
    printf("%d ", x);
}

int main() {
    fun();
    fun();
    fun();
    return 0;
}

Execution:
1st call → x = 1
2nd call → x = 2
3rd call → x = 3

✅ Output:

1 2 3

👉 because static variable apni value retain karta hai.

// Concept: static retains value.



//  Auto Variable Output Question ---->


#include<stdio.h>

void fun() {
    int x = 0;
    x++;
    printf("%d ", x);
}

int main() {
    fun();
    fun();
    fun();
    return 0;
}

Execution:

Har function call pe x dubara create hota hai:

1st call → 1
2nd call → 1
3rd call → 1

✅ Output:

1 1 1

👉 because auto variable recreate hota hai.


// Concept: auto variable recreates every function call.


// Register Variable Question ----->

#include<stdio.h>

int main() {
    register int x = 10;
    printf("%p", &x);
    return 0;
}

// What will happen?

✅ Result:

Compile Time Error

👉 because register variable ka address nahi le sakte.

Error like:

error: address of register variable requested

// Concept: register variable ka address nahi le sakte.


// Extern Variable Question ----->


#include<stdio.h>

extern int x;

int main() {
    printf("%d", x);
    return 0;
}

int x = 50;


Execution:

extern int x;

means compiler ko bol rahe ho x kahi aur defined hai.

Later:

int x = 50;

actual definition.

✅ Output:

50

// Concept: declaration vs definition.


// Scope + Static Combined : ------->

#include<stdio.h>

void fun() {
    static int x = 5;
    x++;
    printf("%d ", x);
}

int main() {
    fun();
    {
        fun();
    }
    fun();
    return 0;
}

Execution:

1st call → 6
2nd call → 7
3rd call → 8

✅ Output:

6 7 8

👉 { } block ka koi effect nahi because function call ho raha hai.

// Concept: scope and lifetime.
