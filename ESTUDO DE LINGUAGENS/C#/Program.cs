﻿using System;
using System.Globalization;

namespace Teste{
    internal class Program{
        static void Main(String[] args){
            int valor;
            valor = int.Parse(Console.ReadLine());
            if(valor%2 == 0){
                Console.WriteLine(valor+2);
            }else{
                Console.WriteLine(valor+1);
            }
            
        } 
    }
}