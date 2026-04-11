// USER INPUT QUESTION FOR PRINTING IN Another FILE : --

#include<stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("Student.txt","w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter thE NAME: ");
    scanf("%s",name);

    printf("Enter AGE: ");
    scanf("%d",&age);

    printf("Enter CGPA: ");
    scanf("%f",&cgpa);

    fprintf(fptr,"%s\t",name);
    fprintf(fptr,"%d\t",age);
    fprintf(fptr,"%f",cgpa);

    fclose(fptr);
    return 0;

}