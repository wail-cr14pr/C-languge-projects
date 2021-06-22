/*
              Pr. Box               
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
| Date & Time: 21/05/2021 at 17:38 |
|                                  |
| Creator: Ouweis Wail Sari-Bey    |
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Find GCD of two numbers x,y example:
------------------------------------
------------------------------------
$gcc Gcd.c -lm
$./a.out

write the 2 numbers :
56
42
gcd is :14
result= is :4/3

$
 ____________________________________
|                                    |
|                DONE                |
|____________________________________|

*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void gcd(float x1,float y1,float xp,float yp)
{
    int rest;
    int restS;
    if (xp==yp)
    {
        printf("\n gcd is : 1 \n");
    }
    else if (yp>xp)
    {
        while (rest!=1)
        {
            rest=((yp/xp)-floor(yp/xp))*xp;
            restS=xp;
            yp=xp;
            xp=rest;
            if (rest==0)
            {
                printf("gcd is :%i",(int)restS);
                printf("\nresult= is :%i/%i\n",(int)(x1/restS),(int)(y1/restS));
                break;
                
            }
        }
    }
    else if (xp>yp)
    {
        while (rest!=1)
        {
            rest=((xp/yp)-floor(xp/yp))*yp;
            restS=yp;
            xp=yp;
            yp=rest;
            if (rest==0)
            {
                //printf("\ngcd(yp;xp)=%f\n",yp);
                printf("gcd is :%i",(int)restS);
                printf("\nresult= is :%i/%i\n",(int)(x1/restS),(int)(y1/restS));
                break;
            }
        }
    }
    else
    {
        printf("\n gcd is : 1 \n");
    }
}
int main(){
    float x;
    float y;
    printf("write the 2 numbers :\n");
    scanf("%f%f",&x,&y);
    gcd(x,y,x,y);
    return 0;
}