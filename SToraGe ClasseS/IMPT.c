// Storage Classes in C

// This repository contains detailed explanations and C programs related to Storage Classes in C


// Static Variable Output Question :

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

// Find the output.

// Concept: static retains value.



//  Auto Variable Output Question


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

// Find the output.

// Concept: auto variable recreates every function call.


// Register Variable Question 

#include<stdio.h>

int main() {
    register int x = 10;
    printf("%p", &x);
    return 0;
}

// What will happen?

// Concept: register variable ka address nahi le sakte.


// Extern Variable Question


#include<stdio.h>

extern int x;

int main() {
    printf("%d", x);
    return 0;
}

int x = 50;

//  Find the output.

// Concept: declaration vs definition.


// Scope + Static Combined :

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

//  Find the output.

// Concept: scope and lifetime.