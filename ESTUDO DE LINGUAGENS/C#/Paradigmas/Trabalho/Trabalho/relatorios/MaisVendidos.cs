using System;
using System.Collections.Generic;
using System.Linq;
using Trabalho.classes;
using Trabalho.interfaces;

namespace Trabalho.relatorios
{
    public class MaisVendidos : IRelatorio
    {
        public List<Produto> Imprimir(List<Produto> produtos)
        {
            var produtosOrdenado = produtos.OrderByDescending(p => p.QtdVendas).ToList();

            return produtosOrdenado.Take(5).ToList();
        }
    }
}
