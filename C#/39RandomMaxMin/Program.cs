Random r = new Random();
int[] v = new int[10];

for (int i = 0; i < v.Length; i++)
{
    v[i] = r.Next(100);
}
Console.WriteLine(" > 랜덤값 출력");
foreach (var VARIABLE in v)
{
    Console.Write("{0, 5}", VARIABLE);
}
Console.WriteLine();

int max = v[0];
for (int i = 1; i < v.Length; i++)
{
    if (v[i] > max)
    {
        max = v[i];
    }
}

Console.Write(" > 최대값 : ");
Console.WriteLine("{0, 3}", max);

int min = v[0];
for (int i = 1; i < v.Length; i++)
{
    if (v[i] < min)
    {
        min = v[i];
    }
}
Console.Write(" > 최소값 : ");
Console.WriteLine("{0, 3}", min);