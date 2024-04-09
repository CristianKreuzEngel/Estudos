using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Api.Database.Models;


namespace Api.Database.Parser
{
    public enum Header
    {
        Codigo = 0,
        Descricao = 1,
        Categoria = 2,
        Preco = 3,
        Estoque = 4,
        QtdVendas = 5
    }
    public class ProdutoParser
    {

        public static List<Produto> ConverterList(string arquivo)
        {
            List<Produto> produtos = new();

            var lines = arquivo.Split('\n').ToList();
            lines.Remove(lines.First());

            foreach (var line in lines)
            {
                Produto produto = new()
                {
                    Codigo = int.Parse(line.Split(';')[(int)Header.Codigo]),
                    Descricao = line.Split(';')[(int)Header.Descricao],
                    Categoria = line.Split(';')[(int)Header.Categoria],
                    Preco = Convert.ToDouble(line.Split(';')[(int)Header.Preco], CultureInfo.InvariantCulture),
                    Estoque = int.Parse(line.Split(';')[(int)Header.Estoque]),
                    QtdVendas = int.Parse(line.Split(';')[(int)Header.QtdVendas]),
                };
                produtos.Add(produto);

            }




            return produtos;
        }
    }
}