#include<stdio.h>
int main(){
	int i,j,n,mincost=0,min,a,b,v,u;
	
	scanf("%d",&n);
	int cost[n][n],parent[n]={0},ne=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&cost[i][j]);
		}
	}
	parent[0]=1;
	while(ne<n){
		for(i=0,min=999;i<n;i++){
			for(j=0;j<n;j++){
				if(cost[i][j]<min){
					min=cost[i][j];
					a=u=i;
					b=v=j;
					printf("%d",n);
				}
				if(parent[v]==0||parent[u]==0){
					printf("\nEdge %d is (%d,%d)",ne,a,b);
					mincost=mincost+min;
					parent[v]=parent[u]=1;
				}
			cost[b][a]=cost[a][b]=999;
			}
		}
		ne++;
	}
	printf("\nMinimum Cost Is : %d",mincost);
}
