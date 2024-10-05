int* printDivisors(int n, int &size){
    
    int* divisors = new int [n];
    int count = 0;

    int sqrtN = sqrt (n);

    for (int i=1; i<=sqrtN; i++)
    {
        if (n % i == 0)
        {
            divisors[count] = i;
            count++;

            if (i != n/i)
            {
                divisors[count] = n/i;
                count++;
            }
        }
    }

    size = count;
    sort (divisors, divisors+size);
    
    return divisors;
}
