#include<stdio.h>
#include<math.h>
int n,d,binary[20],set[20],k;
void createbinary(int);
void findsubset() {
	int i,j,sum=0;
	for(i=0;i<pow(2,n);i++) 
	{
		createbinary(i);
		for(j=0;j<n;j++) {
			if(binary[j]==1) 
				sum=sum+set[j];
		}
		if(sum==d) {
			k++;
			printf("\n{\t");
			for(j=0;j<n;j++) {
				if(binary[j]==1)
				printf("%d\t",set[j]);
			}
			printf("}");
		}
		sum=0;
	}
}

void createbinary(int x) {
	int i;
	i=n-1;
	while(x) {
		binary[i]=x%2;
		x=x/2;
		i--;
	}
	while(i>=0) {
		binary[i--]=0;
	}
}
main() {
	int i;
	printf("Enter number of elements : ");
	scanf("%d",&n);
	printf("Enter subset\n");
	for(i=0;i<n;i++)
		scanf("%d",&set[i]);
		
		printf("Enter sum : ");
		scanf("%d",&d);
		
		findsubset();
		
		printf("\nNumber of subset = %d\n",k);
}
