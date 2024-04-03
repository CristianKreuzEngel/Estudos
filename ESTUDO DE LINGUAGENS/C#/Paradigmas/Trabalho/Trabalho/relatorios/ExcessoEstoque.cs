using System;
using System.Collections.Generic;
using System.Linq;
using Trabalho.classes;
using Trabalho.interfaces;

namespace Trabalho.relatorios
{
    public class ExcessoEstoque : IRelatorio
    {
        public List<Produto> Imprimir(List<Produto> produtos)
        {   
           return produtos.Where(p => p.Estoque >= p.QtdVendas * 3).ToList();
            
            
        }
    }
}
