Console.WriteLine("while 반복문 종료 후 결과 값");
int a = 1;
int sum = 0;

while (a <= 100)
{
    sum += a;
    a++;
}
Console.WriteLine($"{sum}");