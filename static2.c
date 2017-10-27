#include <stdio.h>
int sum (int num) { // sum to n numbers
	static int sum=0;
	sum+=num;
	return sum;
	}

int main() {
	printf("%d\n",sum(55));
	printf("%d\n",sum(45));
	printf("%d\n",sum(50));
	return 0;
	}
