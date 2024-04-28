using System.IO;
using System.Collections.Generic;
using Api.Database.Models;
using Api.Database.Parser;

namespace Api.Database{
    public class ContextDB{

        private readonly string _dataset;
        private readonly List<Produto> _produtos;
        public ContextDB(){
             _dataset = File.ReadAllText("Dataset.csv");
             _produtos = ProdutoParser.ConverterList(_dataset);
        }
        public string Produtos => _produtos;

    }
}