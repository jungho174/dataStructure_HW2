#include <stdio.h>
#include <stdlib.h>


void main()

{

    int list[5]; 
    int *plist[5] = {NULL,}; // int타입 다섯개짜리 배열 list, 포인터 배열 plist 선언, plist는 NULL로 초기화

    plist[0] = (int *)malloc(sizeof(int)); //plist[0]에 int형 데이터를 저장하기 위한 메모리 할당

    list[0] = 1; 
    list[1] = 100;

    *plist[0] = 200;

    printf("[----- [조정호] [2020039032] -----]\n");

    printf("value of list[0] = %d\n", list[0]);
    printf("address of list[0]       = %p\n", &list[0]);
    printf("value of list            = %p\n", list);//list라는 array의 이름은 결국 list[0]의 주소와  같음
    printf("address of list (&list)  = %p\n", &list); 

    printf("----------------------------------------\n\n");
    printf("value of list[1]    = %d\n", list[1]);
    printf("address of list[1]  = %p\n", &list[1]);
    printf("value of *(list+1)  = %d\n", *(list + 1)); /*list가 list[0]과 같았으니 list + 1은 list[1]
    과 같음. int 형이므로 list[0] 주소에서 4바이트만큼 이동한 주소*/
    printf("address of list+1   = %p\n", list+1);

    printf("----------------------------------------\n\n");

    printf("value of *plist[0] = %d\n", *plist[0]);//plist가 가리키는 곳의 값 = 200
    printf("&plist[0]         = %p\n", &plist[0]);//pliist의 주소
    printf("&plist            = %p\n", &plist);//plist의 주소
    printf("plist             = %p\n", plist);//plist라는 배열의 이름은 주소와 같으므로 결국 같은값
    printf("plist[0]          = %p\n", plist[0]);//plist가 가리키는 곳의 주소
    printf("plist[1]          = %p\n", plist[1]);
    printf("plist[2]          = %p\n", plist[2]);
    printf("plist[3]          = %p\n", plist[3]);
    printf("plist[4]          = %p\n", plist[4]);//나머지는 메모리 할당을 받지 않았으므로 값이 없음

    free(plist[0]);

}
