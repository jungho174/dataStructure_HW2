#include <stdio.h>

#define MAX_SIZE 100

float sum(float [], int);
float input[MAX_SIZE], answer;
int i;
void main(void)
{

    printf("[----- [조정호] [2020039032] -----]\n\n");

    for(i=0;  i < MAX_SIZE; i++)
        input[i] = i; //input 배열에 1부터 100까지 차례로 집어넣음

    /* for checking call by reference */
    printf("address of input = %p\n", input);

    answer = sum(input, MAX_SIZE);
    printf("The sum is : %f\n", answer); 

}

float sum(float list[], int n)
{

    printf("value of list = %p\n", list); //list가 가리키는 주소
    printf("address of list = %p\n\n", &list); //list의 주소

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum +=  list[i];; //tempsum에 배열 list[0]부터 list[n]까지 값을 모두 더하고 리턴하는 함수
    return tempsum;

}