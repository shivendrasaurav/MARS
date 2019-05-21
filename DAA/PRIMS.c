#include<stdio.h>
int main(){
	int i,j,n,src,ne,mincost=0,min,a,b,u,v;
	
	scanf("%d",&n);
	int cost[n][n],visited[n]={0};
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=999;
		}
	}
	visited[0]=1;
	while(ne<n){
		for(i=0,min=999;i<n;i++){
			for(j=0;j<n;j++){
				if(cost[i][j]<min){
					min=cost[i][j];
					a=u=i;
					b=v=j;
				}
				if(visited[v]==0){
					printf("\nEdge %d at (%d,%d)",ne,a,b);
					mincost=mincost+min;
					visited[v]=1;
				}
			}
			cost[a][b]=cost[b][a]=999;
		}
		ne++;
	}
	printf("\nMinimum Cost Is : %d",mincost);
}
