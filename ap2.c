#include <stdio.h>
#include <stdlib.h>

void main()
{

    int list[5];
    int *plist[5];

    list[0] = 10;
    list[1] = 11;

    plist[0] = (int*)malloc(sizeof(int)); //plist[0]에 int형 데이터를 저장하기 위한 메모리 할당


    printf("[----- [조정호] [2020039032] -----]\n");

    printf("list[0] \t= %d\n", list[0]); 
    printf("address of list \t= %p\n", list); // 배열 이름은 list[0] 주소와 동일
    printf("address of list[0] \t= %p\n", &list[0]);
    printf("address of list + 0 \t= %p\n", list+0);
    printf("address of list + 1 \t= %p\n", list+1); // = list[1]
    printf("address of list + 2 \t= %p\n", list+2); // = list[2]
    printf("address of list + 3 \t= %p\n", list+3); // = list[3]
    printf("address of list + 4 \t= %p\n", list+4); // = list[4]
    printf("address of list[4] \t= %p\n", &list[4]);

    free(plist[0]);

}