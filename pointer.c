#include<stdio.h>
int main()
{
        int B[2][3]={2,3,6,4,5,8};
        int (*p)[3]=B;
        printf("B=%d\t &B[0]=%d\n",B,&B[0]);
        printf("*B=%d\t B[0]=%d\n",*B,B[0]);
        printf("B+1=%d\t &B[1]=%d\n",B+1,&B[1]);
        printf("*(B+1)=%d\t B[1]=%d\n",*(B+1),B[1]);
        printf("*(B+1)+2=%d\t B[1]+2=%d\n",*(B+1)+2,B[1]+2);
        printf("*(*B+1)=%d\t B[0][1]=%d\n",*(*B+1),B[0][1]);
        return 0;
}