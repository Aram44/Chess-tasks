#include "stdafx.h"
int main()
{
	int n,m,z,i,j,s=0,t,a,b,k;
	int x[100][100]={0};
	do{
		printf("n=");scanf_s("%d",&n);
	}while(n<1 || n>100);
	do{
		printf("m=");scanf_s("%d",&m);
	}while(m<1 || m>100);
	do{
		printf("k=");scanf_s("%d",&k);
	}while(k<1 || k>10);
	for(z=0; z<k; z++){
		do{
		printf("t=");scanf_s("%d",&t);
	    }while(t<1 || t>3);
		do{
		printf("a=");scanf_s("%d",&a);
	    }while(a<1 || a>n);
		do{
		printf("b=");scanf_s("%d",&b);
	    }while(b<1 || b>m);
		if(t==1)
			for(i=1;i<=n;i++){
			x[a][i]=1;
			x[i][b]=1;
		}
		if(t==2)
			for(i=0;i<=n;i++){
			x[a+i][b+i]=2;
			x[a-i][b-i]=2;
			x[a+i][b-i]=2;
			x[a-i][b+i]=2;
		}
		if(t==3)
			for(i=1;i<=n;i++){
			x[a][i]=3;
			x[i][b]=3;
			x[a+i][b+i]=3;
			x[a-i][b-i]=3;
			x[a+i][b-i]=3;
			x[a-i][b+i]=3;
		}
	}
	for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
		if(x[i][j]==0)
			s++;
	printf("s=%d\n",s);
	for(i=1;i<=n;i++){
	for(j=1;j<=m;j++){
		printf("%d ",x[i][j]);}
	printf("\n");}
}

