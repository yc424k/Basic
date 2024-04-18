Random r = new Random();
int[] v = new int[13];

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

// 랜덤값 출력
int sum = 0;
for (int i = 0; i < v.Length; i++)
{
    sum += v[i];
}
Console.Write(" > 총점 : ");
Console.WriteLine("{0,3}", sum);

// 랜덤값 평균
double avg = 0;
avg = (double)sum / v.Length;

Console.Write("> 평균 : ");
Console.WriteLine("{0, 3}" ,avg);