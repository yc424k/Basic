int count = 1, sum = 0;

Console.WriteLine("누적합이 500을 넘으면 프로그램 종료");

do
{
    if (sum > 500)
    {
        Console.WriteLine(" > 누적합 500 초과!");
        break;
    }
    else
    {
        sum += count;
    }

    count++;
} while (count <=100);
Console.WriteLine($"누적 합계 : {sum}");