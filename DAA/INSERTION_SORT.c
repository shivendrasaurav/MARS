#include<stdio.h>
int main(){
	int i,j,n,temp;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++){
		temp=arr[i];
		j=i-1;
		while(temp<arr[j]&&j>=0){
			arr[j+1]=arr[j];
			--j;
		}
		arr[j+1]=temp;
	}
	for(i=0;i<n;i++)
		printf("%d, ",arr[i]);
}
