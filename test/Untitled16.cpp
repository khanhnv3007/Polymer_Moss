#include<stdio.h>
#include<conio.h>

int main()
{
    char a[20][20];
    char b[100];
   int i,j,m,n;
   printf("Nhap do lon cua mang 2 chieu:");
   printf("\nm = ");scanf("%d", &m);
   printf("n = ");scanf("%d", &n);
   for (i=1;i<=m;i++)
    for (j=1;j<=n;j++)
        {
            printf("Nhap a[%d][%d]:", i,j);
            scanf("%s",&a[i][j]);
         }
   for (i=1;i<=m;i++)
    for (j=1;j<=n;j++)
            b[(i-1)*n+j]=a[i][j];
   printf("\nMang sau khi chuyen thanh 1 chieu la:\n");
   for (i=1;i<=m*n;i++) printf("  %s", b[i]);
    /*int count=0;
    char *s;
    gets(a);
    gets(b);
    s = b;// s duoc gan bang b
    while (NULL != (s=strstr(s, a)))//Neu ham tim kiem ko tra ra null
    {
    printf ("%d\n", s - b);//con tro s khi do tro vao vi tri dau tien xuat hien xau a
    s++;//tang s sau do quay lai tim kiem
    count++;//dem
    }
    printf ("%d\n", count);*/
    //system ("pause");
   getch();
}
