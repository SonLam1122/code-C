// hinh chu nhat
//#include <stdio.h>
//int main()
//{
//	int n,m;
//	printf("Nhap M ");
//	scanf("%d",&m);
//	printf("Nhap N ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=1;i<=m;i++)
//	{
//		for(j=1;j<=n;j++) printf("* ");
//		printf("\n");	
//	}
//	
//}

// Hinh chu nhat rong
//#include <stdio.h>

//int main()
//{
//	int n,m;
//	printf("Nhap M ");
//	scanf("%d",&m);
//	printf("Nhap N ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=1;i<=n;i++) printf("* ");
//	printf("\n");
//	for(i=1;i<=m;i++)
//	{
//		printf("* ");
//		printf("%*c", 2*n-4, ' ');
//		printf("* ");
//		printf("\n");	
//	}
//	for(i=1;i<=n;i++) printf("* ");
//	
//}
//
//

// //tam giac vuong can dac 
//#include <stdio.h>
//int main()
//{
//	int n;
//	printf("Nhap N ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=i;j++) printf("* "); 
//		printf("\n");	
//	}
//}
//

// //tam giac vuong can rong
#include <stdio.h>

int main()
{
	int n;
	printf("NHap N ");
	scanf("%d",&n);
	int i,j;
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=j;i++) 
		if ((i==1 ||j==n || j==i)) printf("* ");  else printf("  ");
		printf("\n");	
	}
}
//

// Hinh Z nguoc
//#include <stdio.h>

//int main()
//{
//	int n;
//	printf("Nhap N ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n;j++) if (i==1 || i==n || i==j) printf("* "); else printf("  ");
//		printf("\n");	
//	}
//	
//}
//

// Hinh Z xuoi
//#include <stdio.h>

//int main()
//{
//	int n;
//	printf("Nhap N ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n;j++) if (i==1 || i==n || i==n-j+1) printf("* "); else printf("  ");
//		printf("\n");	
//	}
//	
//}
//
// Hinh dong ho cat
//#include <stdio.h>

//int main()
//{
//	int n;
//	printf("Nhap N ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n;j++) if (i==1 || i==n || i==n-j+1 || i==j) printf("* "); else printf("  ");
//		printf("\n");	
//	}
//	
//}
//
// Hinh hinh chu nhat co chu X o giua
//#include <stdio.h>

//int main()
//{
//	int n;
//	printf("Nhap N ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n;j++) if (i==1 || i==n || i==n-j+1 || i==j|| j==1 || j==n) printf("* "); else printf("  ");
//		printf("\n");	
//	}
//	
//}
//

// Hinh tam giac can nguoc.
//#include <stdio.h>

//int main()
//{
//	int n;
//	printf("Nhap N ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=i-1;j++) printf("  ");
//		for(j=i;j<=2*n-i;j++) printf("* ");
//		printf("\n");
//	}
//	
//}
//

// Hinh tam gian can xuoi
//#include <stdio.h>
//int main()
//{
//	int n;
//	printf("Nhap N ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n-i;j++) printf("  ");
//		for(j=1;j<=i*2-1;j++) printf("* ");
//		printf("\n");
//	}
//	
//}
//

// Hinh kim cuong 
//#include <stdio.h>
//int main()
//{
//	int n;
//	printf("Nhap N ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n-i;j++) printf("  ");
//		for(j=1;j<=i*2-1;j++) printf("* ");
//		printf("\n");
//	}
//	for(i=2;i<=n;i++)
//	{
//		for(j=1;j<=i-1;j++) printf("  ");
//		for(j=i;j<=2*n-i;j++) printf("* ");
//		printf("\n");
//	}
//	
//}
//

// Hinh tam giac vuong can so goc vuong bot trai (bat dau bang 1)
//#include <stdio.h>
//int main()
//{
//	int n;
//	printf("Nhap N ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=i;j++) printf("%d ", j);
//		printf("\n");
//	}
//	
//}
//
// Hinh tam giac vuong can so goc vuong top phai (bat dau bang 1)
//#include <stdio.h>

//int main()
//{
//	int n;
//	printf("Nhap N ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=n;i>=1;i--)
//	{
//		for(j=1;j<=2*(n-i);j++) printf(" ");
//		for(j=1;j<=i;j++) printf("%d ",j);
//		printf("\n");
//	}
//	
//}
//

// Hinh tam giac vuong can so goc vuong bot phai (bat dau bang 1)

//#include <stdio.h>
//int main()
//{
//	int n;
//	printf("Nhap N ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=2*(n-i);j++) printf(" ");
//		for(j=1;j<=i;j++) printf("%d ",j);
//		printf("\n");		
//	}
//	
//}
//
// Hinh tam giac vuong can so goc vuong top trai (bat dau bang 1)

//#include <stdio.h>
//int main()
//{
//	int n;
//	printf("Nhap N ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=n;i>=1;i--)
//	{
//		for(j=i;j>=1;j--) printf("%d ",j);
//		printf("\n");		
//	}
//	
//}
//
// //tam giac can so (bat dau bang 1)
//#include <stdio.h>
//int main()
//{
//	int n;
//	printf("Nhap N ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=1;i<=n;i++).
//	{
//		for(j=1;j<=2*(n-i);j++) printf(" ");
//		for(j=1;j<=i;j++) printf("%d ",j);
//		for(j=i-1;j>=1;j--) printf("%d ",j);
//		printf("\n");
//	}
//}
//
// Hinh tam giac can so nguoc ((bat dau bang 1)
//#include <stdio.h>

//int main()
//{
//	int n;
//	printf("Nhap N ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=n;i>=1;i--)
//	{
//		for(j=1;j<=2*(n-i);j++) printf(" ");
//		for(j=1;j<=i;j++) printf("%d ",j);
//		for(j=i-1;j>=1;j--) printf("%d ",j);
//		printf("\n");
//	}
//}
//
//  Hinh 2 tam giac vuong chung goc nhon bang 8
//#include <stdio.h>
//int main()
//{
//	int n;
//	printf("Nhap N ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=i-(i==n);j++) printf("%d ",j);
//		for(j=1;j<=(2*n-1)-i*2;j++) printf("  ");
//		for(j=i;j>=1;j--) printf("%d ",j);
//		printf("\n");
//	}
//}
//
//// hinh t (dao nguoc hinh s)
//#include <stdio.h>
//int main()
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=n;i>=1;i--)
//	{
//		for(j=1;j<=i-(i==n);j++) printf("%d ",j);
//		for(j=1;j<=(2*n-1)-i*2;j++) printf("  ");
//		for(j=i;j>=1;j--) printf("%d ",j);
//		printf("\n");
//	}
//}
//
//// hinh tam giac can so tang dan theo dong dau là 1, dong 2 bat dau bang 2
//#include <stdio.h>
//int main()
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n-i;j++) printf("  ");
//		for(j=i;j<=2*i-1;j++) printf("%d ",j%10);
//		for(j=2*i-2;j>=i;j--) printf("%d ",j%10);
//		printf("\n");
//	}
//}
//
//// Powerof2Triangle (cap so nha 1 2 4 8 16) giong tro 2048
//#include <stdio.h>
//int main()
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int i,j;
//	int mu[30];
//	mu[0]=1;
//	for(i=1;i<=30;i++) mu[i]=mu[i-1]*2;
//	for(i=0;i<=n-1;i++)
//	{
//		for(j=1;j<=(n-(i+1));j++) printf("    ");
//		for(j=0;j<=i;j++) printf(" %3d",mu[j]);
//		for(j=i-1;j>=0;j--) printf(" %3d",mu[j]);
//		printf("\n");
//	}
//} 
//
////PascalTriangle1 (tam giac vuong can)
//#include <stdio.h>
//int a[100],b[100];
//int main()
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int i,j;
//	a[1]=1;
//	printf("  1\n");
//	for(i=2;i<=n;i++)
//	{
//		j=1;
//		for(j=1;j<=i;j++) b[j]=a[j]+a[j-1];
//		for(j=1;j<=i;j++) {printf(" %2d",b[j]);a[j]=b[j];}
//		printf("\n");
//	}
//} 
//
////PascalTriangle2 (tam giac can)
//#include <stdio.h>
//int a[100],b[100];
//int main()
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int i,j;
//	for(j=1;j<=n-1;j++) printf("  ");
//	a[1]=1;
//	printf("   1\n");
//	for(i=2;i<=n;i++)
//	{
//		for(j=1;j<=n-i;j++) printf("  ");
//		j=1;
//		for(j=1;j<=i;j++) b[j]=a[j]+a[j-1];
//		for(j=1;j<=i;j++) {printf(" %3d",b[j]);a[j]=b[j];}
//		printf("\n");
//	}
//} 
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
///**
// * C program to print square star pattern
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, N;
//
//    /* Input number of rows from user */
//    printf("Enter number of rows: ");
//    scanf("%d", &N);
//
//    /* Iterate through N rows */
//    for(i=1; i<=N; i++)
//    {
//        /* Iterate over columns */
//        for(j=1; j<=N; j++)
//        {
//            /* Print star for each column */
//            printf("*");
//        }
//        
//        /* Move to the next line/row */
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print rectangle star pattern
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, rows, columns;
//
//    /* Input rows and columns from user */
//    printf("Enter number of rows: ");
//    scanf("%d", &rows);
//    printf("Enter number of columns: ");
//    scanf("%d", &columns);
//
//    /* Iterate through each row */
//    for(i=1; i<=rows; i++)
//    {
//        /* Iterate through each column */
//        for(j=1; j<=columns; j++)
//        {
//            /* For each column print star */
//            printf("*");
//        }
//        
//        /* Move to the next line/row */
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print hollow square star pattern
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, N;
//
//    /* Input number of rows from user */
//    printf("Enter number of rows: ");
//    scanf("%d", &N);
//
//    /* Iterate over each row */
//    for(i=1; i<=N; i++)
//    {
//        /* Iterate over each column */
//        for(j=1; j<=N; j++)
//        {
//            if(i==1 || i==N || j==1 || j==N)
//            {
//                /* Print star for 1st, Nth row and column */
//                printf("*");
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//
//        /* Move to the next line/row */
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print hollow rectangle star pattern
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, rows, columns;
//
//    /* Input number of rows and columns from user */
//    printf("Enter number of rows: ");
//    scanf("%d", &rows);
//    printf("Enter number of columns: ");
//    scanf("%d", &columns);
//
//    /* Iterate over each row */
//    for(i=1; i<=rows; i++)
//    {
//        /* Iterate over each column */
//        for(j=1; j<=columns; j++)
//        {
//            if(i==1 || i==rows || j==1 || j==columns)
//            {
//                /* Print star for 1st and last row, column */
//                printf("*");
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//
//        /* Move to the next line */
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print hollow rectangle star pattern
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, rows, columns;
//
//    /* Input number of rows and columns from user */
//    printf("Enter number of rows: ");
//    scanf("%d", &rows);
//    printf("Enter number of columns: ");
//    scanf("%d", &columns);
//
//    /* Iterate over each row */
//    for(i=1; i<=rows; i++)
//    {
//        /* Iterate over each column */
//        for(j=1; j<=columns; j++)
//        {
//            if(i==1 || i==rows || j==1 || j==columns)
//            {
//                /* Print star for 1st and last row, column */
//                printf("*");
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//
//        /* Move to the next line */
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print Rhombus star pattern series
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, rows;
//
//    /* Input number of rows from user */
//    printf("Enter rows: ");
//    scanf("%d", &rows);
//
//    for(i=1; i<=rows; i++)
//    {
//        /* Print trailing spaces */
//        for(j=1; j<=rows - i; j++)
//        {
//            printf(" ");
//        }
//
//        /* Print stars after spaces */
//        for(j=1; j<=rows; j++)
//        {
//            printf("*");
//        }
//
//        /* Move to the next line */
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print Rhombus star pattern series
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, rows, columns;
//
//    /* Input rows and columns from user */
//    printf("Enter rows: ");
//    scanf("%d", &rows);
//    printf("Enter columns: ");
//    scanf("%d", &columns);
//
//    /* Iterate through each row */
//    for(i=1; i<=rows; i++)
//    {
//        /* Print trailing spaces */
//        for(j=1; j<=rows - i; j++)
//        {
//            printf(" ");
//        }
//
//        /* Print stars after spaces */
//        for(j=1; j<=columns; j++)
//        {
//            printf("*");
//        }
//
//        /* Move to the next line */
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print hollow rhombus star pattern
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, rows;
//
//    /* Input number of rows from user */
//    printf("Enter rows : ");
//    scanf("%d", &rows);
//
//
//    for(i=1; i<=rows; i++)
//    {
//        /* Print trailing spaces */
//        for(j=1; j<=rows-i; j++)
//        {
//            printf(" ");
//        }
//
//
//        /* Print stars and center spaces */
//        for(j=1; j<=rows; j++)
//        {
//            if(i==1 || i==rows || j==1 || j==rows)
//                printf("*");
//            else
//                printf(" ");
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print hollow parallelogram star pattern
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, rows, columns;
//
//    /* Input number of row and column */
//    printf("Enter rows : ");
//    scanf("%d", &rows);
//    printf("Enter columns: ");
//    scanf("%d", &columns);
//
//    for(i=1; i<=rows; i++)
//    {
//        /* Print trailing spaces */
//        for(j=1; j<=rows-i; j++)
//        {
//            printf(" ");
//        }
//
//        /* Print stars and center spaces */
//        for(j=1; j<=columns; j++)
//        {
//            if(i==1 || i==rows || j==1 || j==columns)
//                printf("*");
//            else
//                printf(" ");
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}
///*
// * C program to print mirrored Rhombus star pattern series
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, N;
//
//    /* Input number of rows from user */
//    printf("Enter rows: ");
//    scanf("%d", &N);
//
//
//    for(i=1; i<=N; i++)
//    {
//        /* Print trailing spaces */
//        for(j=1; j<i; j++)
//        {
//            printf(" ");
//        }
//
//        for(j=1; j<=N; j++)
//        {
//            printf("*");
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}
///*
// * C program to print mirrored parallelogram star pattern series
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, M, N;
//
//    /* Input number of rows and columns */
//    printf("Enter rows: ");
//    scanf("%d", &M);
//    printf("Enter columns: ");
//    scanf("%d", &N);
//
//
//    for(i=1; i<=M; i++)
//    {
//        /* Print trailing spaces */
//        for(j=1; j<i; j++)
//        {
//            printf(" ");
//        }
//
//        for(j=1; j<=N; j++)
//        {
//            printf("*");
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print hollow mirrored rhombus star pattern series
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, N;
// 
//    /* Input number of rows from user */
//    printf("Enter number of rows: ");
//    scanf("%d", &N);
//
//    for(i=1; i<=N; i++)
//    {
//        /* Print trailing spaces */
//        for(j=1; j<i; j++)
//        {
//            printf(" ");
//        }
//
//        /* Print hollow rhombus */
//        for(j=1; j<=N; j++)
//        {
//            if(i==1 || i==N  || j==1|| j==N)
//                printf("*");
//            else
//                printf(" ");
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print hollow mirrored parallelogram star pattern series
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, M, N;
//
//    /* Input number of rows from user */
//    printf("Enter rows: ");
//    scanf("%d", &M);
//    printf("Enter columns: ");
//    scanf("%d", &N);
//
//    for(i=1; i<=M; i++)
//    {
//        /* Print trailing spaces */
//        for(j=1; j<i; j++)
//        {
//            printf(" ");
//        }
//
//
//        /* Print hollow parallelogram */
//        for(j=1; j<=N; j++)
//        {
//            if(i==1 || i==M  || j==1|| j==N)
//                printf("*");
//            else
//                printf(" ");
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}
///*
// * C program to print right triangle star pattern series
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, n;
//
//    /* Input number of rows from user */
//    printf("Enter value of n: ");
//    scanf("%d", &n);
//
//    for(i=1; i<=n; i++)
//    {
//        /* Print i number of stars */
//        for(j=1; j<=i; j++)
//        {
//            printf("*");
//        }
//
//        /* Move to next line */
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print hollow right triangle star pattern
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, rows;
//
//    /* Input rows from user */
//    printf("Enter number of rows: ");
//    scanf("%d", &rows);
//
//    for(i=1; i<=rows; i++)
//    {
//        for(j=1; j<=i; j++)
//        { 
//            /* 
//             * Print star for first column(j==1), 
//             * last column(j==i) or last row(i==rows).
//             */
//            if(j==1 || j==i || i==rows)
//            {
//                printf("*");
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print mirrored right triangle star pattern series
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, rows;
//
//    /* Input rows from user */
//    printf("Enter number of rows: ");
//    scanf("%d", &rows);
//
//    /* Iterate through rows */
//    for(i=1; i<=rows; i++)
//    {
//        /* Print spaces in decreasing order of row */
//        for(j=i; j<rows; j++)
//        {
//            printf(" ");
//        }
//
//        /* Print star in increasing order or row */
//        for(j=1; j<=i; j++)
//        {
//            printf("*");
//        }
//
//        /* Move to next line */
//        printf("\n");
//    }
//    
//    return 0;
//}
///**
// * C program to print hollow mirrored right triangle star pattern
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, rows;
//
//    /* Input rows from user */
//    printf("Enter number of rows : ");
//    scanf("%d", &rows);
//
//    /* Iterate through rows */
//    for(i=1; i<=rows; i++)
//    {
//        /* Print trailing spaces */
//        for(j=i; j<rows; j++)
//        {
//            printf(" ");
//        }
//
//        /* Print hollow right triangle */
//        for(j=1; j<=i; j++)
//        {
//            /*
//             * Print star for last row(i==row),
//             * first column(j==1) and
//             * last column(j==i).
//             */
//            if(i==rows || j==1 || j==i)
//            {
//                printf("*");
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * Reverse right triangle star pattern program in C
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, rows;
//
//    /* Input number of rows from user */
//    printf("Enter number of rows : ");
//    scanf("%d", &rows);
//
//    /* Iterate through rows */
//    for(i=1; i<=rows; i++)
//    {
//        /* Iterate through columns */
//        for(j=i; j<=rows; j++)
//        {
//            printf("*");
//        }
//       
//        /* Move to the next line */
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print hollow inverted right triangle star pattern
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, rows;
//
//    /* Input number of rows from user */
//    printf("Enter number of rows: ");
//    scanf("%d", &rows);
//
//    /* Iterate through rows */
//    for(i=1; i<=rows; i++)
//    {
//        /* Iterate through columns */
//        for(j=i; j<=rows; j++)
//        {
//            /* 
//             * Print stars for first row(i==1), 
//             * first column(j==1) and 
//             * last column(j=rows).
//             */
//            if(i==1 || j==i || j==rows)
//            {
//                printf("*");
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//
//        /* Move to next line */
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print reverse mirrored right triangle star pattern
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, rows;
//
//    /* Input rows from user */
//    printf("Enter number of rows: ");
//    scanf("%d", &rows);
//
//    /* Iterate through rows */
//    for(i=1; i<=rows; i++)
//    {
//        /* Print leading spaces */
//        for(j=1; j<i; j++)
//        {
//            printf(" ");
//        }
//
//        /* Iterate through columns to print star */
//        for(j=i; j<=rows; j++)
//        {
//            printf("*");
//        }
//
//        /* Move to next line */
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print hollow mirrored inverted right triangle star pattern
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, rows;
//
//    /* Input rows to print from user */
//    printf("Enter number of rows : ");
//    scanf("%d", &rows);
//
//    for(i=1; i<=rows; i++)
//    {
//        /* Print leading spaces */
//        for(j=1; j<i; j++)
//        {
//            printf(" ");
//        }
//
//        /* Print hollow inverted right triangle */
//        for(j=i; j<=rows; j++)
//        {
//            /*
//             * Print star for ith column(j==i),
//             * last column(j==rows) and for
//             * first row(i==1).
//             */ 
//            if(j==i || j==rows || i==1)
//            {
//                printf("*");
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}
//
///**
// * C program to print equilateral triangle or pyramid star pattern
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, rows;
//
//    /* Input number of rows to print */
//    printf("Enter number of rows : ");
//    scanf("%d", &rows);
//
//    /* Iterate through rows */
//    for(i=1; i<=rows; i++)
//    { 
//        /* Print leading spaces */
//        for(j=i; j<rows; j++)
//        {
//            printf(" ");
//        }
//
//        /* Print star */
//        for(j=1; j<=(2*i-1); j++)
//        {
//            printf("*");
//        }
//
//        /* Move to next line */
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print hollow pyramid triangle star pattern
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, rows;
//
//    /* Input rows to print from user */
//    printf("Enter number of rows : ");
//    scanf("%d", &rows);
//
//    for(i=1; i<=rows; i++)
//    {
//        /* Print trailing spaces */
//        for(j=i; j<rows; j++)
//        {
//            printf(" ");
//        }
//
//        /* Print hollow pyramid */
//        for(j=1; j<=(2*i-1); j++)
//        {
//            /*
//             * Print star for last row (i==rows),
//             * first column(j==1) and for
//             * last column (j==(2*i-1)).
//             */ 
//            if(i==rows || j==1 || j==(2*i-1))
//            {
//                printf("*");
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//
//        /* Move to next line */
//        printf("\n");
//    }
//
//    return 0;
//}
///**
 //* C program to print reverse pyramid star pattern 
 //*/
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, rows;
//
//    /* Input rows to print from user */
//    printf("Enter number of rows : ");
//    scanf("%d", &rows);
//
//    for(i=1; i<=rows; i++)
//    {
//        /* Print leading spaces */
//        for(j=1; j<i; j++)
//        {
//            printf(" ");
//        }
//
//        /* Print stars */
//        for(j=1; j<=(rows*2 -(2*i-1)); j++)
//        {
//            printf("*");
//        }
//
//        /* Move to next line */
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print hollow inverted pyramid star pattern
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, rows;
//
//    /* Input rows to print from user */
//    printf("Enter number of rows: ");
//    scanf("%d", &rows);
//
//    /* Iterate through rows */
//    for(i=1; i<=rows; i++)
//    {
//        /* Print leading spaces */
//        for(j=1; j<i; j++)
//        {
//            printf(" ");
//        }
//
//        /* Print hollow pyramid */
//        for(j=1; j<=(rows*2 - (2*i-1)); j++)
//        {
//            /*
//             * Print star for first row(i==1),
//             * ith column (j==1) and for
//             * last column (rows*2-(2*i-1))
//             */ 
//            if(i==1 || j==1 || j==(rows*2 - (2*i - 1)))
//            {
//                printf("*");
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//
//        /* Move to next line */
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print half diamond star pattern series.
// */
//
//#include<stdio.h>
//
//int main()
//{
//    int i, j, N, columns;
//
//    /* Input number of columns from user */
//    printf("Enter number of columns:");
//    scanf("%d",&N);
//
//    columns=1;
//
//    for(i=1;i<N*2;i++)
//    {
//        for(j=1; j<=columns; j++)
//        {
//            printf("*");
//        }
//
//        if(i < N)
//        {
//            /* Increment number of columns per row for upper part */
//            columns++;
//        }
//        else
//        {
//            /* Decrement number of columns per row for lower part */
//            columns--;
//        }
//
//        /* Move to next line */
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print mirrored half diamond star pattern
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, N;
//    int star, spaces;
//    
//    /* Input number of columns to print from user */
//    printf("Enter number of columns : ");
//    scanf("%d", &N);
//
//    
//    spaces = N-1;
//    star = 1;
//    
//    /* Iterate through rows */
//    for(i=1; i<N*2; i++)
//    {
//        /* Print leading spaces */
//        for(j=1; j<=spaces; j++)
//            printf(" ");
//        
//        /* Print stars */
//        for(j=1; j<=star; j++)
//            printf("*");
//        
//        /* Move to next line */
//        printf("\n");
//        
//        if(i < N) 
//        {
//            star++;
//            spaces--;
//        }
//        else
//        {
//            star--;
//            spaces++;
//        }
//    }
//
//    return 0;
//}
///**
// * C program to print diamond star pattern 
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, rows;
//    int stars, spaces;
//   
//    printf("Enter rows to print : ");
//    scanf("%d", &rows);
//    
//    
//    stars = 1;
//    spaces = rows - 1;
//    
//    /* Iterate through rows */
//    for(i=1; i<rows*2; i++)
//    {
//        /* Print spaces */
//        for(j=1; j<=spaces; j++)
//            printf(" ");
//        
//        /* Print stars */
//        for(j=1; j<stars*2; j++)
//            printf("*");
//        
//        /* Move to next line */
//        printf("\n");
//        
//        if(i<rows)
//        {
//            spaces--;
//            stars++;
//        }
//        else
//        {
//            spaces++;
//            stars--;
//        }
//    }
//    
//    return 0;
//}
///**
// * C program to print hollow diamond star pattern
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, n;
//
//    printf("Enter value of n : ");
//    scanf("%d", &n);
//
//    // Loop to print upper half of the pattern
//    for(i=1; i<=n; i++)
//    {
//        for(j=i; j<=n; j++)
//        {
//            printf("*");
//        }
//
//        for(j=1; j<=(2*i-2); j++)
//        {
//            printf(" ");
//        }
//
//        for(j=i; j<=n; j++)
//        {
//            printf("*");
//        }
//
//        printf("\n");
//    }
//
//    // Loop to print lower half of the pattern
//    for(i=1; i<=n; i++)
//    {
//        for(j=1; j<=i; j++)
//        {
//            printf("*");
//        }
//
//        for(j=(2*i-2); j<(2*n-2); j++)
//        {
//            printf(" ");
//        }
//
//        for(j=1; j<=i; j++)
//        {
//            printf("*");
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print right arrow star pattern
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, n;
//
//    // Input number of rows from user
//    printf("Enter value of n : ");
//    scanf("%d", &n);
//
//    // Print the upper part of the arrow
//    for(i=1; i<n; i++)
//    {
//        // Print trailing (2*rownumber-2) spaces
//        for(j=1; j<=(2*i-2); j++)
//        {
//            printf(" ");
//        }
//
//        // Print inverted right triangle star pattern
//        for(j=i; j<=n; j++)
//        {
//            printf("*");
//        }
//
//        printf("\n");
//    }
//
//    // Print lower part of the arrow
//    for(i=1; i<=n; i++)
//    {
//        // Print trailing (2*n - 2*rownumber) spaces
//        for(j=1; j<=(2*n - 2*i); j++)
//        {
//            printf(" ");
//        }
//
//        // Print simple right triangle star pattern
//        for(j=1; j<=i; j++)
//        {
//            printf("*");
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print left arrow star pattern
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, n;
//
//    // Input number of rows from user
//    printf("Enter value of n : ");
//    scanf("%d", &n);
//
//    // Print upper part of the arrow
//    for(i=1; i<n; i++)
//    {
//        // Print trailing (n-rownumber) spaces
//        for(j=1; j<=(n-i); j++)
//        {
//            printf(" ");
//        }
//
//        // Print inverted right triangle
//        for(j=i; j<=n; j++)
//        {
//            printf("*");
//        }
//
//        printf("\n");
//    }
//
//    // Print bottom part of the arrow
//    for(i=1; i<=n; i++)
//    {
//        // Print trailing (rownumber-1) spaces
//        for(j=1; j<i; j++)
//        {
//            printf(" ");
//        }
//
//        // Print the right triangle
//        for(j=1; j<=i; j++)
//        {
//            printf("*");
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print the plus star pattern series
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, N;
//
//    printf("Enter N: ");
//    scanf("%d", &N);
//
//    // Run an outer loop from 1 to N*2-1
//    for(i=1; i<=(N * 2 - 1); i++)
//    {
//        // For the center horizontal plus
//        if(i == N)
//        {
//            for(j=1; j<=(N * 2 - 1); j++)
//            {
//                printf("+");
//            }
//        }
//        else
//        {
//            // For spaces before single plus sign
//            for(j=1; j<=N-1; j++)
//            {
//                printf(" ");
//            }
//            printf("+");
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print X star pattern series
// */
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j, N;
//    int count;
//
//    printf("Enter N: ");
//    scanf("%d", &N);
//
//    count = N * 2 - 1;
//
//    for(i=1; i<=count; i++)
//    {
//        for(j=1; j<=count; j++)
//        {
//            if(j==i || (j==count - i + 1))
//            {
//                printf("*");
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}
///**
// * C program to print 8 star pattern series
// */
//#include <stdio.h>
//
//int main()
//{
//    int i, j, size;
//
//    printf("Enter size: ");
//    scanf("%d", &size);
//
//    for(i=1; i<size*2; i++)
//    {
//        for(j=1; j<=size; j++)
//        {
//            // Condition for corner and center intersection space
//            if((i==1 && (j==1 || j==size)) || 
//               (i==size && (j==1 || j==size)) || 
//               (i==size*2-1 && (j==1 || j==size)))
//            {
//                printf(" ");
//            }
//            else if(i==1 || i==size || i==(size*2)-1 || j==1 || j==size)
//            {
//                printf("*");
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}
//


