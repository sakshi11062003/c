#include<stdio.h>

int main()
{

int a=11,b=23,c=4,d=6;
int e=a++,f=(a+e)||d;
//e=11 then a=a++ -> a=a+1=12
//f=(12+11)||23 = 23||23=1
int x=(c<d)?c:d;
c=8;
    
    printf("value=%d",x);
    printf("\nvalue=%d",a++);//a=12 -> a=13
    printf("\nvalue=%d",a);//therefore  a=13                    
    printf("\nvalue=%d",e);//e=11
    printf("\nvalue=%d",a);//line 13 modified value of a is 13
    printf("\nvalue=%d",f);// f=1
    printf("\nvalue=%d",c+=1);//c=c+1
    printf("\nvalue=%d",(((a+b) % (c+d) & b) | f+c) / 2);// 
    printf("\nvalue=%d",(a+b)) ;
    printf("\nvalue=%d",(c+d));
    printf("\nvalue=%d",(a+b) % (c+d));
    printf("\nvalue=%d",((a+b) % (c+d) & b));
    printf("\nvalue=%d",(f+c));
    printf("\nvalue=%d",(((a+b) % (c+d) & b) | f+c));
    /* code */
    return 0;
}
