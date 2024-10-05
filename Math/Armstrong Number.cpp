bool checkArmstrong(int n){
	int l = to_string(n).length();

	int original_number = n;

	int sum = 0;

	while (n > 0)
	{
		int digit = n % 10;

		sum += pow(digit, l);

		n = n / 10;
	}

	if (sum == original_number)
	{
		return true;
	}
	else
	{
		return false;
	}
}

