#include<stdio.h>
int main()
{
	int i,j,n,key,flag=0;
	
	scanf("%d",&n);
	int arr[n];
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(key==a[i]){
			printf("Key Found At Position : %d",i+1);
			flag=1;
		}
	}
	if(flag==0)
		printf("Key Not Found");
}
