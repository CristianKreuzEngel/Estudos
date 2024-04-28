using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace Api.Database.Models{
    public class Produto{
        
        public int Codigo {get; set;}

        public string Descricao {get; set;}

        public string Categoria {get; set;}

        public double Preco {get; set;}

        public int Estoque {get; set;}

        public int QtdVendas {get; set;}
    }
}