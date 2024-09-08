#include <time.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 100
char str[255];

int menu(){
	printf("\n\n------------ One dimension array ------------");
	printf("\n0. Init array");
	printf("\n1. Add a value");
	printf("\n2. Linear search a value");
	printf("\n3. Binary search a value");
	printf("\n4. Remove the first existence of a value");
	printf("\n5. Remove all existence of a value");
	printf("\n6. Output (min, max, even, odd, sum)");
	printf("\n7. Output (in range)");
	printf("\n8. Print out the array in asc order");
	printf("\n9. Print out the array in desc order");
	printf("\nOthers: Quit");
	printf("\nChoose: ");
	int choice;
	scanf("%d", &choice);
	return choice;
}

int isFull(int *a, int n){
	return (n>MAXN);
}

int isEmpty(int *a, int n){
	return (n==0);
}

void input(int *a, int n){
	int i;
	for(i=0; i<n; i++){
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void add(int *a, int *pn){
	int i;
	printf("a[%d]: ", (*pn));
	scanf("%d", &a[(*pn)]);
	(*pn)++;
}

void output(int *a, int n){
	int i, max, min, S=0;
	max=min=a[0];
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
		if(max<a[i]) max=a[i];
		if(min>a[i]) min=a[i];
		S+=a[i];
	}
	printf("\nMin= %d; Max= %d; Sum= %d", min, max, S);
}

void outputRange(int *a, int n, int minVal, int maxVal){
	int i;
	for(i=0; i<n; i++){
		if((a[i]>minVal) && (a[i]<maxVal))
			printf("%d ", a[i]);
	}
}

void print(int *a, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}
void print_Even(int *a, int n){
	int i;
	for(i=0; i<n; i++)
		if(a[i]%2==0) printf("%d ", a[i]);
}

void print_Odd(int *a, int n){
	int i;
	for(i=0; i<n; i++)
		if(a[i]%2!=0) printf("%d ", a[i]);
}

int firstLinearSearch(int x, int a[], int n){
	int i, pos;
	char buffer[256], tmp[2]=" ";
	str[0]='\0';
	for(i=0; i<n; i++){
		if(a[i]==x){
			if(itoa(i, buffer, 10)!=NULL){
				strcat(str, buffer);
				strcat(str, tmp);
				pos=i;
				buffer[0]="\0";
			}
		}
	}
	i=strlen(str)-1;
	while(str[i]==' ') i--;
	str[i+1]='\0';
	if(pos>=0) return pos;
	return -1;
}

int binarySearch(int x, int a[], int n){
	int i=0, j=n-1, pos;
	char buffer[256], tmp[2]=" ";
	str[0]='\0';
	while(i<=j){
		pos=(i+j)/2;
		if(a[pos]==x){
			if(itoa(pos, buffer, 10)!=NULL){
				strcat(str, buffer);
				strcat(str, tmp);
				buffer[0]='\0';
			}
		}
		if(a[pos]>x) j=pos-1;
		else i=pos+1;
	}
	i=strlen(str)-1;
	while(str[i]==' ') i--;
	str[i+1]='\0';
	if(pos>=0) return pos;
	return -1;
}

void ascSelectionSort(int *a, int n){
	int t, i, j, minIndex;
	for(i=0; i<n-1; i++){
		minIndex=i;
		for(j=i+1; j<n; j++)
			if(a[minIndex]>a[j]) minIndex=j;
		if(minIndex>i){
			t=a[i];
			a[i]=a[minIndex];
			a[minIndex]=t;
		}
	}
}

void ascInterchangeSort(int *a, int n){
	int i, j, t;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}

void ascBubbleSort(int *a, int n){
	int i, j, t;
	for(i=0; i<n-1; i++){
		for(j=n-1; j>i; j--)
			if(a[j]<a[j-1]){
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
	}
}

void descSelectionSort(int *a, int n){
	int t, i, j, minIndex;
	for(i=0; i<n-1; i++){
		minIndex=i;
		for(j=i+1; j<n; j++)
			if(a[minIndex]<a[j]) minIndex=j;
		if(minIndex>i){
			t=a[i];
			a[i]=a[minIndex];
			a[minIndex]=t;
		}
	}
}

void descInterchangeSort(int *a, int n){
	int i, j, t;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i]<a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}

void descBubbleSort(int *a, int n){
	int i, j, t;
	for(i=0; i<n-1; i++){
		for(j=n-1; j>i; j--)
			if(a[j]>a[j-1]){
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
	}
}

int removeOne(int x, int *a, int *pn){
	int i, pos;
	for(i=0; i<(*pn)-1; i++)
		if(a[i]==x) pos=i;
	if(pos>=0){
		for(i=pos; i<(*pn)-1; i++)
			a[i]=a[i+1];
		(*pn)--;
		return 1;
	}
	return -1;
}

int removeAll(int x, int *a, int *pn){
	int i, j, result=-1;
	for(i=(*pn)-1; i>=0; i--){
		if(a[i]==x){
			for(j=i; j<(*pn)-1; j++)
				a[j]=a[j+1];
		(*pn)--;
		result=i;
		}
	}
	return result;
}

int main(){
	int *a, *b, x, n=0, i=0, j=0, k=0;
	int userChoice;
	int maxVal, minVal;
	a=(int *)calloc(MAXN, sizeof(int));
	do{
		userChoice = menu();
		switch(userChoice){
			case 0:
				if(isFull(a, n))
					printf("\nSorry, the array is full!");
				else{
					printf("\nInput\n");
					printf("Enter number elements of array: ");
					scanf("%d", &n);
					assert(n<=MAXN);
					// a=(int *)calloc(n, sizeof(int));
					printf("\n");
					input(a, n);
				}
				break;
			case 1:
				if(isFull(a, n))
					printf("\nSorry, the array is full!");
				else{
					printf("\nAppend\n");
					/*printf("Enter number elements of array: ");
					scanf("%d", &n);
					assert(n<=MAXN);*/
					printf("\n");
					add(a, &n);
				}
				break;
			case 2:
				if(isEmpty(a, n))
					printf("\nSorry, the array is empty!");
				else{
					printf("\nFind x: ");
					scanf("%d", &x);
					if(firstLinearSearch(x, a, n)!=-1)
						printf("Linear Search: Vi tri cua %d trong array: %s", x, str);
					printf("\nCurrent array: ");
					print(a, n);
					printf("\n");	
				}
				break;
			case 3:
				if(isEmpty(a, n))
					printf("\nSorry, the array is empty!");
				else{
					printf("\nFind x: ");
					scanf("%d", &x);
					ascBubbleSort(a, n);
					printf("\nBubbleSort array: ");
					for(i=0; i<n; i++) printf("%d ", a[i]);
						if(binarySearch(x, a, n)!=-1)
							printf("\nBinary search (based on bubble sort): Vi tri cua %d trong array: %s", x, str);
					printf("\n");
				
					ascInterchangeSort(a, n);
					printf("\nInterchangeSort array: ");
					for(i=0; i<n; i++) printf("%d ", a[i]);
						if(binarySearch(x, a, n)!=-1)
							printf("\nBinary search (based on Interchange sort): Vi tri cua %d trong array: %s", x, str);
					printf("\n");
			
					ascSelectionSort(a, n);
					printf("\nSelectionSort array: ");
					for(i=0; i<n; i++) printf("%d ", a[i]);
						if(binarySearch(x, a, n)!=-1)
							printf("\nBinary search (based on Selection sort): Vi tri cua %d trong array: %s", x, str);
					printf("\n");	
				}
				break;
			case 4:
				// Delete 1 x
				if(isEmpty(a, n))
					printf("\nSorry, the array is empty!");
				else{
					printf("\nDelete (only one) x: ");
					scanf("%d", &x);
					if(isEmpty(a, n))
						printf("\nSorry, the array is empty!");
					else{
						if(removeOne(x, a, &n)==-1) 
							printf("\n%d not found in array!", x);
						else{
							printf("\nRemoved!");
							print(a, n);
						}
					}
				}
				break;
			case 5:
				if(isEmpty(a, n))
					printf("\nSorry, the array is empty!");
				else{
					printf("\nDelete (all) x: ");
					scanf("%d", &x);
					if(isEmpty(a, n))
						printf("\nSorry, the array is empty!");
					else{
						if(removeAll(x, a, &n)==-1) 
							printf("\n%d not found in array!", x);
						else{
							printf("\nRemoved! ");
							print(a, n);
						}
					}
				}
				break;
			case 6:
				if(isEmpty(a, n))
					printf("\nSorry, the array is empty!");
				else{
					printf("\nOutput\nCurrent array: ");
					output(a, n);
					printf("\nEven numbers: ");
					print_Even(a, n);
					printf("\nOdd numbers: ");
					print_Odd(a, n);	
				}
				break;
			case 7:
				if(isEmpty(a, n))
					printf("\nSorry, the array is empty!");
				else{
					printf("\nIn a range. Enter minVal, maxVal: ");
					scanf("%d %d", &minVal, &maxVal);
					outputRange(a, n, minVal, maxVal);
				}
				break;
			case 8:
				if(isEmpty(a, n))
					printf("\nSorry, the array is empty!");
				else{
					printf("\nascSorting; Array a is reserved\n");
					b=(int*) calloc(n, sizeof(int));
					for(i=0; i<n; i++) b[i]=a[i];
					printf("\nAsc Bubble sort\n\t");
					ascBubbleSort(b, n);
					print(b, n);
					printf("\nAsc Interchange sort\n\t");
					ascInterchangeSort(b, n);
					print(b, n);
					printf("\nAsc Selection sort\n\t");
					ascSelectionSort(b, n);
					print(b, n);
					free(b);	
				}
				break;
			case 9:
				if(isEmpty(a, n))
					printf("\nSorry, the array is empty!");
				else{
					printf("\ndescSorting; Array a is reserved\n");
					b=(int*) calloc(n, sizeof(int));
					for(i=0; i<n; i++) b[i]=a[i];
					printf("\nDesc Bubble sort\n\t");
					descBubbleSort(b, n);
					print(b, n);
					printf("\nDesc Interchange sort\n\t");
					descInterchangeSort(b, n);
					print(b, n);
					printf("\nDesc Selection sort\n\t");
					descSelectionSort(b, n);
					print(b, n);
					free(b);	
				}
				break;
			default:
				printf("\nGood day, bye!");
		}
	}while(userChoice>=0 && userChoice<10);
	if(a!=NULL) free(a);
	getch();
	return 0;
}
