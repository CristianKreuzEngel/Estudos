using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Trabalho.classes;

int menu()
{
    int op;
    Console.WriteLine("\n\n---============= BEM VINDO ==============---");
    Console.WriteLine("---=== Selecione uma das opções =========---");
    Console.WriteLine("---== 1 - Produtos mais vendidos ========---");
    Console.WriteLine("---== 2 - Produtos com mais estoque =====---");
    Console.WriteLine("---== 3 - Categoria mais vendida ========---");
    Console.WriteLine("---== 4 - Produtos menos vendidos =======---");
    Console.WriteLine("---== 5 - Estoque de Segurança ==========---");
    Console.WriteLine("---== 6 - Excesso de estoque ============---");
    Console.WriteLine("---== 7 - Média de preço por categoria ==---");
    Console.WriteLine("---============= 0 - SAIR ===============---\n\n");
    op = int.Parse(Console.ReadLine());
    return op;
}

//Funções e procedimentos 
//Case 1
List<Produto> maisVendidos(List<Produto> produtos)
{
    var produtosOrdenado = produtos.OrderByDescending(p => p.QtdVendas).ToList();

    var topCincoMaisVendidos = produtosOrdenado.Take(5).ToList();

    return topCincoMaisVendidos;
}
// Case 2
List<Produto> maisEstoque(List<Produto> produtos)
{
    var produtosOrdenado = produtos.OrderByDescending(p => p.Estoque).ToList();

    var topTres = produtosOrdenado.Take(3).ToList();

    return topTres;
}
// Case 3
String CategoriaMaisVendida(List<Produto> categoria)
{
    var vendasPorCategoria = categoria.GroupBy(p => p.Categoria).Select(g => new
    {
        Categoria = g.Key,
        TotalVendas = g.Sum(p => p.QtdVendas)
    });

    var aquelaCategoria = vendasPorCategoria.OrderByDescending(c => c.TotalVendas).FirstOrDefault();

    if (aquelaCategoria != null)
        return aquelaCategoria.Categoria;
    else return "Nenhuma Categoria encontrada";
}
// Case 4
List<Produto> menosVendidos(List<Produto> produtos)
{
    var produtosOrdenado = produtos.OrderBy(p => p.QtdVendas).ToList();

    var topCincoMenosVendidos = produtosOrdenado.Take(5).ToList();

    return topCincoMenosVendidos;
}
//Case 5
List<Produto> estoqueSeguro(List<Produto> produtos)
{
    var estoqueSeg = produtos.Where(p => p.Estoque < p.QtdVendas * 0.33).ToList();
    return estoqueSeg;
}
//Case 6
List<Produto> excessoEstoque(List<Produto> produtos)
{
    var produtoComEstoqueMais = produtos.Where(p => p.Estoque >= p.QtdVendas * 3).ToList();
    return produtoComEstoqueMais;
}
//Case 7
Dictionary<string, double> CalcularMediaCategoria(List<Produto> produtos)
{
    var precoMedioPorCategoria = new Dictionary<string, double>();
    var produtosPorCategoria = produtos.GroupBy(p => p.Categoria);
    foreach (var grupoCategoria in produtosPorCategoria)
    {
        var categoria = grupoCategoria.Key;
        var precoMedio = grupoCategoria.Average(p => p.Preco);
        precoMedioPorCategoria.Add(categoria, precoMedio);
    }

    return precoMedioPorCategoria;
}

//caso for linux
var dataset = File.ReadAllText("./Dataset.csv");

//caso for windows
//var dataset = File.ReadAllText("C:\\Repositorios\\Estudos\\ESTUDO DE LINGUAGENS\\C#\\Paradigmas\\Trabalho\\Trabalho\\Dataset.csv");

int op;

var list = ProdutoParser.ConverterList(dataset);
do
{
    op = menu();
    switch (op)
    {
        case 1:
            var vendas = maisVendidos(list);
            Console.WriteLine("O top 5 produtos mais vendidos são:\n");
            foreach (var produto in vendas)
            {
                Console.WriteLine(" | " + produto.Codigo + " | " + produto.Descricao + " | ");
            }
            break;
        case 2:
            var estoque = maisEstoque(list);
            Console.WriteLine("O top 3 produtos mais estoque são:\n");
            foreach (var produto in estoque)
            {
                Console.WriteLine(" | " + produto.Codigo + " | " + produto.Descricao + " | " + produto.Estoque + " | ");
            }
            break;
        case 3:
            var catMaisVendida = CategoriaMaisVendida(list);
            Console.WriteLine($"A categoria mais vendida é {catMaisVendida}");
            break;
        case 4:
            var MenosVendas = menosVendidos(list);
            Console.WriteLine("O top 5 produtos menos vendidos são:\n");
            foreach (var produto in MenosVendas)
            {
                Console.WriteLine(" | " + produto.Codigo + " | " + produto.Descricao + " | " + produto.QtdVendas + " | ");
            }
            break;

        case 5:
            var estoqueSeg = estoqueSeguro(list);
            Console.WriteLine("Os produtos com o estoque seguro são:\n");
            foreach (var produto in estoqueSeg)
            {
                Console.WriteLine(" | " + produto.Codigo + " | " + produto.Descricao + " | " + produto.Estoque + " | ");
            }
            break;

        case 6:
            var estoqueMais = excessoEstoque(list);
            Console.WriteLine("Os produtos com excesso de estoque são:\n");
            foreach (var produto in estoqueMais)
            {
                Console.WriteLine(" | " + produto.Codigo + " | " + produto.Descricao + " | " + produto.Estoque + " | ");
            }
            break;

        case 7:
            var medioValor = CalcularMediaCategoria(list);
            foreach (var produto in medioValor)
            {
                Console.WriteLine($"Categoria: {produto.Key}, Valor Médio: {produto.Value}");
            }
            break;

        default:
            Console.WriteLine("Opção inválida");
            break;
    }

} while (op != 0);
