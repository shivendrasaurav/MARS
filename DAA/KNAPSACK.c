#include<stdio.h>

int V[10][10],n,w,values[10],wt[10];

int max(int a, int b){
    if(a>b)
        return a;

    else
        return b;
}

int MFK(int i, int j) {
    int val;
    if(V[i][j] < 0)
    {
        if(j<wt[i])
            val = MFK(i-1,j);
        else 
            val = max(MFK(i-1,j), values[i]+MFK(i-1, j-wt[i]));

        V[i][j] = val;
    }
    return V[i][j];
}

int main() {
    int i,j,profit;

    printf("Enter number of items : ");
    scanf("%d",&n);

    printf("Enter capacity : ");
    scanf("%d",&w);

    printf("Enter Weight of %d items\n",n);
    for(i=1; i<=n; i++) {
        printf("Enter weight for item %d : ",i);
        scanf("%d",&wt[i]);
    }
    
    printf("Enter value of %d items\n",n);
    for(i=1; i<=n; i++) {
        printf("Enter value for item %d : ",i);
        scanf("%d",&values[i]);
    }

    for(i=0;i<=n;i++) {
        for(j=0;j<=w;j++) {
            if(i==0 || j==0)
                V[i][j] = 0;
            else
                V[i][j] = -1;
        }
    }

    profit = MFK(n,w);
    printf("Final Profit : %d\n",profit);
}
