bool palindrome(int n)
{
    int original_number = n;

    int reverse_number = 0;

    if (n == 0 || n == 00 || n == 000)
    {
        return true;
    }

    while (n != 0)
    {
        int digit = n % 10;

        reverse_number = reverse_number * 10 + digit;

        n = n / 10;
    }

    if (reverse_number == original_number)
    {
        return true;
    }
    else
    {
        return false;
    }
}