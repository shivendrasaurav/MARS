#include<stdio.h>
int partition(int a[],int l,int r){
	int pivot=a[l];
	int i=l+1,j=r,temp;
	while(i<=j){
		while(pivot>a[i]&&i<=r)
			i++;
		while(pivot<a[j]&&j>=1)
			j--;
		if(i<j){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		else{
			temp=a[l];
			a[l]=a[j];
			a[j]=temp;
			return j;
		}
	}
}
void quicksort(int a[],int low,int high){
	int s;
	if(low<high){
		s=partition(a,low,high);
		quicksort(a,low,s-1);
		quicksort(a,s+1,high);
	}
}
int main(){
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	quicksort(arr, 0, n-1);
	for(i=0;i<n;i++)
		printf("%d, ",arr[i]);
}
