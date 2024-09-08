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
	int k, n, m, q;// k: hang chay tu 0 den n-1; n: vi tri; m: chieu cao; q: khoang trang ben ngoai tam giac
	printf("input m: ");
	scanf ("%d", &m);
	for(k=0; k<m; k++){
		for(q=0; q<=m-k; q++)
		printf ("  "); //in khoang trang
		for (n=0; n<=k; n++)
		printf("%3d ", pascal(k, n));// in gia tri hang k, vi tri n
		printf("\n");
	}
}
