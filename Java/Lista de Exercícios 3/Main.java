//Nome: Hugo Shiniti Nishimoto
//RA: 32048416

class Pessoa
  {
    Integer identificador;
    String nome;

    public Pessoa(Integer identificador, String nome)
    {
      this.identificador = identificador;
      this.nome = nome;
    }
  }

class PessoaJur extends Pessoa
  {
    String CNPJ;

    public PessoaJur(Integer identificador, String nome, String CNPJ)
    {
      super(identificador, nome);
      this.CNPJ = CNPJ;
    }
  }

class PessoaFis extends Pessoa
  {
    String RG;
    String CPF;

     public PessoaFis(Integer identificador, String nome,String RG, String CPF)
    {
      super(identificador, nome);
      this.RG = RG;
      this.CPF = CPF;
    }
  }

class Animal
  {
    String nome;
    String cor;
    Integer numeroPatas;

    public Animal(String nome, String cor, Integer numeroPatas)
      {
        this.nome = nome;
        this.cor = cor;
        this.numeroPatas = numeroPatas;
      
      }

    void exibirdados()
    {
      System.out.printf("Nome animal: %s\n",this.nome);
      System.out.printf("Cor animal: %s\n",this.cor);
      System.out.printf("Número de patas: %d\n",this.numeroPatas);
    }
  }

class Cachorro extends Animal
  {
    String raca;


    public Cachorro(String nome, String cor, Integer numeroPatas, String raca)
    {
      super(nome, cor , numeroPatas);
      this.raca = raca;
    }

    void exibirdados()
    {
      System.out.printf("Nome cachorro: %s\n",this.nome);
      System.out.printf("Cor cachorro: %s\n",this.cor);
      System.out.printf("Número de patas: %d\n",this.numeroPatas);
      System.out.printf("Raça cachorro: %s\n",this.raca);
    }
  }

class Imovel
  {
    String endereco;
    Double preco;

    public Imovel(String endereco, Double preco)
    {
      this.endereco = endereco;
      this.preco = preco;
    }
  }

class ImovelNovo extends Imovel
  {
    Double adicional;

    public ImovelNovo(String endereco, Double preco, Double adicional)
    {
      super(endereco, preco);
      this.adicional = adicional;
    }

    Double calcular_preco()
    {
      Double aux;

      aux = preco + adicional;

      return aux;
    }
  }

class ImovelVelho extends Imovel
  {
    Double desconto;
    
    public ImovelVelho(String endereco, Double preco, Double desconto)
    {
      super(endereco, preco);
      this.desconto = desconto;
    }

     Double calcular_preco()
    {
      Double aux;

      aux = preco - desconto;

      return aux;
    }
  }

class Motor
  {
    Integer cilindrada;
    Integer potencia;

    public Motor(Integer cilindrada, Integer potencia)
    {
      this.cilindrada = cilindrada;
      this.potencia = potencia;
    }

    void exibir_dados()
    {
      System.out.printf("Cilindrada motor: %d\n", this.cilindrada);
      System.out.printf("Potência motor: %d\n", this.potencia);
    }
  }

class Veiculo
  {
    Integer ano;
    Integer preco;
    Motor motor;

    public Veiculo(Integer ano, Integer preco, Motor m)
    {
      this.ano = ano;
      this.preco = preco;
      this.motor = m;
    }

    void exibir_dados()
    {
      System.out.printf("Ano veículo: %d\n", this.ano);
      System.out.printf("Preço veículo: %d\n", this.preco);
      motor.exibir_dados();
    }
  }

class Carro extends Veiculo
  {
    String cor;
    String modelo;
    //Motor motor;

    public Carro(Integer ano, Integer preco, Motor m, String cor, String modelo)
    {
      super(ano, preco, m);
      this.cor = cor;
      this.modelo = modelo;
    }

    void exibir_dados()
    {
      System.out.printf("Ano carro: %d\n", this.ano);
      System.out.printf("Preço carro: %d\n", this.preco);
      System.out.printf("Cor carro: %s\n", this.cor);
      System.out.printf("Modelo carro: %s\n", this.modelo);
      motor.exibir_dados();
    }
  }

class Caminhao extends Veiculo
  {
    Float comprimento;
    //Motor motor;

    public Caminhao(Integer ano, Integer preco,Motor m,Float comprimento)
    {
      super(ano, preco, m);
      this.comprimento = comprimento;
    }

    void exibir_dados()
    {
      System.out.printf("Ano caminhão: %d\n", this.ano);
      System.out.printf("Preço caminhão: %d\n", this.preco);
      System.out.printf("Comprimento caminhão: %.2f\n", this.comprimento);
      motor.exibir_dados();
    }
  
  }



class Main {
  public static void main(String[] args) {


    //EX1
    Pessoa p1 = new Pessoa(1, "Julio");
    PessoaJur pj1 = new PessoaJur(2, "Andre", "11111111111111111");
    PessoaFis pf1 = new PessoaFis(3, "Manoel", "32143214234", "2345325235");

    System.out.println("EX1:");
    System.out.printf("Id: %d\n", p1.identificador); 
    System.out.println("Nome: " + p1.nome);
    System.out.printf("Id: %d\n", pj1.identificador); 
    System.out.println("Nome: " + pj1.nome); 
    System.out.println("CNPJ: " + pj1.CNPJ); 
    System.out.printf("Id: %d\n", pf1.identificador); 
    System.out.println("Nome: " + pf1.nome); 
    System.out.println("RG: " + pf1.RG); 
    System.out.println("CPF: " + pf1.CPF); 

    System.out.println("");


    //EX2
    Animal animal = new Animal("bob", "marrom", 4);
    Cachorro cachorro = new Cachorro("bob", "marrom", 4, "maltes");

    System.out.println("EX2:");
    System.out.println("Dados animal:");
    animal.exibirdados();

    System.out.println("Dados cachorro:");
    cachorro.exibirdados();

    System.out.println("");

    //EX3
    System.out.println("EX3:");
    Imovel imovel = new Imovel("SP", 1500000.0);
    ImovelNovo imovelnovo = new ImovelNovo("SP", 1500000.0, 75000.0);
    ImovelVelho imovelvelho = new ImovelVelho("SP", 2500000.0, 75000.0);

    System.out.printf("Endereço imóvel: %s\n", imovel.endereco); 
    System.out.printf("Preço: %f\n", imovel.preco); 
    System.out.printf("Endereço imóvel novo: %s\n", imovelnovo.endereco); 
    System.out.printf("Preço: %f\n", imovelnovo.preco); 
    System.out.printf("Preço atual: %f\n", imovelnovo.calcular_preco()); 
    System.out.printf("Endereço imóvel velho: %s\n", imovelvelho.endereco); 
    System.out.printf("Preço: %f\n", imovelvelho.preco); 
    System.out.printf("Preço atual: %f\n", imovelvelho.calcular_preco()); 

    System.out.println("");

    //EX4
    System.out.println("EX4:");
    Motor motor1 = new Motor(1000, 500);
    Motor motor2 = new Motor(8000, 900);
    Carro carro = new Carro(2010, 20000, motor1, "branca", "gol");
    Caminhao caminhao = new Caminhao(2015, 80000, motor2, 10f);
    carro.exibir_dados(); 
    caminhao.exibir_dados(); 
    
  
  }
}
