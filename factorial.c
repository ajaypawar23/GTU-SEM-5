#include<stdio.h>
#include<conio.h>
void fact(int n)
{
    int f = 1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("\nThe factorial is %d",f);
}
int rfact(int n1)
{
    int factn=1;
    if(n1!=0){
    factn = rfact(n1-1)*n1;}
    return factn;
}
int main()
{
    int n;
    printf("\nEnter the number to find factorial\n");
    scanf("\n %d",&n);
    printf("\n\nItrative");
    fact(n);
    printf("\n\nRecursive \n");
    printf("The factorial is %d",rfact(n));
    return 0;
}