#include<stdio.h>
int main(){
	int i,j,k,n;
	scanf("%d",&n);
	int cost[n][n],nw[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&cost[i][j]);
		}
	}
	for(k=0;k<n;k++){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				nw[i][j]=(cost[i][j]||cost[i][k]&&cost[k][j]);
			}
		}
	}
	printf("\nTransitive Closure Is : \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",nw[i][j]);
		}
		printf("\n");
	}
}
