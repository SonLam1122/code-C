#include <stdio.h>
long long max(long long a, long long b){
	return a<b?b:a;
}
int main (){
	int n, i;
	scanf("%d", &n);
	int a[n];
	for(i=0;i<n;i++) scanf("%d", &a[i]);
	int res=0, cnt=1;
	for(i=0;i<n;i++) {
		if(a[i]<a[i+1]){
			cnt++;
		}
		else {
			cnt=1;
		}
		res=max(res, cnt);
	}
          printf("%d", res);
}