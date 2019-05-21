#include<stdio.h>
#include<string.h>

int main(){
	int m,n,i,j,flag=0;
	char str[20],pat[10];
	
	scanf("%s",str);
	
	scanf("%s",pat);
	m=strlen(str);
	n=strlen(pat);
	for(i=0;i<=m-n;i++){
		int c=0;
		for(j=0;j<=n;j++){
			if(str[i+j]==pat[j])
				c++;
		}
		if(c==n){
			flag=1;
			printf("String Found");
		}
	}
	if(flag==0)
		printf("String Not Found");
}
