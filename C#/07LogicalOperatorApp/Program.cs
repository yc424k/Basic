// See https://aka.ms/new-console-template for more information
int x = 3, y = 5, z = 7;
bool b;
b = x < y && y < z;
Console.WriteLine($"Result = {b}");
b = x == y || x < y && y > z;
Console.WriteLine($"Result = {b}");
