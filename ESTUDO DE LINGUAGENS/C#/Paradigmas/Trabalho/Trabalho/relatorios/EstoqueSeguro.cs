using System;
using System.Collections.Generic;
using System.Linq;
using Trabalho.classes;
using Trabalho.interfaces;

namespace Trabalho.relatorios
{
    public class EstoqueSeguro : IRelatorio
    {
        public List<Produto> Imprimir(List<Produto> produtos)
        {
            return produtos.Where(p => p.Estoque < p.QtdVendas * 0.33).ToList();
           
        }
    }
}
