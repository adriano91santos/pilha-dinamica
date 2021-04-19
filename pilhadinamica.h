//Pilha Dinamica = Dynamic Stack

typedef int TipoItem;

struct No // Node
{
    TipoItem valor;
    No* proximo;

};

class pilhadinamica{
    private:
    No* NoTopo;

    public:
    pilhadinamica(); // Construtor
    ~pilhadinamica(); // Destrutor
    bool estavazio(); // isempty
    bool estacheio(); // isfull
    void inserir(TipoItem item); // push
    TipoItem remover(); // pop
    void imprimir(); // print
};