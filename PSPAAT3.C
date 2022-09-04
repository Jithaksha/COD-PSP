#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float n1,n2,n3,a,b,c,cod,sum=0;
	int i, v1,v2,v3,fer,FAS,endp,red;
	clrscr();
	printf("enter the weight of the bottle +fas\n");
	scanf("%f",&n1);
	printf("enter the weight of empty bottle\n");
	scanf("%f",&n2);
	n3=n1-n2;
	printf("weight of the FAS crystals is %.4f\n",n3);

	a=(n3*4)/392;
	printf("normality;%.4f\n",a);
	printf("enter 50cm(pow(3)) of given standard FAS into burette\n");
	scanf("%d",&FAS);
	printf("enter the volume of waste water,K2CR207,Dilh2so4:\n");
	scanf("%d%d%d",&v1,&v2,&v3);
	printf("enter 2-3 drops ferroin indicator\n");
	scanf("%d",&fer);
	printf("---back titration---");
	printf("enter the concordant volume of FAS\n");
	scanf("%f",&b);
	if(endp==red)
	{
		printf("concordant volume of FAS in blank titration:%.4f",b);
	}


	printf("enter 50cm(pow3)) of given standard FAS INTO burette\n");
	scanf("%d",&FAS);
	printf("enter the volume of k2cr207,dilh2s04:\n");
	scanf("%d%d",&v2,&v3);
	printf("enter 2-3 drops of ferroin indicator\n");
	scanf("%d",&fer);
	printf("-----blank titration----");
	printf("enter concordant volume of fas\n");
	scanf("%f",&c);
	if(endp==red)
	{
		printf("concordant volume of FAS in back titration:%.4f\n",c);
	}

	if(c>b)
	{
		cod=(8000*(c-b)*a)/10;
		printf("chemical oxygen demandis:%.4f\n",cod);
	}
	else
	{
		printf("exp performed was wrong\n");
	}
	for(i=1;sum<300;i++)
	{
	sum=i*cod;
	}
	printf("\n given sample is %d times less polluting",i-1);
	getch();
}