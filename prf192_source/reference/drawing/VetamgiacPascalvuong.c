#include <stdio.h>

int giaithua(int a){
	int b, s=1;
	if (a==0)
	return 1;
	else{
		for(b=1; b<=a; b++)
		s=s*b;
		return s;
	} // ham giai thua cua a
}

int pascal(int i, int j){
	return (giaithua(i))/((giaithua(j))*giaithua(i-j));
} // gia tri phan tu tai hang i, vi tri j bang to hop chap j cua i

int main()
{
	int k, n, m, q; // khac tam giac can Pascal: khong in khoang trang
	printf("input m: ");
	scanf ("%d", &m);
	for(k=0; k<m; k++){
		for(n=0; n<=k; n++)
		printf("%d ", pascal(k, n));
		printf("\n");
	}
}
