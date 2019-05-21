#include<stdio.h>
int dist[100],sort[100];

int main(){
	int arr[100],n,i,j,ul,ll;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	scanf("%d",&ul);
	scanf("%d",&ll);
	for(i=0;i<=ul-ll;i++)
		dist[i]=0;
		
	for(i=0;i<=n-1;i++)
		dist[arr[i]-ll]++;	
		
	for(j=1;j<=ul-ll;j++)
		dist[j]=dist[j]+dist[j-1];
		
	printf("\n\n");
	for(i=n-1;i>=0;i--){
		j=arr[i]-ll;
		sort[dist[j]-1]=arr[i];
		dist[j]--;
	}
	for(i=0;i<n;i++)
		printf("%d, ",sort[i]);
}
