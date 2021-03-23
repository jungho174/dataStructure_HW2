#include <stdio.h>

void print1 (int *ptr, int rows);

int main()
{

    int one[] = {0, 1, 2, 3, 4};

    printf("[----- [조정호] [2020039032] -----]\n\n");

    printf("one     = %p\n", one); // 배열 이름은 배열의 주소
    printf("&one    = %p\n", &one); // = 배열의 주소
    printf("&one[0] = %p\n", &one[0]); // = 배열의 주소
    printf("\n");

    print1(&one[0], 5); 

    return 0;

}

void print1 (int *ptr, int rows)
{ /* print out a one-dimensional array using a pointer*/

    int i;
    printf("Address \t Contents\n");
    for (i=0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); /* rows번째까지 포인터 변수에 1씩 더해가며 주소와 
        그 값을 출력.*/
    printf("\n");

}
