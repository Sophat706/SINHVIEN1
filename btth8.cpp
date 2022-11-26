#include <stdio.h>
#include <stdlib.h>

void nhap		(int *a, int n);
void xuat		(int *a, int n);
void max		(int *a, int n);
void min		(int *a, int n);
int  check 		(int x);
void snt		(int *a, int n);
void timx		(int *a, int n);
void tongdcc	(int *a, int n);
void chan 		(int *a, int n);


void *calloc	(size_t nitems,size_t size);

int main()
{
	int n,*a,m,n1;
	int *A,*B,*C;
	a=(int*)calloc(256,sizeof(int));
	A=(int*)calloc(256,sizeof(int));
	B=(int*)calloc(256,sizeof(int));
	C=(int*)calloc(256,sizeof(int));
	printf("Nhap n la so dong & cot cho ma tran U : n="); scanf("%d",&n);
	nhap(a,n);
	xuat(a,n);
	max(a,n);
	min(a,n);
	snt(a,n);
	timx(a,n);
	tongdcc(a,n);
	chan(a,n);
	printf("\n\n\n\n\n\n\n");
	printf("\n\n                        XAY DUNG MA TRAN A & B VA TINH TONG TICH CUA A & B                   \n\n\n");
	printf("\n\nNhap m la so dong cho A & B : m = "); scanf("%d",&m);
	printf("\n\nNhap n la so cot cho A & B : n = ");  scanf("%d",&n1);


}



void nhap(int *a, int n)
{
	 printf("\n\nNhap cac phan tu cho ma tran U :");
	 for (int i=0;i<n;i++)
	 {
	 	 for (int j=0;j<n;j++)
	 	 {
	 	 	 printf("\n\nU[%d][%d]=",i,j); scanf("%d",a+i*n+j);
	 	 }
	 }
}


void xuat(int *a, int n)
{
	 printf("\n\nMa tran U da nhap :\n\n");
	 for (int i=0;i<n;i++)
	 {
	 	 for (int j=0;j<n;j++)
	 	 {
	 	 	 printf("%d  ",*(a+i*n+j));
	 	 }
	 	 printf("\n\n");
	 }
}



void max(int *a, int n)
{
	 int max=*(a);
	 for (int i=0;i<n;i++)
	 {
	 	 for (int j=0;j<n;j++)
	 	 {
	 	 	 if (*(a+i*n+j)>=max) max=*(a+i*n+j);
	 	 }
	 }
	 printf("\n\nGia tri lon nhat trong ma tran U la %d",max);
}


void min(int *a, int n)
{
	 int min=*(a);
	 for (int i=0;i<n;i++)
	 {
	 	 for (int j=0;j<n;j++)
	 	 {
	 	 	 if (*(a+i*n+j)<=min) min=*(a+i*n+j);
	 	 }
	 }
	 printf("\n\nGia tri nho nhat trong ma tran U la %d",min);
}


int check(int x)
{
	int OK=1;
	if (x<2)
	{
		OK=0;
	}
	else
	{
		for (int i=2;i<x;i++)
		{
			if (x%i==0 && x!=2) 
			{
		   	   OK=0;
		  	   break;	
			}
		}
	}
	return OK;
}


void snt(int *a, int n)
{
	 printf("\n\nCac phan tu la so nguyen to trong ma tran U:\n\n");
	 int dem=0, tong=0;
	 for (int i=0;i<n;i++)
	 {
	 	 for (int j=0;j<n;j++)
	 	 {
	 	 	 if (check(*(a+i*n+j))==1)
	 	 	 {
	 	 	 	printf("%d  ",*(a+i*n+j));
	 	 	 	dem++;
	 	 	 	tong=tong+*(a+i*n+j);
	 	 	 }
	 	 }
	 }
	 printf("\n\nCo %d phan tu co gia tri la so nguyen to trong ma tran U va tong cua chung bang %d",dem,tong);
}


void timx(int *a, int n)
{
	 int x,OK=0;
	 printf("\n\nNhap x can tim : x="); scanf("%d",&x);
	 for (int i=0;i<n;i++)
	 {
	 	 for (int j=0;j<n;j++)
	 	 {
	 	 	 if (x==*(a+i*n+j))
	 	 	 {
	 	 	 	OK++;
	 	 	 	printf("\n\nx xuat hien tai dong thu %d, cot thu %d (vi tri U[%d][%d]) trong ma tran U",i+1,j+1,i,j);
	 	 	 }
	 	 }
	 }
	 if (OK==0) printf("\n\nx khong xuat hien trong ma tran U !");
}


void tongdcc(int *a, int n)
{
	 int x=0;
	 for (int i=0;i<n;i++)
	 {
	 	 for (int j=0;j<n;j++)
	 	 {  
		     if (i==j) x=x+*(a+i*n+j); 		
	 	 }
	 }
	 printf("\n\nTong cac phan tu nam tren duong cheo chinh cua ma tran U = %d",x);
}


void chan(int *a,int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
	 	for(int j=0;j<n;j++)
	 	{
		   if (i==j) 
		   {
		   	  for(int k=j+1;k<n;k++)
		   	  {
		   	  	 if (*(a+i*n+k)%2==0) dem++;
		   	  }
		   }
		}
    }
    if (dem==0) printf("\n\nKhong co phan tu nao la so chan nam trong tam giac tren cua duong cheo chinh cua ma tran U !");
    else        printf("\n\nCo %d phan tu la so chan nam trong tam giac tren cua duong cheo chinh cua ma tran U ma khong ke duong cheo chinh !",dem);
}



	 
