﻿Console.WriteLine(" > 2차원 가변 배열 : arrB[2][3]");

int[][] arrB = new int[2][];
arrB[0] = new int[] {100,200};
arrB[1] = new int[] {300,400,500};

for (int i = 0; i < 2; i++)
{
    Console.Write($" arrB[{i}] : ");
    for (int j = 0; j < arrB[i].Length; j++)
    {
        Console.Write($"{arrB[i][j]} ");
    }
    Console.WriteLine();
}