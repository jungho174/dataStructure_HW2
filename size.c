#include <stdio.h>
#include <stdlib.h>


void main()
{

    printf("[----- [조정호] [2020039032] -----]\n\n");
    
    int **x;

    printf("sizeof(x) = %lu\n", sizeof(x)); //주소를 저장
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //주소를 저장
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //더블 포인터가 가리키는 int형 값 4byte

}