#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()   {
	int m,n,i,j,k;
	float a[1000],b[1000],x;
	
     	printf("Select options:\n");
     	printf("1. Enter the list of float numbers\n");
    	printf("2. Sort the list in increasing order\n");
	    printf("3. Search value x in the list\n");
    	printf("4. Display the list\n");
       	printf("0. Exit\n");
    	printf("You selection (0 -> 4):");
    	scanf("%d",&m);

	while (m>0 && m<5) {
		if (m==1) {
		    printf("Input size of array n = ");
        	scanf("%d",&n);
        	printf("Enter %d float numbers: ",n);
        	for ( i = 1;i<=n;i++)
        		scanf("%f",&a[i]);
		} 
		else if (m==2) {
			printf("*************************************************\n");
			printf("Before sorting:	");
        	for (i=1;i<=n;i++)
	             printf("%0.1f  ",a[i]);
	        for (i=n;i>1;i--)
             for (j=1; j<i ; j++ ) 
                if (a[j]>a[j+1] ) {
                	k=a[j];
					a[j]=a[j+1];
					a[j+1]=k;
				}
			printf("\nAfter sorting: ");
			for (i=1;i<=n;i++)  printf("%0.1f ",a[i]);
			printf("\n*************************************************");
		}
		else if (m==3) {
			k=1;
			printf("Enter the value x to be searched: ");
			scanf("%f",&x);	
			printf("\n*************************************************\n");
			for (i=1;i<=n;i++)
			    if (x==a[i])  {
			    	printf("Found %0.1f at position %d",x,i-1);
			    	k=0;
			    	break;
				}
			if (k==1) {
				printf("%0.1f is not present in the array",x);
			}
			printf("\n*************************************************\n");
		} 
		else if (m==4) {
		printf("\n*************************************************\n");
			for (i=1;i<=n;i++)  printf("%0.1f  ",a[i]);
		printf("\n*************************************************\n");
		}
	
		printf("\nSelect options:\n");
     	printf("1. Enter the list of float numbers\n");
    	printf("2. Sort the list in increasing order\n");
	    printf("3. Search value x in the list\n");
    	printf("4. Display the list\n");
       	printf("0. Exit\n");
    	printf("You selection (0 -> 4):");
    	scanf("%d",&m);
	}

	return 0;
}
