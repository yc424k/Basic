int[] v = {4,5,3,8,1};

Console.WriteLine(" > 주어진 배열 요소");
foreach (var VARIABLE in v)
{
    Console.Write("{0,5}",VARIABLE);   
}

Console.WriteLine();
Console.WriteLine();

Console.WriteLine(" > 버블정렬 수행 과정");
for (int i = 4; i > 0; i--)
{
    for (int j = 0; j < i; j++)
    {
        if (v[j] > v[j + 1])
        {
            int t = v[j];
            v[j] = v[j + 1];
            v[j + 1] = t;
        }

        foreach (var VARIABLE in v)
        {
            Console.Write("{0, 5}", VARIABLE);
        }
        Console.WriteLine();
    }
}