/*MUC LUC: 

	I. Ve 4 tam giac vuông cân
    II. Ve 4 tam giac vuong can rong
    III. Tam giac can
    IV. Tam giac deu
    V. Ve hinh chu nhat dac
    VI. Ve hinh chu nhat rong
    VII. Hinh vuong rong & dac
    VIII. Hinh chu "Z"
    IX. Dong ho cat
    X. Ve hinh vuong rong co 2 duong cheo
    XI. Tam giac Pascal
*/
            
//I. Ve 4 tam giac vuông cân
//#include <stdio.h>
// 
//int main() {
//   int n,i,j;
// 
//   n = 6;
// 
//   printf("Ve tam giac sao vuong can:\n");
//  for(i = 1; i <= n; i++) {
//      for(j = 1; j <= i; j++)
//    printf ("* ");
//      printf ("\n");
//}
//    for(i = 0; i < n; i++) {
//    for(j=0; j<i; j++)
//         printf("  "); 
//
//      for(j=i; j < n; j++)
//       printf(" *");
// 
//    printf("\n");
//       }
//     for(i = n; i >= 1; i--) {
//      	 for(j = 1; j <= i; j++)
//        printf("* ");  
//          printf ("\n");
//    }
//      for (i=0; i<n; i++){
//    	for (j=0; j<n; j++){
//      		int k=n-1-i;
//    		if (j>=k)
//      		printf ("* ");
//    		else 
//      		printf ("  ");
//		  }
//		  printf ("\n");
//	  }
//  }

//***END

//II. Ve 4 tam giac vuong can rong
//#include <stdio.h>
// 
//int main() {
//   int n,i,j; 
//   n = 6; 
//   printf("Ve tam giac sao vuong can:\n");
//   for(i = 1; i <= n; i++) {
//      for(j = 1; j <= i; j++){
//      	if (i==1||j==1||i==n|j==i)
//      	printf("* ");
//      	else 
//      	printf ("  ");
//	  }
//      printf("\n");
//   }
//   
//   for(i = 0; i < n; i++) {
//      	for(j=0; j<i; j++)
//       	printf("  "); 
// 
//      	if(j>0){
//    		for(j=i; j < n; j++){
//      		if(j==i || j==n-1){
//    			printf(" *");
//			}
//			else printf("  ");
//	  	}
//		  }
//		  else{
//		  	for(j=i; j < n; j++){
//		  		printf(" *");
//			  }
//		  }
//  		printf("\n");        
//}
//   for(i = n; i >= 1; i--) {
//    if(i==n){
//      	for(j = 1; j <= i; j++)
//       printf("* ");
//	  }
//	  else{
//	  	for(j = 1; j <= i; j++)
//       if(j==1 || j==i){
//         	printf("* ");
//		 }
//		 else printf("  ");
//	  }
//
//      printf("\n");
//}
//   for (i=0; i<n; i++){
//    	if(i<n-1){
//    		for (j=0; j<n; j++){
//		int k=n-1-i;
//		if (j>=k){
//			if(j==k || j==n-1){
//				printf (" *");
//			}
//			else printf("  ");
//		}
//		else printf ("  ");
//		}
//	}
//	else{
//		for (j=0; j<n; j++){
//			printf(" *");
//		}
//	}
//	printf ("\n");
//}
//}


//***END

//III. Tam giac can
//#include<stdio.h>
//int main ()
//{
//int n,i,j;
//printf("nhap chieu cao tam giac:");
//scanf("%d",&n);
//for(i=n-1;i>=0;i--)
//{
//for(j=0;j<2*n-1;j++){
//	if (i+j>=n-1&&i+n>=j+1)
//	printf ("*");
//	else printf (" ");
//}
//printf ("\n");
//}
//}

//***END

//IV, Tam giac deu
//#include <stdio.h>
//
//int main() {
//   int n,i,j;
//
//   n = 5;   // khai bao so hang.
//
//   printf("Ve tam giac sao deu:\n\n");
//   for(i = n-1; i >=0; i--) {
//      for(j = 1; j <= n-i; j++)
//         printf(" ");
//
//      for(j = 1; j <= i; j++)
//         printf("* ");
//
//      printf("\n");
//   }
//   return 1;
//}

//***END

//V. Ve hinh chu nhat dac
//#include<stdio.h>
//#include<conio.h>
//
//int main(){
//	int n, m;
//	printf ("Nhap n=");
//	scanf ("%d", &n);
//	printf ("Nhap m=");
//	scanf ("%d", &m);
//	int i;
//	for (i=1; i<=n; i++){
//		int k;
//		for (k=1; k<=m; k++)
//		printf (" *");
//		printf ("\n");}
//	}

//***END

//VI. Ve hinh chu nhat rong
//#include<stdio.h>
//#include<conio.h>

//int main(){
//	int n, m;
//	printf ("Nhap n=");
//	scanf ("%d", &n);
//	printf ("Nhap m=");
//	scanf ("%d", &m);
//	int i;
//	for (i=1; i<=n; i++){
//		int k;
//		for (k=1; k<=m; k++){
//			if (i==1||k==1||i==n||k==m)
//				printf ("*");
//		else
//		printf (" ");
//		}
	
//		printf ("\n");
//	}
//}

//***END

//VII. Hinh vuong rong & dac
#include<stdio.h>
main(){
	int i, j, n;
	printf ("input n=");
	scanf ("%d", &n);
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			if (i==0||j==0)
			    printf (" *");
			else if (i==n-1||j==n-1)
			    printf (" *");
			else printf ("  ");
		}
		printf ("\n");
	}
}

//***END


//VIII, Hinh chu "Z"
//#include<stdio.h>
//main(){
//	int i, j, n;
//	printf ("input n=");
//	scanf ("%d", &n);
//	for (i=0; i<n; i++){
//		for (j=0; j<n; j++){
//			if (i==0) printf (" *");
//			else if(i==j) printf (" *");
//			else if (i==n-1) printf ("* ");
//	    	else printf("  ");
//		}
//		printf ("\n");
//	}
//	for (i=0; i<n; i++){
//		for (j=0; j<n; j++){
//			if (i==0) printf (" *");
//			else if(i+j==n-1) printf (" *");
//			else if (i==n-1) printf (" *");
//	    	else printf("  ");
//		}
//		printf ("\n");			
//		}
//	}

//***END

//IX. Dong ho cat
//#include<stdio.h>
//main(){
//	int i, j, n;
//	printf ("input n=");
//	scanf ("%d", &n);
//	for (i=0; i<n; i++){
//		for (j=0; j<n; j++){
//			if (i==0) printf (" *");
//			else if(i==j) printf (" *");
//			else if (i==n-1) printf ("* ");
//			else if(i+j==n-1) printf (" *");
//	    	else printf("  ");
//		}
//		printf ("\n");
//	}
//}

//***END

//X. Ve hinh vuong rong co 2 duong cheo
//#include<stdio.h>
//main(){
//	int i, j, n;
//	printf ("input n=");
//	scanf ("%d", &n);
//	for (i=0; i<n; i++){
//		for (j=0; j<n; j++){
//			if (i==0) printf (" *");
//			else if(i==j) printf (" *");
//			else if (i==n-1) printf ("* ");
//			else if (i+j==n-1) printf (" *");
//			else if (j==0) printf ("*");
//			else if (j==n-1) printf ("  *");
//	    	else printf("  ");
//		}
//		printf ("\n");
//	}
//}

//***END

//XI. Tam giac pascal
//#include<stdio.h>
//int factorial (int n){
//	int f; 
//	for (f=1; n>1; n--)
//	f*=n;
//	return f;
//} 
//   int ncr(int n, int r){
//    	return factorial(n)/(factorial(n-r) * factorial(r));
//	}
//	int main(){
//		int n, i, j;
//		printf ("n=");
//		scanf ("%d", &n);
//		printf ("Draw Pascal triangle:\n\n");
//		for (i=0; i<=n; i++){
//			for (j=0; j<n-i; j++)
//			printf ("  ");
//			for (j=0; j<=i; j++)
//			printf (" %3d", ncr(i, j));
//			printf ("\n");
//		}
//		return 0;
//	}



 


