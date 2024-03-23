using System;


internal class Program
{
    private static void Main(string[] args)
    {
        int A = 0, B = 0, C = 0, D, R, S;

        while (true)
        {
            try
            {
                if (A == 0)
                {
                    Console.WriteLine("Por favor insira o valor A: ");
                    A = int.Parse(Console.ReadLine());
                }
                if (B == 0)
                {
                    Console.WriteLine("Por favor insira o valor B: ");
                    B = int.Parse(Console.ReadLine());
                }
                if (C == 0)
                {
                    Console.WriteLine("Por favor insira o valor C: ");
                    C = int.Parse(Console.ReadLine());
                }

                R = (A + B) * (A + B);
                S = (B + C) * (B + C);

                D = (R + S) / 2;
                Console.WriteLine($"Resultado: {D}");
                break;
            }
            catch (FormatException e)
            {
                Console.WriteLine($"Valor inválido: {e.Message}, Verifique e insira novamente");
                if (e.Message.Contains("A"))
                    A = 0;
                if (e.Message.Contains("B"))
                    B = 0;
                if (e.Message.Contains("C"))
                    C = 0;
            }
        }
    }
}