#include <stdio.h>
struct student {
    char lastName[13];
    int studentId;
    short grade;
};
int main() {
    
    struct student pst;
    /* 13 bytes */
    /* 4 bytes */
    /* 2 bytes */
    printf("[----- [hwajinLee] [2020037103] -----]\n");
    printf("size of student = %ld\n", sizeof(struct student)); 
    printf("size of int = %ld\n", sizeof(int)); 
    printf("size of short = %ld\n", sizeof(short));
    return 0; 
};