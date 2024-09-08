#include <stdio.h>
int main(void)
{
int index, sum;
index = sum = 0;
while(index++ < 3)
sum += 10 * index;
printf("%d", sum);
} 