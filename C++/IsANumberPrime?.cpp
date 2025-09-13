bool isPrime(int num) {
	int	i;

	if (num <= 1)
		return false;
	i = 2;
	while (i * i <= num)
	{
		if (num % i == 0) return false;
    i++;
	}
	return true;
}