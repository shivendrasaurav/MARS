#include<stdio.h>
int main(){
	int i,n,key,flag=0;
	scanf("%d",&n);
	int a[n],low=0,high=n,mid;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&key);
	while(low<=high){
		mid=(low+high)/2;
		if(a[mid]==key){
			flag=1;
			printf("Element Found");
			break;
		}
		else if(key<a[mid]){
			high=mid-1;
		}
		else
			low=mid+1;
	}
	if(flag==0)
		printf("Element Not Found");
}
