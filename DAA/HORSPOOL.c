#include<stdio.h>
#include<string.h>
#define MAX 500
int t[MAX];
char src[100],p[100];
void shifttable()
{
 int i,j,m;
 m=strlen(p);
 for(i=0;i<MAX;i++)
  t[i]=m;
 for(j=0;j<m-1;j++)
  t[p[j]]=m-1-j;
}
int horspool()
{
 int i,j,k,m,n;
 n=strlen(src);
 m=strlen(p);
 printf("\nLength of text : %d",n);
 printf("\nLength of pattern : %d",m);
 i=m-1;
 while(i<n)
 {
  k=0;
  while((k<m)&&(p[m-1-k]==src[i-k]))
   k++;
  if(k==m)
   return(i-m+1);
  else
   i+=t[src[i]];
 }
 return -1;
}
int main()
{
 int pos;
 printf("Enter the text in which pattern is to be searched: ");
 scanf("%s",src);
 printf("\nEnter the pattern to be searched: ");
 scanf("%s",p);
 shifttable();
 pos=horspool();
 if(pos>=0)
  printf("\n\nThe desired pattern was found starting from position %d",pos+1);
 else
  printf("\n\nThe pattern was not found in the given text");
}
