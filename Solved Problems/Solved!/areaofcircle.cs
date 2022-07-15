using System;
namespace area_of_the_circle
{
    class Program
    {
        static void Main(string[] args)
        {
            double pi = 3.14159265359;           
            double R = double.Parse(Console.ReadLine());
            Console.WriteLine(pi * R * R);

        }
    }
}
