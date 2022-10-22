//Nome: Hugo Shiniti Nishimoto
//RA: 32048416
import java.util.Scanner;


class Livro
  {
    String titulo ;
    String autor;
    Integer num_paginas;
    
    public Livro(String titulo, String autor, Integer num_paginas)
    {
      this.titulo = titulo;
      this.autor = autor;
      this.num_paginas = num_paginas;
    }
  
  }

class Triangulo
  {
    Integer lado_a;
    Integer lado_b;
    Integer lado_c;

    void setA(Integer lado_a)
    {
      this.lado_a = lado_a;
    }

    void setB(Integer lado_b)
    {
      this.lado_b = lado_b;
    }
    void setC(Integer lado_c)
    {
      this.lado_c = lado_c;
    }

    Integer sum()
    {
      Integer aux;
      aux = lado_a + lado_b + lado_c;

      return aux;
      
    }
  }

class Televisao
  {
    Integer canal = 0;
    Integer volume = 0;

    void mudar_canal(Integer canal)
    {
      this.canal = canal;
    }

    void aumentar_volume()
    {
      volume++;
    }

    void diminuir_volume()
    {
      volume--;
    }
    
  }

class Funcionario
  {
    String nome;
    Double salario = 1200.0;

    void aumentar_salario(Double percentual)
    {
      Double aux;
      Double aux2;
      
      aux = salario*percentual;

      aux2 = salario + aux;

      salario = aux2;

    }
    
  }

class Carro
  {
    Double quantidade_combustivel = 0.0;
 

    void adicionar_combustivel(Double qtd_litro)
    {
      quantidade_combustivel = qtd_litro;
    }

    Double obter_combustivel()
    {
      return quantidade_combustivel;
    }

    void andar(Double distancia)
    {
      Double aux = 0.0;
      Double result;

      aux = distancia * 0.20;

      result = quantidade_combustivel - aux;

      quantidade_combustivel = result;
     
    }

   
    
  }



class Main {
  public static void main(String[] args) 
  {
    //EX1
    Livro L1 = new Livro ("Lord of the Rings", "Tolkien", 1200);
    Livro L2 = new Livro ("The Wealth of Nations", "Smith", 528);
    System.out.println(L1.titulo);
    System.out.println(L1.autor);
    System.out.println(L1.num_paginas);

    System.out.println("---------------");
    
    System.out.println(L2.titulo);
    System.out.println(L2.autor);
    System.out.println(L2.num_paginas);


    //EX2
    Scanner scanner = new Scanner(System.in);

    System.out.println("Digite o primeiro lado:");
    Integer i1 = scanner.nextInt();
    //System.out.printf("%d",i1);

    System.out.println("Digite o primeiro lado:");
    Integer i2 = scanner.nextInt();
    //System.out.printf("%d",i2);

    System.out.println("Digite o primeiro lado:");
    Integer i3 = scanner.nextInt();
    //System.out.printf("%d",i3);

    Triangulo triangulo = new Triangulo();

    triangulo.setA(i1);
    triangulo.setB(i2);
    triangulo.setC(i3);

    System.out.printf("O Perímetro do triângulo é: %d", triangulo.sum());

    System.out.printf("\n");
    

    //EX3
    Televisao tv = new Televisao();
    System.out.printf("Canal atual: %d\n", tv.canal);
    System.out.println("Digite o número do canal desejado:");
    Integer c = scanner.nextInt();

    tv.mudar_canal(c);

    System.out.printf("Novo canal: %d\n", tv.canal);

    System.out.printf("Volume atual: %d\n", tv.volume);

    tv.aumentar_volume();

    System.out.printf("Novo volume: %d\n", tv.volume);


    //EX4
    Funcionario funcionario = new Funcionario();

    System.out.println("Digite o percentual do aumento salarial:");
    Double s = scanner.nextDouble();

    funcionario.aumentar_salario(s);

    System.out.printf("Salário com aumento: %f\n", funcionario.salario);

    //EX5

    Carro carro = new Carro();

    System.out.println("Digite o quanto de combustivel deseja:");
    Double co = scanner.nextDouble();

    carro.adicionar_combustivel(co);

    System.out.printf("Quantidade atual de combustivel: %f\n", carro.obter_combustivel());

    System.out.println("Digite o quanto percorreu:");
    Double km = scanner.nextDouble();

    carro.andar(km);

    System.out.printf("Quantidade atual de combustivel: %f\n", carro.obter_combustivel());

    scanner.close();
    

    
    
  }
}
