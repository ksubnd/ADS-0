// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
	if (b > a)
	{
		int temp = 0;
		temp = a;
		a = b;
		b = temp;
	}
	if (a % b == 0)
	{
		return b;
	}
	for (a; a % b != 0; a = b)
	{
		b = a % b;
	}
	return b;
}
