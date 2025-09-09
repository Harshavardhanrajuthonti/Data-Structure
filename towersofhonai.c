#include <stdio.h>
int main() 
{
    int n;
	printf("Enter the number of disks: ");
    scanf("%d", &n);
	printf("Steps to solve the Tower of Hanoi problem:\n");
    twrh(n, 'A', 'B', 'C');
}
void twrh(int n, char a, char b, char c) 
{
    if(n==1) 
    printf("move disk 1 from %c to %c\n", a,c);
    else
    {
    twrh(n - 1,a,c,b);
    printf("Move disk %d from %c to %c\n", n,a,c);
    twrh(n - 1,b,a,c);
	}
}


