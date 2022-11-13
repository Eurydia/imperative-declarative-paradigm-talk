int fibonnaci(int n)
{
    int a = 0;
    int b = 1;
    int temp;

    while (n--)
    {
        temp = a + b;
        a = b;
        b = temp;
    }

    return a;
}