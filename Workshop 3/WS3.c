#include<stdio.h>

int main(){
    binary();
	sum();
	reverse(); 
	equation();
}

int binary(){
	int n;
	
	printf("Enter n  = ");
	scanf("%d", &n);
	
    printf("%d in binary number format is = ",n); 
	while (n)
	{
		printf("%d", n % 2);
		n /= 2;
	}


	getch();

	return 0;

}

int sum(){
   int n, t, sum = 0, remainder;
 
   printf("\nEnter n = ");
   scanf("%d", &n);
 
   t = n;
 
   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }
 
   printf("Sum of digits of %d = %d", n, sum);
 
   return 0;
}

int reverse(){
    int n, r = 0;
 
  printf("\nEnter a number to reverse : ");
  scanf("%d", &n);
 
  while (n != 0)
  {
    r = r * 10;
    r = r + n%10;
    n = n/10;
  }
 
  printf("\nReverse of the number = %d", r);
 
  return 0;
} 

int equation(){
	
	float a, c, b, delta, x1, x2, x;
	printf("\nEnter a, b, c = ");
	scanf("%f,%f%f", &a, &b, &c);
 
	if(a == 0) { 
		if(b == 0 && c != 0) {
			printf("The equation has no roots\n");
		} else if(b == 0 && c == 0) {
			printf("The equation has infinite roots\n");
		} else {
			x = -c / b;
			printf("Root of the equation = %0.2f", x);
		}
	} else { 
		delta = b * b - a * c * 4; 
		if(delta < 0) { 
			printf("The equation has no roots");
		} else if(delta == 0) { 
			x1 = -b/(2 * a);
 
			printf("The equation has double root x = %0.2f", x1);
		} else { 
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
 
			printf("Root of the equation: \nx1 = %0.2f\nx2 = %0.2f", x1, x2);
		}
	}
 
	return 0;
}



	

            

