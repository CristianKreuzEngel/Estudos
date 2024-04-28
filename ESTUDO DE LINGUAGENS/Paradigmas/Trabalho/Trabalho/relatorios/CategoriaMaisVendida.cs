/*using System;
using System.Collections.Generic;
using System.Linq;
using Trabalho.classes;
using Trabalho.interfaces;

namespace Trabalho.relatorios
{
    public class CategoriaMaisvendida : IRelatorio
    {
        public List<Produto> Imprimir(List<Produto> produtos)
        {
            var vendasPorCategoria = produtos.GroupBy(p => p.Categoria).Select(g => new
            {
                Categoria = g.Key,
                TotalVendas = g.Sum(p => p.QtdVendas)
            });

            var aquelaCategoria = vendasPorCategoria.OrderByDescending(c => c.TotalVendas).FirstOrDefault();

        }
    }
}*/
