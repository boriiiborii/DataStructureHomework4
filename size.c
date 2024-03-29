#include<stdio.h>
#include<stdlib.h>
void main() {
    int **x;
printf("[----- [hwajinLee] [2020037103] -----]\n");
printf("sizeof(x) = %lu\n", sizeof(x)); //2중포인터라 x는 *x의 주소를 담고있어서 주소의 사이즈인 8이 출력
printf("sizeof(*x) = %lu\n", sizeof(*x)); //2중포인터라 x는 **x의 주소를 담고있어서 주소의 사이즈인 8이 출력
printf("sizeof(**x) = %lu\n", sizeof(**x)); //2중포인터에서 **x는 int형으로 담겨있으므로 int사이즈인 4가 출력
}
