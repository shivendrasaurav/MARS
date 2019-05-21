#include<stdio.h>
int main(){
	int n,i,j,count=1;
	printf("Enter No. Of Vertices : ");
	scanf("%d",&n);
	int visited[n],cost[n][n],mst[n];
	printf("\nEnter Cost Matrix : \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&cost[i][j]);
		}
	}
	mst[0]=0,visited[0]=1;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(cost[i][j]==1 && visited[j]!=1){
				mst[count++]=j;
				visited[j]=1;
			}
		}
	}
	printf("\nMinimum Spanning Tree Is : \n");
	for(i=0;i<n;i++){
		printf("%d, ",mst[i]);
	}
}

