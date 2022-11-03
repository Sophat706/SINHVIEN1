#include <stdio.h>

void nhap (int a[100][100], int m, int n);
void xuat (int a[100][100],int m, int n);
void max (int a[100][100],int m,int n);
void min (int a[100][100],int m,int n);
int dem (int n);
void snt (int a[100][100],int m,int n);
int a[100][100];
void timx (int a[100][100],int m, int n);
void matran (int a[100][100],int m, int n);

int main()
{
	int m,n;
    printf("Nhap so dong cho mang: ");
	scanf("%d",&m);
    while (m<0||m>100)
    {
    	printf("\nNhap so qua lon! Nhap lai :"); 
		scanf("%d",&m);
    }
    printf("\nNhap so cot cho mang: "); 
	scanf("%d",&n);
    while (n<0||n>100)
    {
    	printf("\nNhap so qua lon! Nhap lai :"); scanf("%d",&n);
    }
    
    nhap(a,m,n);
    xuat(a,m,n);
    max(a,m,n);
    min(a,m,n);
    snt(a,m,n);
    timx(a,m,n);
    matran(a,m,n);
}


void nhap (int a[100][100], int m, int n)
{
     for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
		   printf("\nNhap a[%d][%d]=",i,j); 
		   scanf("%d",&a[i][j]);
		}
	 }
}


void xuat (int a[100][100], int m, int n)
{
     for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
		   printf("\nGia tri a[%d][%d]=%d",i,j,a[i][j]);
		   printf("\n");
		}
	 }
}


void max (int a[100][100],int m,int n)
{
    int tam=0,x,y;
    for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
	       if (a[i][j]>=tam) 
	       {
		   tam = a[i][j];
		   x=i;
		   y=j;
		   }
		}
	}
	printf("\nPhan tu lon nhat trong mang a la a[%d][%d] = %d \n",x,y,a[x][y]);
}


void min (int a[100][100],int m,int n)
{
    int tam,x,y;
    tam=a[0][0];
    for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
	       if (a[i][j]<=tam) 
	       {
		   tam = a[i][j];
		   x=i;
		   y=j;
		   }
		}
	}
	printf("\nPhan tu nho nhat trong mang a la a[%d][%d] = %d \n",x,y,a[x][y]);
}


int dem(int n)
{
	int demm=0;
    for(int i=2;i<n;i++)
    {
	   if (n%i==0) demm++;
	}
	return demm;
}


void snt (int a[100][100],int m,int n)
{
     int x=0,tong=0;
     for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
		   if(dem(a[i][j])==0) 
		   {
		     printf("\nGia tri %d cua phan tu a[%d][%d] la so nguyen to\n",a[i][j],i,j);
		     tong = tong + a[i][j];
		     x++;
		   }
		}
	 }
	 printf("\nVay co %d gia tri trong mang a la so nguyen to va tong cua chung bang : %d",x,tong);  
}



void timx (int a[100][100],int m, int n)
{
     int x,y=0;
     printf("\n\nNhap gia tri cho X="); 
	 scanf("%d",&x);
     for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
		   if (a[i][j] == x) 
		   {
		      printf("\n\nGia tri X xuat hien tren ma tran tai vi tri a[%d][%d]",i,j);
		      y++;
		   }
		}
	 }
	 if (y==0) printf ("\n\nGia tri cua X khong xuat hien trong ma tran a !");
}


void matran (int a[100][100],int m, int n)
{
	 int x,y,max;
	 int dem=0,demm=0;
     for (int k=0;k<m;k++)
     {
     	max=a[k][0];
	    for(int i=0;i<n;i++)
        {
	       if ( a[k][i]<=max) 
	       {
		           max = a[k][i];
		           x=i;
		   }
		}
		for (int j=0;j<m;j++)
		{
		   if (max < a[j][x]) 
		    {
			  dem++;
			}
		}
	    if (dem==0)
			  {    printf ("\n\nPhan tu a[%d][%d] la duong cheo !",k,x);
			       demm++;
		      }
	    dem=0;
	 } 
	 if (demm==0) printf("\n\nKhong co gia tri nao la duog cheo trong ma tran a !");
}
