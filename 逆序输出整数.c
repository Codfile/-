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
        //printf("%d",b);  ����λ�������700���������Ϊ007 
        c =c*10+b;
        a /=10;
        printf("b=%d\n c=%d\n a=%d\n",b,c,a);
        
    }
    printf("c=%d\n",c);    //����λ�����������1234���������Ϊ4321 
    return 0;
}
