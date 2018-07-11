#include <stdio.h>

int main(){
	char track[] = "컨설팅";
	char name[] = "김성범";
	int a=0;
	int sum=0;

	printf("[BOB7][%s]sum_test[%s]\n", track, name);

	while(a<=10)
	{
	sum=sum+a;
	a++;
	}
	printf("1부터 10까지 합 = %d\n", sum);

	return 0;
}
