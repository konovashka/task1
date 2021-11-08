//определение суммы и количества цифр числа
#include<iostream>
using namespace std;
int main()
{
	int n, sum, count, ost;
	sum = 0;
	ost = 0;
	count = 0;
	scanf_s("%d", &n);
	while (n > 0)
	{
		ost = n % 10;
		sum += ost;
		count += 1;
		n = n / 10;
	}
	printf("%d", sum);
	printf("%d", count);
	return 0;
}
