﻿int score, mok;
char grade;

Console.Write("점수 입력 : ");
score = int.Parse(Console.ReadLine());
mok = score / 10;

if (score > 100 || score < 0)
{
    Console.WriteLine($" > 점수의 허용구간이 아닙니다. ");
    Console.WriteLine($" > 프로그램 종료!");
}
else
{
    switch (mok)
    {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }
    Console.WriteLine($" > 입력한 점수 : {score}");
    Console.WriteLine($" > 등급 : {grade} 학점");
}