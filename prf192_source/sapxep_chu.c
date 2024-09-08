#include <stdio.h>
#include <string.h>

void sapxep(char a[][100],int n){
    int i,j;
    char temp[100];
    for (i=0;i<n-1;i++){
        for(j = 0; j<n-i-1;j++){
            if(strcmp( a[j], a[j+1]) > 0){ //strcmp()Nếu chuỗi thứ nhất (đầu vào thứ nhất) nhỏ hơn chuỗi thứ hai (đầu vào thứ hai), strcmp() trả về một số âm.
                strcpy (temp, a[j]); // copy chuỗi thứ 2 vào thứ nhất giống dấu =
                strcpy (a[j], a[j+1]);
                strcpy (a[j+1], temp);
            }
        }
    }
}

int main(){
    char a[100][100];
    int i;
    int n;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%s",&a[i]);
    }
    sapxep(a,n);
    printf("OUTPUT: \n");
    for (i = 0; i<n; i++){
        printf("%s\n",a[i]);
    }
}