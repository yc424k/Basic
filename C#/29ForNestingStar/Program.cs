﻿int star, count;

for (count = 1; count <= 5; count++)
{
    for (star = 5; star >= count; star--)
    {
        Console.Write("*");
    }
    Console.WriteLine();
}