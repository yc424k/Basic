﻿// See https://aka.ms/new-console-template for more information

class LocalVariableApp
{ 
    static int x;

    public static void Main()
    {
        int x = (LocalVariableApp.x = 2) * 2;
        Console.WriteLine($"static x = {LocalVariableApp.x}");
        Console.WriteLine($"local = {x}");
    }
}