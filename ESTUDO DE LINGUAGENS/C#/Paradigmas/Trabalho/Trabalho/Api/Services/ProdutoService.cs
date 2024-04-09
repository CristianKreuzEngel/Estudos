using Api.Database;
using Api.Database.Models;

namespace Api.Services
{
    x

    public class ProdutoService
    {
        private readonly ContextDB _contextDB;

        public ProdutoService(ContextDB contextDB)
        {
            _contextDB = contextDB;
        }

        public List<Produto> GetAll(){
            return _contextDB.Produtos;
        }

        public Produto GetById(int cod) {
            try{    
                return _contextDB.Produtos.Where(p=>p.Codigo == cod).First();
            }catch{
                throw new DllNotFoundException();
            }
        }
    }

}