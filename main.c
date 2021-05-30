#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("    To find sum of Geometric Progression");
    printf("\n");
    int a,r,n;
    int an=1;
    int sum=0;
    printf("\n\t Enter first term      :");
    scanf("%d",&a);
    printf("\t Enter common ratio    :");
    scanf("%d",&r);
    printf("\t Enter number of terms :");
    scanf("%d",&n);
    sum=sum+a;
    an=a;
    printf("        ****************************");
    printf("\n\t  Terms of GP : %d",a);
    for (int i=1;i<=n-1;i=i+1){
        an=an*r;
        printf(",%d",an);
        sum=sum+an;
    }
    printf("\n");
    printf("\n\t      Sum of GP :%d",sum);
    printf("\n        ****************************");
    printf("\n");
}
