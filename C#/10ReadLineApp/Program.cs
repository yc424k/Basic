// See https://aka.ms/new-console-template for more information

int time, hour, minute, second;
Console.WriteLine("***Enter an integral time : ");
time = int.Parse(Console.ReadLine());
hour = time / 10000;
minute = time / 100 % 100;
second = time % 100;
Console.WriteLine("*** Time is " + hour + ":" + minute + ":" + second);