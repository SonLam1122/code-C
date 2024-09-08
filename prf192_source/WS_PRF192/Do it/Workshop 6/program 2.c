#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
double checkNumber(int *n, char buffer);
void addArray(int array[], int *size);
void searchArray(int array[], int size);
void printArray(int array[], int size);
void arrayAscend(int array[], int size);
void arrayDescend(int array[], int size);
void removeOne(int array[], int *size);
void removeAll(int array[], int *size);
void showOp();
void rangeOfArray(int array[], int size);
int main()
{
    int array[MAX];
    int size = 0;
    int choice, n, buffer;
    do{
        showOp();
        do{
            choice = checkNumber(&n, buffer);
            if(choice<1 || choice>9){
                printf("\nVui long chon tu 1-9: ");
            }
        }while(choice <1 || choice > 9);

        switch(choice){
            case 1:{
                addArray(array, &size);
                printf("\n");
                break;
            }
            case 2:{
                searchArray(array, size);
                printf("\n");
                break;

            }
            case 3:{
                printArray(array,size);
                printf("\n");
                break;
            }
            case 4:{
                rangeOfArray(array, size);
                printf("\n");
                break;
            }
            case 5:{
                arrayAscend(array, size);
                printf("\n");
                break;
            }
            case 6:{
                arrayDescend(array, size);
                printf("\n");
                break;
            }
            case 7:{
                removeOne(array, &size);
                printf("\n");
                break;
            }
            case 8:{
                removeAll(array, &size);
                printf("\n");
                break;
            }
        }
    }while(choice != 9);
}

void showOp(void){
    printf("\n1- Add  a value.");
    printf("\n2- Search a value");
    printf("\n3- Print out the array");
    printf("\n4- Print out values in a range");
    printf("\n5- Print out the array in ascending order");
    printf("\n6- Print out the array in descending order ");
    printf("\n7- Remove the first existence of a value");
    printf("\n8- Remove all existences of a value");
    printf("\n9- Quit");
    printf("\n------------------------");
    printf("\nSelect an operation: ");
}
double checkNumber(int *n, char buffer){
    do{
           scanf("%d", n);
           scanf("%c", &buffer);
           fflush(stdin);
           if(buffer != 10){
            printf("\nVui long nhap so !!! ");
            printf("\nNhap lai: ");
           }else{
            return *n;
           }
        }while(buffer != 10);
}

void addArray(int array[], int *size){
    printf("\nNhap kich thuoc: ");
    scanf("%d", size);
int i;
    for(i = 0; i<= *size - 1; i++){
        printf("\nArray[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("\n------------");
    printf("\nDone!");
}

void searchArray(int array[], int size){
    if(size == 0){
        printf("\nNothing to printf!!");
        return;
    }
	int i;
    int key;
    printf("\nNhap key can tim: ");
    scanf("%d", &key);

    int count = 0;
    printf("\nVi tri cua %d la: ", key);
    for( i = 0; i<= size -1; i++){
        if(array[i]== key){
            printf("%5d", i);
            count++;
        }
    }
    if(count == 0){
        printf("\nKhong co %d trong mang!", key);
    }
}

void printArray(int array[], int size){
    if(size == 0){
        printf("\nNothing to printf!!");
        return;
    }
    printf("\n");
    int i;
    for( i = 0; i <= size -1; i++){
        printf("%5d", array[i]);
    }



}

void rangeOfArray(int array[], int size){
    if(size == 0){
        printf("\nNothing to printf!!");
        return;
    }
    int min, max,i;
    printf("\nNhap min: ");
    scanf("%d", &min);
    printf("\nNhap max: ");
    scanf("%d", &max);

    printf("\n Cac gia tri trong khoang min max la: ");
    for( i = 0; i <= size -1; i++){
            if(array[i] >= min && array[i] <= max){
                    printf("%5d", array[i]);
            }
    }
}
void arrayAscend(int array[], int size){
    if(size == 0){
        printf("\nNothing to printf!!");
        return;
    }
    int minIndex;
    int i, j;

    for(i = 0; i<=size -1; i++){
//        minIndex = i;
        for(j=i+1; j<= size-1; j++){
//            if(array[minIndex] > array[j]){
//                minIndex = j;
//            }
            if(array[i]>array[j]){
                int t = array[i];
                array[i] = array[j];
                array[j] = t;
            }
        }
    }

    printArray(array, size);
}

void arrayDescend(int array[], int size){
    if(size == 0){
        printf("\nNothing to printf!!");
        return;
    }

    int i, j;

    for(i = 0; i<=size -1; i++){
        for(j=size - 1; j>i; j--){
            if(array[j]>array[j-1]){
                int t = array[j];
                array[j] = array[j-1];
                array[j-1] = t;
            }
        }
    }

    printArray(array, size);
}

void removeOne(int array[], int *size){
    if(size == 0){
        printf("\nNothing to printf!!");
        return;
    }

    int key, i, j;
    printf("\nNhap key can xoa: ");
    scanf("\n%d", &key);

    for( i = 0; i<= *size -1; i++){
        if(key == array[i]){
            for( j = i; j <= *size -1; j++){
                array[j] = array[j+1];
            }
            (*size)--;

            printf("\n------------");
            printf("\nDone!");

            return;
        }
    }

}

void removeAll(int array[], int *size){
    if(size == 0){
        printf("\nNothing to printf!!");
        return;
    }
    int key,i, j;
    printf("\nNhap key can xoa: ");
    scanf("\n%d", &key);

    for( i = 0; i<= *size -1; i++){
        if(key == array[i]){
            for( j = i; j <= *size -1; j++){
                array[j] = array[j+1];
            }
            (*size)--;
        }
    }

    printf("\n------------");
    printf("\nDone!");
}

