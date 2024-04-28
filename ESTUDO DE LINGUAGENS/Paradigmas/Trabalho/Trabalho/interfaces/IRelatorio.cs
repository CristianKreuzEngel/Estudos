using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Trabalho.classes;
namespace Trabalho.interfaces{
    public interface IRelatorio{
        List<Produto>  Imprimir(List<Produto> produtos);
    }
}