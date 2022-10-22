//Nome: Hugo Shiniti Nishimoto
//RA: 32048416
import java.util.Scanner;
import java.util.ArrayList;

class Carro
  {
    String marca;
    String modelo;
    String placa;
    Integer ano;

    public Carro(String marca, String modelo, String placa, Integer ano)
    {
      this.marca = marca;
      this.modelo = modelo;
      this.placa = placa;
      this.ano = ano;
    }
    void printC()
    {
      System.out.println("Dados do carro:");
      System.out.printf("Marca: %s", this.marca);
      System.out.println("");
      System.out.printf("Modelo: %s", this.modelo);
      System.out.println("");
      System.out.printf("Placa: %s", this.placa);
      System.out.println("");
      System.out.printf("Placa: %d", this.ano);
      System.out.println("");
    }
    
  }

class Pessoa
  {
    String nome;
    Integer idade;
    Carro carro;

    void compraCarro(Carro carro)
    {
      this.carro = carro;
      
    }

    public Pessoa(String nome, Integer idade)
    {
      this.nome = nome;
      this.idade = idade;
      //this.carro = car;
    }

    void printP()
    {
      System.out.println("Dados do cliente:");
      System.out.printf("Nome: %s", this.nome);
      System.out.println("");
      System.out.printf("Idade %d:", this.idade);
      System.out.println("");
      carro.printC();
    }

  }

class Produto
  {
    String nome;
    Float preço;
    Integer quantidade;

    public Produto(String nome, Float preço, Integer quantidade)
    {
      this.nome = nome;
      this.preço = preço;
      this.quantidade = quantidade;
    }


  }


class Pedido
  {

    ArrayList <Produto> produto = new ArrayList<Produto>();
  

    void AdicionarProduto(Produto pr)
    {
      this.produto.add(pr);
    }

    Float CalcularValorTotal()
    {
      Float sum = 0f;

      Integer aux = 0;
      Float aux2 = 0f;

      
      for(Produto pr: this.produto)
      {
        aux2 += pr.preço;
        aux += pr.quantidade;
      }

      sum = aux * aux2;
      
      return sum; 
    }

  }

class Carro2
  {
    boolean ligado;
    Pneu pneu1, pneu2, pneu3, pneu4;

    public Carro2(Pneu pneu1, Pneu pneu2, Pneu pneu3, Pneu pneu4)
    {
      this.pneu1 = pneu1;
      this.pneu2 = pneu2;
      this.pneu3 = pneu3;
      this.pneu4 = pneu4;
    }

    void ligar()
    {
      this.ligado = true;
    }

    void desligar()
    {
      this.ligado = false;
    }

    void verificarPneu()
    {
      if (ligado == true)
      {
        System.out.println("Carro ligado");

        System.out.printf("pneu n1 pressão: %d\n", pneu1.pressao);
        System.out.printf("pneu n2 pressão: %d\n", pneu2.pressao);
        System.out.printf("pneu n3 pressão: %d\n", pneu3.pressao);
        System.out.printf("pneu n4 pressão: %d\n", pneu4.pressao);
      }

      else
      {
        System.out.println("Carro desligado");
      }
    }
  }


class Pneu
  {
    Integer pressao;

    public Pneu(Integer pressao)
    {
      this.pressao = pressao;
    }


    void furar()
    {
      this.pressao = 0;
    }
  }

class Paciente
  {
    String nome;
    Integer idade;
    String cpf;

    public Paciente(String nome, Integer idade, String cpf)
    {
      this.nome = nome;
      this.idade = idade;
      this.cpf = cpf;
    }
    
  }

class Medico
  {
    String nome;
    String crm;
    String esp;

    public Medico(String nome, String crm, String esp)
    {
      this.nome = nome;
      this.crm = crm;
      this.esp = esp;
    }

  }

class Exame
  {
    Medico medico;
    Paciente paciente;
    String desc;
    String resultado;

    public Exame(Medico medico, Paciente paciente, String desc, String resultado)
    {
      this.medico = medico;
      this.paciente = paciente;
      this.desc = desc;
      this.resultado = resultado;
    }


    void impExame()
    {
 
      System.out.printf("Nome do paciente:%s\n", paciente.nome);
      System.out.printf("Idade do paciente:%d\n", paciente.idade);
      System.out.printf("CPF do paciente:%s\n", paciente.cpf);

      System.out.printf("Nome do médico:%s\n", medico.nome);
      System.out.printf("CRM do médico:%s\n", medico.crm);
      System.out.printf("Especialização do médico:%s\n", medico.esp);

      System.out.printf("Descrição do exame:%s\n", this.desc);
      System.out.printf("Resultado do exame:%s\n", this.resultado);
      
    }
  }

class Moeda
  {
    Float valor = 0f;

    public Moeda(Float valor)
    {
      this.valor = valor;
    }
  }

class Cofre
  {
    ArrayList <Moeda> moeda = new ArrayList<Moeda>();

    void adicionar(Moeda m)
    {
      this.moeda.add(m) ;
    }


    Float calcularTotal()
    {
      Float sum = 0f;

      for (Moeda m: this.moeda)
        {
          sum += m.valor;
        }

      return sum;
    }
  }





class Main {
  public static void main(String[] args) 
  {
    //EX1
    Scanner scanner = new Scanner(System.in);

    Pessoa pessoa = new Pessoa("John", 35);

    Carro carro = new Carro ("Fiat", "Uno", "AAA - 1111", 2016);

    pessoa.compraCarro(carro);

    System.out.println("Meu nome:" + pessoa.nome);
    System.out.println("Modelo do meu carro:" + pessoa.carro.modelo);
    System.out.println("Placa do meu carro:" + pessoa.carro.placa);

    pessoa.printP();

    //EX2

    System.out.println("\n");
    
    Produto produto = new Produto("Café", 11.30f, 3);
    Produto produto2 = new Produto("Cereal", 13.30f, 4);
    Produto produto3 = new Produto("Chocolate", 15.30f, 5);


    Pedido pedido = new Pedido();

    pedido.AdicionarProduto(produto);
    pedido.AdicionarProduto(produto2);
    pedido.AdicionarProduto(produto3);


    System.out.printf("Preço total do pedido é: %.2f\n", pedido.CalcularValorTotal());

    //EX3

    System.out.println("\n");
    
    Pneu p1 = new Pneu(35);
    Pneu p2 = new Pneu(37);
    Pneu p3 = new Pneu(39);
    Pneu p4 = new Pneu(45);

    Carro2 carro2 = new Carro2(p1, p2 ,p3 ,p4);


    carro2.ligar();
    p1.furar();
    carro2.verificarPneu();

    carro2.desligar();
    carro2.verificarPneu();


    //EX4

    System.out.println("\n");
    
    Paciente paciente = new Paciente("João", 25, "412534-89");
    Medico medico = new Medico("Alberto", "455545", "Cliníco-Geral");

    Exame exame = new Exame(medico, paciente, "SARS Covid-19", "negativo");

    exame.impExame();


    //EX5

    System.out.println("\n");
    
    Moeda moeda1 = new Moeda(35f);
    Moeda moeda2 = new Moeda(38f);

    Cofre cofre = new Cofre();

    cofre.adicionar(moeda1);
    cofre.adicionar(moeda2);

    System.out.printf("Valor total de moedas no cofre:%.2f", cofre.calcularTotal());


    scanner.close();

    
    
  }
} 
