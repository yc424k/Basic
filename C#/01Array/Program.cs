// See https://aka.ms/new-console-template for more information
int [][] Array = new int[3][];
int i,j;

for (i = 0; i < Array.Length; i++)
{
    Array[i] = new int[i + 3];
}

Console.WriteLine(Array[0].Length);
Console.WriteLine(Array[1].Length);
Console.WriteLine(Array[2].Length);

for (i = 0; i < Array.Length; i++)
{
    for (j = 0; j < Array[i].Length; j++)
    {
        Array[i][j] = i * Array[i].Length + j;
    }x
}

for (i = 0; i < Array.Length; i++)
{
    for (j = 0; j < Array[i].Length; j++)
    {
        Console.Write(" " + Array[i][j]);
    }
    Console.WriteLine();
}