#include<stdio.h>
void towerofHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if(n==0)
    return;
    towerofHanoi(n-1,from_rod,aux_rod,to_rod);
    printf("Move disk %d from rod %c to rod %c\n",n,from_rod,to_rod);
    towerofHanoi(n-1,aux_rod,to_rod,from_rod);
}
int main()
{
    int n;
    printf("Enter the no.of disks: ");
    scanf("%d",&n);
    printf("\n");
    towerofHanoi(n,'A','C','B');
    return 0;
}