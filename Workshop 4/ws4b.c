#include<stdio.h>

void input(int *num, int *den); 
void display(int num, int den); 
void simplify(int *num, int *den); 
int UCLN(int x, int y);
int a,b;

int main(){
	program(); 
} 
int program()
{
int num,den,x,y;
char c;
do {

input(&num,&den);
simplify(&num,&den);
printf("%d/%d = %d/%d\n",a,b,num,den);
getch();
printf ("Another run (y/n) : \n");
    do
     {
            c = getch();
       }while (c = 'n' && c != 'y');
   }while (c != 'y');

}


void input(int *num, int *den)
{
int numerator,denominator,k;
printf("Enter numerator:");
scanf("%d",&numerator);
a=numerator;
do
{
printf("Enter denominator:");
scanf("%d",&denominator);
b=denominator;
}
while(k!=0);
*den=denominator;
*num=numerator;


return numerator , denominator;


}

int UCLN(int x, int y)
{
x=abs(x);
y=abs(y);
if (y==0)
return x;
else
return UCLN(y,x%y);
}

void simplify(int *num, int *den)
{
int x,y;
x= *num;
y= *den;
*num=*num/UCLN(x,y);
*den=*den/UCLN(x,y);
}




