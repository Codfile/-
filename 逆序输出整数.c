#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand (time(0));
    int a=rand()%1000;
    printf("a=%d\n",a);
    int b;
    int c = 0;
    //scanf("%d",&a);
    while(a>0){
        b = a%10;
        //printf("%d",b);  整百位输出，如700，逆序输出为007 
        c =c*10+b;
        a /=10;
        printf("b=%d\n c=%d\n a=%d\n",b,c,a);
        
    }
    printf("c=%d\n",c);    //整数位逆序输出，如1234，逆序输出为4321 
    return 0;
}
