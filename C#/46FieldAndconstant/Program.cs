class Owner
{
    public string name;
}

class Exchange
{
    public static double P = 0.3025;
    public const int Q = 100;

    public static double result = P * Q;
}

class Program
{
    static void Main(string[] args)
    {
        Owner s = new Owner();
        s.name = "홍길동";
        
        Console.WriteLine($" > 성명 : {s.name}");
        Console.WriteLine($" > 기준 : 1 평방미터 -> {Exchange.P} 평");
        Console.WriteLine($" > 대상 : {Exchange.Q} 평방미터");
        Console.WriteLine($" > 결과 : {Exchange.result} 평");
    }
}