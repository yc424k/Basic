// See https://aka.ms/new-console-template for more information

static void IsOperator(object obj)
{
    Console.WriteLine($"{obj} is int : {obj is int}");
    Console.WriteLine($"{obj} is string : {obj is string}");
}

static void AsOperator(object obj)
{
    Console.WriteLine($"{obj} as string == null{obj as string == null}");
}

IsOperator(10);
IsOperator("ABC");
AsOperator(10);
AsOperator("ABC");