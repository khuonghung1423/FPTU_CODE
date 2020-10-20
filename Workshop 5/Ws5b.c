#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	program1();
	program2();
}

void FunctionToss(){
	int number, tosses;
	printf("Enter number of tosses: ");
	scanf("%d",&number);
	srand(time(NULL));
	tosses=1+rand()%number;
	printf("Number of heads: %d", tosses);
	printf("\nNumber of tails:\t %d", number-tosses);
	float percen=(float)tosses/number*100;
	printf("\npercentage of heads for all tosses: %.2f\n", percen);

}


int program1(){
	int check;
	do{
		printf("............................\n");
		printf("         Coin tossing       \n");
	    printf("............................\n");
		printf("Select options:\n1. Start tossing\n0. Exit\n");
		printf("Your selection (0 -> 1) : ");
		scanf("%d",&check);
	}while(check!=1&&check!=2);
	if(check==1) FunctionToss();
	if(check==2) return 0;
	
}


void reverse(){
	char ch;
	char a[256];
	int n=0,i,word=0;
	printf("................................\n");
	printf("   Input and reverse a string   \n");
	printf("................................\n");
	printf("Enter string ended by . : ");
	do{
	a[n]=getchar();
	}while(a[n++]!='.');
	printf("The original string: ");
	for(i=0; i<n-1;i++){
		putchar(a[i]);
	}
	printf("\nThe reverse string: ");
	for(i=0; i<n;i++){
		putchar(a[n-i-2]);
	}
}

int program2(){
	char check;
	do{
		reverse();
		printf("\n\nAnother run (y/n)? ");
		scanf("%s",&check);
		if(check=='n')	return 0;
	}while(check=='y');
}





	
