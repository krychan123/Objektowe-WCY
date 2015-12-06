using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Zad2Lab9;

namespace Zad2_Lab9
{
    class Program
    {
        static void Main(string[] args)
        {
            Szablon<int> C = new Szablon<int>();
            C.wyswietl<int>(69);



            Szablon<string> D = new Szablon<string>();
            D.wyswietl<string>("Inny typ danych");



            Console.Read();

        }
    }
}
