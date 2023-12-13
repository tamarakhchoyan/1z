#include <iostream>
int main()
{
	const int n = 8;
	int i;
	int z = 0;
	int a[n];
	int sum = 0;
	int mijin;
	for (i = 0; i < n; i++)
		std::cin >> a[i];
	for (i = 0; i < n; i++)
		if (a[i] < 0 || a[i] % 7 == 0)
		{
			sum += a[i];
			z++;
		}
	mijin = sum / z;
	std::cout << mijin;
	return 0;
}
