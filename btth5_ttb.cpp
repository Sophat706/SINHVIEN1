#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int xoa(char s[50],int vitrixoa);
int xoakt(char s[50]);
int chuanhoa(char s[50]);
int demtu(char s[50]);
int demkt(char s[50]);
void ghep(char s[50],char s2[50]);

int main()
{
 char s[50], s2[50],key;
 printf("\n Nhap chuoi:");
 gets(s);
 chuanhoa(s);
 printf("\n chuoi chuan hoa:");
 puts(s);
 demkt(s);
 demtu(s);
 ghep(s,s2);
 }
  int chuanhoa(char s[50])
 {
 	int i=0;
 	strlwr(s);
 	xoakt(s);
 	s[0]=s[0]-32;
 	for(int i=0;i<strlen(s);i++)
 	  {
	   if(s[i]==' '&& s[i+1]!=' ')
 	      s[i+1]=s[i+1]-32;
 	  }
    }
  int xoa(char s[90],int vitrixoa)
  {
  	int n=strlen(s);
  	for(int i=vitrixoa;i<n;i++)
  	 s[i]=s[i+1];
  	 s[n-1]='\0';
  }
  int xoakt(char s[50])
  {
  	 for(int i=0;i<strlen(s);i++)
  	 if (s[i]==' '&& s[i+1]==' ')
  	 {xoa(s,i);
  	  i--;
  	 }
  	 if(s[0]==' ')
  	   xoa(s,0);
  	 if(s[strlen(s)-1]==' ')
  	   xoa(s,strlen(s)-1);
  }
  int demtu(char s[50])
  {
  	int demtu=1;
  	strlen(s);
  	for(int i=0;i<strlen(s);i++)
  	{ 
	  if(s[i]==' ')
   	   demtu++;
  	}
  	printf("\n so tu %d",demtu);
  }
  int demkt(char s[50])
 {
  	int demkt=0;
  	char c,c1;
  	  printf("/n nhap 1 ki tu:=");
  	  scanf("%c",&c);
  	     fflush(stdin);
  	  strupr(s);
  	  for(int i=0;i<strlen(s);i++)
  	  {
  	  	if (s[i]==toupper(c))
  	    demkt++;
	}
		printf("/n Nhap ky tu %d",demkt);
}
 void ghep(char s[50],char s2[50])
 { int i,j,size,size1,size2;
 fflush(stdin);
 printf("/n Nhap chuoi 2:");
 gets(s2);
 chuanhoa(s2);
 size1=strlen(s);
 size2=strlen(s2);
 size=size1+size2;
 j=0;
 
    for ( i = size1;i<size; i++)
 {s[i]=s2[j];
 j++;
 }
   s[i]='0';
  printf("\n ket qua sau khi noi chuoi la:\n");
  printf("%s",s);
 }
