#include<stdio.h>
#include<math.h>
//一次只能移相邻的一个柱子，不能跳着移
int main() {
	 void hanoiplus(int n,char ,char ,char );
	int n;												//n个盘子
	scanf_s("%d", &n);
	hanoiplus(n, 'A', 'B', 'C');
	return 0;
}

void hanoiplus(int n, char one, char two, char three )//将n个盘子从1借助2移到3
{
	if (n == 1)
		printf("%c--%c\n%c--%c\n", one, two, two, three);
	else {
		hanoiplus(n - 1, one, two, three);
		printf("%c--%c\n", one, two);
		hanoiplus(n - 1, three, two, one);
		printf("%c--%c\n", two, three);
		hanoiplus(n - 1, one, two, three);
	}
}