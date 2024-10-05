int* printDivisors(int n, int &size){
    
    int* arr = new int [n];
    int index = 0;

    for (int i=1; i<=n; i++)
    {
        if (n % i == 0)
        {
            arr[index] = i;
            index++;
        }
    }

    size = index;
    
    return arr;
}
