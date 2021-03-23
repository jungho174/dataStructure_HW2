#include <stdio.h>


struct student1 {

    char lastName;
    int studentId;
    char grade;

};

typedef struct {

    char lastName;
    int studentId;
    char grade;
} student2;

int main()
{

    printf("[----- [조정호] [2020039032] -----]\n\n");

    struct student1 st1 = {'A', 100, 'A'}; //struct 써야됨

    printf("st1.lalstName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade =  %c\n", st1.grade);

    student2 st2 = {'0', 200, '0'}; //typedef를 사용했기때문에 struct를 안써도 됨

    printf("\nst2.lalstName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade =  %c\n", st2.grade);

    student2 st3;

    st3 = st2; //st2의 값들을 st3에 그대로 입력

    printf("\nst3.lalstName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade =  %c\n", st3.grade); //st2와 동일한 결과 출력
    
    /*equality test*/
    /*if(st3 == st2)
        print("equal\n");
    else
        printf("not equal\n");
    이렇게 하면 안되고 멤버변수들 하나씩 비교해야함
    */
    return 0;
}