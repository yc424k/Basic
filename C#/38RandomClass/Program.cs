Random r = new Random();
int[] a = new int[6];

for (int i = 0; i < 6; i++)
{
    a[i] = r.Next(1, 46);
}

Console.WriteLine(" > 생성된 6개의 랜덤 숫자 출력 ");
foreach (var VARIABLE in a)
{
    Console.Write("{0, 8}", VARIABLE);
}