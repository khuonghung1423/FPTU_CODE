#include<stdio.h>
#include<string.h>
int main(){
	int t,i,q[100],b,maxi,index;
	float p[100],value[100],s,max;
	char code[10][100],title[10][100],c;
	t=9999;
	s=0.0;
	printf("*******************************************\n");
		 
		printf("Select option\n");
		printf("1. Enter the list of books\n");
		printf("2. Display the list of books\n");
		printf("3. Sort the list of books by code\n");
		printf("4. Load data from file\n");
		printf("5. Find the <first> max price\n");
		printf("6. Find by code and edit the book\n");
		printf("7. Find by code and delete the book\n");
		printf("0. Exit\n");
		printf("Your selection [0 -> 7]: ");
		scanf("%d",&t);
	if (t != 1){
		printf("there are no list to work with\n");
	}
	else {
		printf("Enter number of books: ");
			scanf("%d",&b);
		for (i=1;i<=b;i++){
			printf("Book %d\n",i);
			printf("Enter code ");
			scanf("%s",&code[i]);
			printf("Enter title ");
			scanf("%s",&title[i]);
			printf("Enter quantity ");
			scanf("%d",&q[i]);
			printf("Enter price ");
			scanf("%f",&p[i]);
			value[i]=p[i]*q[i];
		}
	}
	while (t!=0){
		printf("\n*******************************************\n");
		 
		printf("Select option\n");
		printf("1. Enter the list of books\n");
		printf("2. Display the list of books\n");
		printf("3. Sort the list of books by code\n");
		printf("4. Load data from file\n");
		printf("5. Find the <first> max price\n");
		printf("6. Find by code and edit the book\n");
		printf("7. Find by code and delete the book\n");
		printf("0. Exit\n");
		printf("Your selection [0 -> 7]: ");
		scanf("%d",&t);
			
	
		if (t==1){
			printf("Enter number of books: ");
			scanf("%d",&b);
		for (i=1;i<=b;i++){
			printf("Book %d\n",i);
			printf("Enter code ");
			scanf("%s",&code[i]);
			printf("Enter title ");
			scanf("%s",&title[i]);
			printf("Enter quantity ");
			scanf("%d",&q[i]);
			printf("Enter price ");
			scanf("%f",&p[i]);
			value[i]=p[i]*q[i];
		}
	}

		if (t==2){
		
			
			printf("Code	Title	Quantity    Price	Value\n");
			for (i=1;i<=b;i++){
				printf("%s %9s %9d %9.2f %9.2f\n",code[i],title[i],q[i],p[i],value[i]);
				s=s+value[i];
			}
			printf("                                Total Value %f\n",s);
		}
		if (t==5){
			max=p[1];
			for (i=1;i<=b;i++)
				if (p[i]>max){
					max=p[i];
					maxi=i;
				} 
			printf("%s %s\n",code[maxi],title[maxi]);
			
		}
		if (t==6){
			printf("Enter code \n");
			scanf("%s",&c);
			for (i=1;i<=b;i++)
				if (strcmp(code[i],c)==0) index=i;
			
		}
	}
}
