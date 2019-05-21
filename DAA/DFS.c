#include<stdio.h>
int main(){
	int i,j,n,q,src,count=1;
	scanf("%d",&n);
	int cost[n][n],visited[n]={0},queue[n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&cost[i][j]);
		}
	}
	printf("\nEnter Source : ");
	scanf("%d",&src);
	visited[src]=1,queue[0]=src;
	for(i=0;i<n;i++){
		i=q;
		for(j=0;j<n;j++){
			if(visited[j]!=1 && cost[i][j]==1){
				queue[count++]=j;
				visited[j]=1;
				q=j;
				break;
			}
		}
	}
	for(i=0;i<n;i++){
		if(visited[i]!=1){
			queue[count++]=i;
			visited[i]=1;
		}
	}
	printf("\nMST : ");
	for(i=0;i<n;i++)
		printf("%d, ",queue[i]);
}
