class Solution
{
    private int start;

    public int width
    {
        get { return start; }
        set
        {
            if (value > 0)
            {
                start = value;
            }
            else
            {
                Console.WriteLine("시작 : 양의 정수만 입력 ");
            }
        }
        
    }

    private int end;

    public int height
    {
        get { return end; }
        set
        {
            if (value > 0)
            {
                end = value;
            }
            else
            {
                Console.WriteLine("종료 : 양의 정수만 입력");
            }
        }
    }

    public Solution(int start, int end)
    {
        width = start;
        height = end;
    }

    public int Area()
    {
        return this.width = this.height;
    }

    static void Main(string[] args)
    {
        Solution box = new Solution(-38, -23);
        Console.WriteLine();

        box.width = 73;
        Console.WriteLine(box.width);
        box.height = -88;
    }
}