#include<stdio.h>
#include<math.h> 
#include<conio.h>

int main(){
	
	calculate () ;
	primeNumber () ;
}

int calculate(){
	int n, S1, S2 = 1, i;
	double S3 = 0;
	do
	{
    printf("Enter n = ");

        scanf("%d",&n);
		if (n<=5){
		printf("n must be >5, please re enter\n");
		}
    }
            
		while(n<=5);
		
	// Tinh S1	
	
	S1 = ((n * ( n +1 ))/2);
	// Tinh S2
	
	{
	
	    for(i = 1; i <= n; i++) 
   	
    S2 = S2 * (float)i;
    
    // Tinh S3
    
    }
    
     for(i = 1;i <= n;i++)
    {
        S3 +=1/(float)i;
    }
    
	
    printf("S1 = %d", S1);
    printf("\nS2 = %d", (long long)S2);
    printf("\nS3 = %.4f", S3);
    
	return 0;
	
}

 int primeNumber(){
 	int n,i,m=0,a=0;  
 	    printf("\n");
        printf("\nEnter n = ");  
        scanf("%d",&n);  
        
    m=n/2;  
    
    for(i=2;i<=m;i++)  
    {  
    
    if(n%i==0) 
	 
       {  
    
        printf("\n%d is not a prime number", n);  
        
    a=1; 
	 
    break;  
        }  
    
    }  
    if(a==0)  
    
        printf("\n%d is a prime number", n); 
		 
    getch(); 
 } 



	 

