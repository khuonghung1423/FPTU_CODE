#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX 100

struct bookinstock{
	char code[10];
	char title[30];
	int quantity;
	double price;
} book[MAX];

void inputBook(int *n){
	int i;
	
	printf("Enter number of books: ");
	while(!scanf("%d",n) ) { 
		fflush(stdin); 
		printf("Please enter number, not characters\n") ; 
		printf("Enter number of books: ");
	}
	
	for(i=1; i <= *n;i++){
		printf("Book %d:\n",i);
		inputCode(i);
		printf("Enter title: "); fflush(stdin); gets(book[i].title);
		printf("Enter quantity: "); 
		while(!scanf("%d", &book[i].quantity) ) { 
		    //fflush(stdin); 
            printf("Please enter quantity, not characters\n") ; 
            fflush(stdin);
		    printf("Enter quantity: ");
	    }    
		//scanf("%d", &book[i].quantity);
		printf("Enter price: ");
		while(!scanf("%lf", &book[i].price) ) { 
		    //fflush(stdin); 
            printf("Please enter price, not characters\n") ;
			fflush(stdin); 
		    printf("Enter price: ");
	    }  
		//scanf("%lf", &book[i].price);
	}
}

void displayBook(int n){
	double total=0;
	int i;
	printf("Code	Title	Quantity    Price	Value\n");
	for(i=1;i<=n;i++){ 
		printf("%s %9s %9d %9.1lf %10.1lf\n", book[i].code, book[i].title, book[i].quantity, book[i].price, book[i].price*book[i].quantity);
		total += book[i].quantity*book[i].price;
	}
	printf("\t\t\tTotal value:  %.1lf\n", total);
}

void inputCode(int i){
	printf("Enter code: ");
	fflush(stdin);
	gets(book[i].code);
	int j;
	for(j = 1; j < i; j++){
		if(strcmp(book[i].code, book[j].code) == 0){ //Check The Same Code
			printf("The code %s already exists, please reenter!\n", book[i].code);
			inputCode(i); 
		}
	}
}

void swap(struct bookinstock *a, struct bookinstock *b){
	struct bookinstock temp;
	temp = *a;
	*a = *b;
	*b = temp;	
}

void sortCode(int n){
	int i;
	int j;
	double total = 0;
	printf("Code	Title	Quantity    Price	Value\n");
	for(i = 1; i <= n ; i++){
		for(j = n ; j > i ; j--){
			if(strcmp(book[j].code, book[j-1].code) < 0){
				swap(&book[j], &book[j-1]);
	        }
		}
		printf("%s %9s %9d %9.1lf %10.1lf\n", book[i].code, book[i].title, book[i].quantity, book[i].price, book[i].price*book[i].quantity);
		total += book[i].quantity*book[i].price;
    } 
    printf("\t\t\tTotal value:  %.1lf\n", total);
}

void loadFile(int n) {
    FILE *fp;
    fp = fopen ("E:\\bookinstock.txt","w");
    int i;
    fprintf(fp, "Code	Title	Quantity    Price	Value\n");
    for(i = 1;i <= n;i++){
        fprintf(fp, "%s %9s %9d %9.1lf %10.1lf\n", book[i].code, book[i].title, book[i].quantity, book[i].price, book[i].price*book[i].quantity);
    }
    fclose (fp);
}

void firstMaxPrice(int n){
	int i;
	int posBook = 0;
	double max = book[posBook].price;
	int flag = 0;
	for(i = 1; i <= n; i++){
		if(book[i].price > max){
			max = book[i].price;
			posBook = i;
		}
	}

	if(posBook != 0){
		printf("\nThe first max price is %.1lf at book %d\n", max, posBook);
	} else {
		printf("\nCan't find the book!\n");
	}	
}

void findAndEditByCode(int n){
	int posBook;
	int flag = 0;
	struct bookinstock bookEdit;	
	printf("Enter the book's code: ");
	fflush(stdin);
	gets(bookEdit.code); 
	int i=1;
	while(i<=n){
		if(strcmp(book[i].code, bookEdit.code) == 0){
			posBook = i;
			printf("Found the book's code at book %d\n", posBook);		
			printf("Edit the book\n");
			printf("Book %d:\n",posBook);
			inputCode(posBook);
			printf("Enter title: "); fflush(stdin); gets(book[posBook].title);
			printf("Enter quantity: "); 
			scanf("%d", &book[posBook].quantity);
			printf("Enter price: ");
			scanf("%lf", &book[posBook].price);
			flag = 1;
			break;
		} else {
			i++;
		}
	}
	if(!flag){	
		printf("\nNo valid code in the list\n");
	}
}

int findCode(int *n){
	struct bookinstock bookDelete;
	printf("Enter code: ");
	fflush(stdin);
	gets(bookDelete.code);
	int i;
	for(i=1;i<=*n;i++){
		if(strcmp(book[i].code, bookDelete.code) == 0){
			return i; 
		}
	}
	return -1; 
}

void deleteBook(int *n){
	int posBook = findCode(n);
	int i;
	if(posBook == -1){
		printf("\nNot found code book in list\n");
	} else {
		printf("\nRemoved the book from the list!\n");
		printf("------------------------------------------\n");
		for(i=posBook;i<=*n;i++){
			book[i] = book[i+1];
		}
		*n--; 
	}	
}
int main(){
	int option ;
	int n=0;
	int flag;
	int status;
	if(n==0){
		status == 0;
	} 
	do{
		printf("\nSelect options:\n");
		printf("1. Enter the list of books\n");
		printf("2. Display the list of books\n");
		printf("3. Sort the list of books by code\n");
		printf("4. Load data from file\n");
		printf("5. Find the (first) max price\n");
		printf("6. Find by code and edit the book\n");
		printf("7. Find by code and delete the book\n");
		printf("0. Exit\n");
		do{
			fflush(stdin);
			printf("Your selection (0 -> 7): ");
			scanf("%c",&option);
			fflush(stdin);
			if ('0' <= option && option <= '7'){
				flag = 1;
			} else{
				flag = 0;
				printf("Error selection! Re-select\n");
			}
		} while (flag == 0);
		
		switch(option){
			case '0': break;
			case '1': inputBook(&n); status = 1;  break;
			case '2': if(status == 1){
							displayBook(n); 
							break;
						}else{
							printf("You have not entered data yet");
							break; 
						}
			case '3': if(status == 1){
							sortCode(n); 
							break;
						}else{
							printf("You have not entered data yet");
							break; 
						}
			case '4': if(status == 1){
				            printf("\nLoad successfully!\n\n");
							loadFile(n); break;	
						}else{
							printf("You have not entered data yet");
							break; 
						}
			case '5': if(status == 1){
							firstMaxPrice(n); break;
						}else{
							printf("You have not entered data yet");
							break; 
						}
			case '6': if(status == 1){
							findAndEditByCode(n); break;
						}else{
							printf("You have not entered data yet");
							break; 
						}
			case '7': if(status == 1){
							deleteBook(&n); 
							displayBook(n); break;	
						}else{
							printf("You have not entered data yet");
							break; 
						}
		}	
	} while(option != '0');
	return 0;
}
