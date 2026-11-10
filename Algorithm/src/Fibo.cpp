#include <iostream>

int Fibo(int n)
{
	if (n <= 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return Fibo(n - 1) + Fibo(n - 2);
}

int main(int argc, char* argv[])
{
	int n;
	std::cin >> n;

	std::cout << Fibo(n) << '\n';

	return 0;
}