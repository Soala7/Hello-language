#include <stdio.h>

int main()
{
    printf("Hello, World!\n");
    printf("I am Soala\n");
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
    printf("\"I like programming in C!\" By Soala\n");

    int age = 16;
    float average = 74.87;
    char grade = 'A';
    char name[] = "Soala";
    printf("My name is %s, I am %d years old, my average is %.2f, and my grade is %c.\n", name, age, average, grade);
    // %s is for strings, %d for integers, %.2f for floating-point numbers, and %c for characters.
    return 0;

}
