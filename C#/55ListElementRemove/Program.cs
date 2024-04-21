class Soltion
{
    static void Main(string[] args)
    {
        List<int> list = new List<int>() { 123, 35, 78, 98 };
        
        Console.WriteLine(" > 리스트 요소 제거 전");
        foreach (var VARIABLE in list)
        {
            Console.WriteLine(" 요소 : {0,3}", VARIABLE);
        }
        Console.WriteLine(" > 리스트 요소 개수 : {0}",list.Count);
        Console.WriteLine();

        list.Remove(35);
        Console.WriteLine(" > 리스트 요소 제거 후");

        foreach (var VARIABLE in list)
        {
            Console.WriteLine(" 요소 : {0,3}", VARIABLE);
        }
        Console.WriteLine(" > 리스트 요소 개수 : {0}", list.Count);
    }
}