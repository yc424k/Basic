// See https://aka.ms/new-console-template for more information
int foo = 526;
object bar = foo;
Console.WriteLine(bar);
try
{
    double d = (short)bar;
    Console.WriteLine(d);
}
catch (InvalidCastException e)
{
    Console.WriteLine("Error");
}