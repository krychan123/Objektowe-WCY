using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Zad2Lab9
{
    public class Szablon<przekazane>    //klasa generyczna
    {
        public przekazane argument;


        public void wyswietl<przekazane>(przekazane argument)   //metoda generyczna
        {
            Console.WriteLine(argument);
        }

    }
}
