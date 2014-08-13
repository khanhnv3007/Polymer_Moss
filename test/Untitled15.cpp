#include<stdio.h>
#include<conio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char mang2chieu[20][30];
    char *mang1chieu;
    int a,dong,cot,k=0;
    printf("Nhap vao so dong: ");scanf("%d",&dong);
    printf("Nhap vao so cot: ");scanf("%d",&cot);
    mang1chieu=(char*)malloc(dong*cot*(sizeof(char)));//cap phat bo nho dong
    printf("\n\n");

    for(int i=0;i<dong;i++)
        for(int j=0;j<cot;j++)
        {
            printf("Nhap vao phan tu A[%d][%d]: ",i,j);
            scanf("%s",&mang2chieu[i][j]);
            mang1chieu[k]=mang2chieu[i][j];
            k++;    
        }
    //IN MANG MOT CHIEU
        
    for(int i=0;i<k;i++)
        {
            printf("%s ",mang1chieu[k]);
        }
        printf("\n");
    
    getch();
    
    
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
