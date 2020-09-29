#include <math.h>
#include <stdio.h>
    
	int main(){
     calculate();
	 triangle();
	 minMax(); 
	
	}
int calculate () {
	 
	    double a, b, c, x, S1, S2;
    
    	    printf("Enter a = ", a);
    	    scanf("%lf", &a);
    	
    	    printf("Enter b = ", b);
    	    scanf("%lf", &b);
    	
    	    printf("Enter c = ", c);
    	    scanf("%lf", &c);
    	
    	    printf("Enter x = ", x);
    	    scanf("%lf", &x);
    	
    	S1 = a*pow(x,2) + b*x + c;
    	
        if ((pow(b,2) - 4*a*c)>0)
            S2 = sqrt(pow(b,2)- 4*a*c);
        else S2=0;
    
    printf(" S1 = %.2lf , ",  S1);
    
    printf(" S2 = %.2lf ",  S2);

    return 0;
    }
	
void triangle (){
    double a, b, c, p, S1;
     	
    printf("\nEnter a, b, c :", a, b, c);
    scanf("%lf%lf%lf", &a, &b, &c);
    	
        if (a+b>c && b+c>a && c+a>b){
    	p = (a+b+c)/2;
    	S1 = sqrt(p*(p-a)*(p-b)*(p-c));
    	printf("perimeter = %5.3lf\narea = %5.3lf", p*2, S1);
	}
		else
		
        	printf("\na, b, c are not sides of a triangle");
	

    }
    
void minMax (){

int a, b, c, min, max, temp;
          
        printf("\nEnter a, b, c :", a, b, c);
    	scanf("%d%d%d", &a, &b, &c);

           min=max=a;

          if(b>max)

                   max=b;

          if(c>max)

                   max=c;

          printf("\nMaximum %d", max);

          if(b<min)

                   min=b;

          if(c<min)

                   min=c;

          printf("\nMinimum %d", min);
          
        // sap xep 
        if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
 
    if(a>c){
        temp=a;
        a=c;
        c=temp;
    }
 
   if(b>c){
        temp=b;
        b=c;
        c=temp;
    }
 
    printf("\nArrange : %d    %d    %d", a, b, c);
   
    getch();
          
          
          
}



    
    


    
