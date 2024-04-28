using System;
using System.Collections.Generic;
using System.Linq;

var list = new List<int>();

try
{
    int qtd = 0;
    while (qtd == 0)
    {
        Console.WriteLine("Insira o valor da quantidade:");
        qtd = int.Parse(Console.ReadLine());
        if (qtd == 0)
            throw new Exception("Quantidade não pode ser zerada! Insira um valor novamente");

        for (int i = 0; i < qtd; i++)
        {
            Console.WriteLine($"Insira o valor da lista na posição {i}");
            int aux = int.Parse(Console.ReadLine());
            list.Add(aux);

        }

        int maior = list.Max();
        int menor = list.Min();
        double media = list.Average();


        Console.WriteLine($"Maior número da lista {maior}\nMenor número da lista {menor}\nMédia da lista {media}");
        break;
    }
}
catch (FormatException e)
{
    Console.WriteLine($"Valor inválido: {e.Message}, Verifique e insira novamente");
    qtd = 0;
}
catch (Exception e)
{
    Console.WriteLine(e.Message);

}