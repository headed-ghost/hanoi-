#include<stdio.h>
#include<math.h>
//һ��ֻ�������ڵ�һ�����ӣ�����������
int main() {
	 void hanoiplus(int n,char ,char ,char );
	int n;												//n������
	scanf_s("%d", &n);
	hanoiplus(n, 'A', 'B', 'C');
	return 0;
}

void hanoiplus(int n, char one, char two, char three )//��n�����Ӵ�1����2�Ƶ�3
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