using System;
using System.IO;
using Trabalho.classes;



var dataset = File.ReadAllText("./Dataset.csv");

var list = ProdutoParser.ConverterList(dataset);


Console.WriteLine(list);
Console.Read();