class Soluton
{
    static void Main(string[] args)
    {
        List<int> list = new List<int>();
        
        list.Add(23);
        list.Add(85);
        list.Add(16);
        list.Add(95);
        
        Console.WriteLine(" > 반복문으로 요소 출력");

        foreach (var VARIABLE in list)
        {
            Console.WriteLine(" 요소 : {0}", VARIABLE);
        }
        Console.WriteLine(" > 리스트 요소 개수 : {0}",list.Count);
    }
}