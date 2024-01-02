#include <stdio.h>
#include <stdlib.h>

int main()
{




    int a=24,b=30, f=15,d=20, y=10, h=20;
    addition(a,b,f);
    subtraction(a,b,f);
    divition(a,b,f);
    multipication(a,b,f,d,y);
    //stringNameprint();
    incrementprogram(h);
    decrementprogram(a);
    assignmentprogram(b,a);

    modulusprogram(b,a);

    return 0;
}

 int addition(int a,int b,int f)

{
      int c=a+b+f;

   printf("added value is :%d\n",c);



}
int subtraction(int a,int b,int f)
{  int c=a+b-f;
   printf("sub value is :%d\n",c);

}
 int divition(int a,int b, int f )
{  float c=(float)(a+b)/f;
   printf("divi  a and b value is :%f\n",c);

 }
 int multipication(int a,int b, int f,int d,int y)
{
   int c=a*b*f*d*y;
   printf("multi vale is  :%d\n",c);
}

int stringNameprint()
{
    char name[10];
    char initial='i';
    strcpy(name,"naveen narayanan");
    printf("my name is ...%s",name);
    printf("\nmy initial is:  %c",initial);

}
int incrementprogram(int a)
{
    while (a<30){
    printf("\n increment value a is :%d",a);
    a++;
    }
}
int decrementprogram(int y)
{
    while (y>15){
    printf("\n decrement value a is :%d",y);
    y--;
    }
}
int modulusprogram(int z,int m)
{
    int o=z%m;
    printf("\n modulus of z and m is: %d",o);
}
int assignmentprogram(int j,int a)
{
    int w=j;
    printf("\n the assign value of : %d",w);
    j+=j;
    printf("\n the assign value of : %d",j);
    j*=5;
    printf("\n the assign value of : %d",j);
    j-=a;
    printf("\n the assign value of : %d",j);
    j%=a;
    printf("\n the assign value of : %d",j);
