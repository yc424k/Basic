int count;

Console.WriteLine("홍수만 출력하는 프로그램");
Console.Write(" > ");

for (count = 1; count <= 10; count++)
{
    if (count % 2 == 0)
    {
        continue;
    }
    Console.Write($"{count} ");
}