#include <stdio.h>


struct student {
    char lastName[13]; // 13bytes 4bytes씩이라 padding을 해서 16bytes를 갖게됨
    int studenId;      //  4bytes 
    short grade;       //  2bytes padding을 해서 4bytes 
    // 16 + 4 + 4 = 24bytes
};

int main()
{

    struct student pst;

    printf("[----- [조정호] [2020039032] -----]\n\n");

    printf("size of student = %ld\n", sizeof(struct student));
    printf("size of int = %ld\n", sizeof(int));
    printf("size of short = %ld\n", sizeof(short));

    return 0;

}