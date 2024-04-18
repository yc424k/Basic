int[] a = {10, 50, 30};
Array.Sort(a);
Console.Write(" > 오름차순 정렬 : ");

foreach (var VARIABLE in a)
{
    Console.Write($"{VARIABLE} ");
}

Console.WriteLine();
Array.Reverse(a);
Console.Write(" > 내림차순 정렬 : ");

foreach (var VARIABLE in a)
{
    Console.Write($"{VARIABLE} ");
}