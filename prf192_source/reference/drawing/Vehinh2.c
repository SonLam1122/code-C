/* Muc luc: 
	+ LINE 8 : I. Ve hinh thoi
    + LINE 32 : II. Ve tam giac vuong can so
    + LINE 78 : III. Ve tam giac can so
    + LINE 154 : IV, Ve hai tam giac vuong can co diem chung
 */
 
//I. Ve hinh thoi
//#include<stdio.h>
//main() 
//{
//	int x, h, i, k;
//	printf("nhap do dai canh: ");
//	scanf("%d", &x);
//		printf("\nhinh thoi\n");
//	for(h=1; h<=x; h++)
//	{
//		for(k=x-h; k>=1; k--) printf("  ");
//		for(i=1; i<=h+h-1; i++) printf("* ");
//		printf("\n");
//	}
//	for(h=x-1; h>=1; h--)
//	{
//		for(k=x-h; k>=1; k--) printf("  ");
//		for(i=1; i<=h+h-1; i++) printf("* ");
//		printf("\n");
//	}
//}

//***END

//II. Ve tam giac vuong can so
//#include<stdio.h>
//main() 
//{
//	int x, h, i;
//	printf("nhap do dai canh: ");
//	scanf("%d", &x);
//    printf("\nhinh 1\n");
//	for(h=1; h<=x; h++)
//	{
//		for(i=1; i<=h; i++) printf("%d ", i);
//		printf("\n");
//	}
//
//    printf("\nhinh 2\n");
//    for(h=1; h<=x; h++)
//	{
//		for(i=1; i<=x; i++)
//		{
//			if(i>=h) printf("%d ", i-h+1);
//			else printf("  ");
//		}
//		printf("\n");
//	}
//
//    printf("\nhinh 3\n");
//	for(h=1; h<=x; h++)
//	{
//		for(i=1; i<=x; i++)
//		{
//			if(i+h>=x+1) printf("%d ", x-i+1);
//			else printf("  ");
//		}
//		printf("\n");
//	}
//
//    printf("\nhinh 4\n");
//	for(h=x; h>=1; h--)
//	{
//		for(i=h; i>=1; i--) printf("%d ", i);
//		printf("\n");
//	}
//}

//***END

//III. Ve tam giac can so
//#include<stdio.h>
//main() 
//{
//	int x, h, i, k, var;
//	printf("nhap do dai canh: ");
//	scanf("%d", &x);
//    printf("\nhinh 1\n");
//    int var;
//	for(h=1; h<=x; h++)
//	{
//		for(k=x-h; k>=1; k--) printf("  ");
//		for(i=1; i<=h+h-1; i++) 
//		{
//			if(i<=h)
//			{
//				var = i;
//				printf("%2d", var);
//			}
//			else 
//			{
//				var--;
//				printf("%2d", var);
//			}
//			
//		}
//		printf("\n");
//	}
//
//    printf("\nhinh 2\n");
//    for(h=x; h>=1; h--)
//	{
//		for(k=x-h; k>=1; k--) printf("  ");
//		for(i=1; i<=h+h-1; i++) 
//		{
//			if(i<=h)
//			{
//				var = i;
//				printf("%2d", var);
//			}
//			else 
//			{
//				var--;
//				printf("%2d", var);
//			}
//		}
//		printf("\n");
//	}
//
//    printf("\nhinh u\n");	
//	for(h=1; h<=x; h++)
//	{
//		var=h-1;
//		for(k=x-h; k>=1; k--) printf("  ");
//		for(i=1; i<=h+h-1; i++) 
//		{
//			if(i<=h)
//			{
//				var++;
//				if(var>=10) var=var-10;
//				printf("%2d", var);
//			}
//			else
//			{
//				var--;
//				if(var<=-1) var=var+10;
//				printf("%2d", var);
//			}
//		}
//		printf("\n");
//}
//}


//***END

//IV, Ve hai tam giac vuong can co diem chung
//#include<stdio.h>
//main() 
//{
//	int x, h, i;
//	printf("nhap do dai canh: ");
//	scanf("%d", &x);
//    printf("\nhinh 1\n");
//    for(h=1; h<=x; h++)
//	{
//		for(i=1; i<=x*2; i++)
//		{
//			if(i>=h+1 && i<=x*2-h-1 || i==x*2) printf("  ");
//			else 
//			{
//				if(i<=h) printf("%d ", i);
//				else printf("%d ", x*2-i);
//			}
//		}
//		printf("\n");
//	}
//
//    printf("\nhinh 2\n");
//    for(h=x; h>=1; h--)
//	{
//		for(i=1; i<=x*2; i++)
//		{
//			if(i>=h+1 && i<=x*2-h-1 || i==x*2) printf("  ");
//			else 
//			{
//				if(i<=h) printf("%d ", i);
//				else printf("%d ", x*2-i);
//			}
//		}
//		printf("\n");
//	}
//}

