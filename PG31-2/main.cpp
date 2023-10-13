
#include <stdio.h>


int Recursive(int n, int m)
{
	m--;

	if (m <= 0)
	{

		return(n);

	}

	return (n + Recursive(n * 2 - 50, m));

}

int main()
{
	int a = 0;
	int b = 8;
	int c = 100;
	int d = 1072;

	a = b * d;

	int result;

	result = Recursive(c, b);

	printf("%d時間分働いた再帰的な賃金 = %d\n", b, result);

	printf("%d時間分の働いた一般的な賃金 = %d\n", b, a);

	return 0;
}