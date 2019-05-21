#include<stdio.h>
int main(){
	int k,i,j,n,sv,w,min,v,x;
	
	scanf("%d",&n);
	int cost[n][n],distance[n],visited[n],parent[n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&cost[i][j]);
		}
	}
	
	printf("Enter Source Vertex : ");
	scanf("%d",&sv);
	
	for(i=0;i<n;i++){
		visited[i]=0;
		distance[i]=cost[sv][i];
		parent[i]=sv;
	}
	
	visited[sv]=1;
	distance[sv]=0;
	parent[sv]=sv;
	
	for(k=1;k<n;k++){
		min=999;
		for(w=0;w<n;w++){
			if(distance[w]<min && visited[w]==0){
				min=distance[w];
				v=w;
			}
		}
		visited[v]=1;
		for(w=0;w<n;w++){
			if(distance[v]+cost[v][w]<distance[v]){
				distance[w]=cost[v][w]+distance[v];
				parent[w]=v;
			}
		}
	}
	printf("\n\nShortest Path : \n");
	for(j=0;j<n;j++){
		if(j!=sv){
			x=j;
			while(x!=sv){
				printf("%d <--",x);
				x=parent[x];
			}
			printf("\t%d = %d\n",sv,distance[j]);
		}
	}
}
