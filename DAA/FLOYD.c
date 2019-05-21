#include<stdio.h>
int min(int a,int b){
	if(a<b)
		return a;
	else 
		return b;
}
int main(){
	int i,j,k,n;
	scanf("%d",&n);
	int cost[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&cost[i][j]);
		}
	}
	for(k=0;k<n;k++){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
			}
		}
	}
	printf("\nShortest Path Is : \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",cost[i][j]);
		}
		printf("\n");
	}
}
