class Student
{
    public int year, month, day;
}

class Program
{
    static void Main(string[] args)
    {
        Student sDay = new Student();
        sDay.year = 2024;
        sDay.month = 4;
        sDay.day = 24;
        
        Console.WriteLine(" > 내 생일");
        Console.Write(sDay.year + "/");
        Console.Write(sDay.month + "/");
        Console.WriteLine(sDay.day);
    }
}