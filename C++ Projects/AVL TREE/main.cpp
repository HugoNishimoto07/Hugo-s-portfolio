// mainAVL.cpp
//Nome: Hugo Shiniti Nishimoto
//RA: 32048416
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "AVL.h"
#include <iomanip>


struct tabela
{
  public:
  tabela(std::string nome,std::string serving, std::string caloria, std::string caloriaDV, std::string gordura, std::string gorduraDV, std::string sodio, std::string sodioDV, std::string potassio, std::string potassioDV, std::string carbohidrato, std::string carbohidratoDV, std::string fibra, std::string fibraDV, std::string acucar, std::string proteina, std::string vitaminaA, std::string vitaminaC, std::string calcio, std::string ferro, std::string gordurasatDV, std::string gordurasat, std::string choleDV, std::string chole, std::string cholesterol,std::string food_type)
{
    Nome = nome;
    Serving = serving;
    Caloria = caloria;
    CaloriaDV = caloriaDV;
    Gordura = gordura;
    GorduraDV = gorduraDV;
    Sodio = sodio;
    Potassio = potassio;
    PotassioDV = potassioDV;
    Carbohidrato = carbohidrato;
    CarbohidratoDV = carbohidratoDV;
    Fibra = fibra;
    FibraDV = fibraDV;
    Acucar = acucar;
    Proteina = proteina;
    VitaminaA = vitaminaA;
    VitaminaC = vitaminaC;
    Calcio = calcio;
    Ferro = ferro;
    GordurasatDV = gordurasatDV;
    Gordurasat = gordurasat;
    CholeDV = choleDV;
    Chole = chole;
    Cholesterol = cholesterol;
    Food_type = food_type;
    
}

  void display()
  {
    std::cout << Nome ;
    std::cout << Serving ;
    std::cout << Caloria ;
    std::cout << CaloriaDV ;
    std::cout << Gordura ;
    std::cout << GorduraDV ;
    std::cout << Sodio ;
    std::cout << Potassio ;
    std::cout << PotassioDV ;
    std::cout << Carbohidrato ;
    std::cout << CarbohidratoDV ;
    std::cout << Fibra ;
    std::cout << FibraDV ;
    std::cout << Acucar ;
    std::cout << Proteina ;
    std::cout << VitaminaA ;
    std::cout << VitaminaC ;
    std::cout << Calcio ;
    std::cout << Ferro ;
    std::cout << GordurasatDV ;
    std::cout << Gordurasat ;
    std::cout << CholeDV ;
    std::cout << Chole ;
    std::cout << Cholesterol ;
    std::cout << Food_type ;

    std::cout << std::endl;
  }

  int ID;
  std::string Nome;
  std::string Serving;
  std::string Caloria;
  std::string CaloriaDV;
  std::string Gordura;
  std::string GorduraDV;
  std::string Sodio;
  std::string Potassio;
  std::string PotassioDV;
  std::string Carbohidrato;
  std::string CarbohidratoDV;
  std::string Fibra;
  std::string FibraDV;
  std::string Acucar;
  std::string Proteina;
  std::string VitaminaA;
  std::string VitaminaC;
  std::string Calcio;
  std::string Ferro;
  std::string GordurasatDV;
  std::string Gordurasat;
  std::string CholeDV;
  std::string Chole;
  std::string Cholesterol;
  std::string Food_type;

};

void display(std::vector<tabela>&array)
{
  for (auto tab:array)
    {
      tab.display();
    }
}



void Search(AVL* avl)
{
	std::string name;
	std::cout << "Search product name: ";
	std::cin >> name;
	NodeAVL* node = avl->Search(name);
	if (node)
		std::cout << "Node found:\n" << node->ToString();
	else
		std::cout << "*** ERROR! Couldn't find node!\n";
}

void CalcCaloria(AVL* avl)
{
  int n;
  float soma = 0.0;
  std::cout << "Digite qual é o total de alimentos que irá adicionar:" ;
  std::cin >> n;
  
  while(n>0)
    {
      std::string name;
      std::cout << "Enter product name:";
      std::cin >> name;
      NodeAVL* node = avl->CalcCaloria(name);
      if (node)
		    std::cout << "Node found:\n" << node->GetCaloria() << " calorias" << std::endl;
	    else
		    std::cout << "*** ERROR! Couldn't find node!\n";

      soma = soma + node->GetCaloria();
      n--;
    }

  std::cout << "O total de calorias consumidas é:" << soma;

}


void CalcVitamina(AVL* avl)
{
  int n;
  float soma = 0.0;
  float somaA = 0.0;
  std::cout << "Digite qual é o total de alimentos que irá adicionar:" ;
  std::cin >> n;
  
  while(n>0)
    {
      std::string name;
      std::cout << "Enter product name:";
      std::cin >> name;
      NodeAVL* node = avl->CalcVitamina(name);
      if (node)
		    std::cout << "Node found:\n" << node->GetVitaminaA() << " vitaminas(A)" << " e " <<node->GetVitaminaC() <<
           " vitaminas(C)" << std::endl;
	    else
		    std::cout << "*** ERROR! Couldn't find node!\n";

      soma = soma + node->GetVitaminaA();
      somaA = somaA + node->GetVitaminaC();
      n--;
    }

  std::cout << "O total de VitaminasA consumidas é:" << soma << std::endl;
  std::cout << "O total de VitaminasC consumidas é:" << somaA << std::endl;

}


void CalcProteina(AVL* avl)
{
  int n;
  float soma = 0.0;
  std::cout << "Digite qual é o total de alimentos que irá adicionar:" ;
  std::cin >> n;
  
  while(n>0)
    {
      std::string name;
      std::cout << "Enter product name:";
      std::cin >> name;
      NodeAVL* node = avl->CalcProteina(name);
      if (node)
		    std::cout << "Node found:\n" << node->GetProteina() << " proteinas" << std::endl;
	    else
		    std::cout << "*** ERROR! Couldn't find node!\n";

      soma = soma + node->GetProteina();
      n--;
    }

  std::cout << "O total de Proteinas consumidas é:" << soma;

}

void CalcOthers(AVL* avl)
{
  int n;
  float soma = 0.0;
  float somaA = 0.0;
  std::cout << "Digite qual é o total de alimentos que irá adicionar:" ;
  std::cin >> n;
  
  while(n>0)
    {
      std::string name;
      std::cout << "Enter product name:";
      std::cin >> name;
      NodeAVL* node = avl->CalcOthers(name);
      if (node)
		    std::cout << "Node found:\n" << node->GetSodio() << " sódio" << 
          " e " << node->GetPotassio()<< " potássio" <<std::endl;
	    else
		    std::cout << "*** ERROR! Couldn't find node!\n";

      soma = soma + node->GetSodio();
      somaA = somaA + node->GetPotassio();
      n--;
    }

  std::cout << "O total de Sódio consumido é:" << soma << std::endl;
  std::cout << "O total de Potássio consumido é:" << somaA << std::endl;

}

void Table(AVL* avl)
{
  int n;
  float soma = 0.0;
  float somaA = 0.0;
  float somaB = 0.0;
  float somaC = 0.0;
  float somaD = 0.0;
  float somaE = 0.0;
  std::cout << "Digite qual é o total de alimentos que irá adicionar:" ;
  std::cin >> n;

  int size = n;
  
  std::string a0[size];
  float a1[size];
  float a2[size];
  float a3[size];
  float a4[size];
  float a5[size];
  float a6[size];

  int i = 0;
  while(n>0)
    {
      std::string name;
      std::cout << "Enter product name:";
      std::cin >> name;
      NodeAVL* node = avl->CalcOthers(name);
      if (node)
		    std::cout << "Node found:\n" << node->GetNome() <<std::endl;
	    else
		    std::cout << "*** ERROR! Couldn't find node!\n";

      soma = soma + node->GetSodio();
      somaA = somaA + node->GetPotassio();
      somaB = somaB + node->GetCaloria();
      somaC = somaC + node->GetProteina();
      somaD = somaD + node->GetVitaminaA();
      somaE = somaE + node->GetVitaminaC();
      
      a0[i] = node->GetNome();
      a1[i] = node->GetSodio();
      a2[i] = node->GetPotassio();
      a3[i] = node->GetCaloria();
      a4[i] = node->GetProteina();
      a5[i] = node->GetVitaminaA();
      a6[i] = node->GetVitaminaC();
      n--;
      i++;

      std::cout << std::endl;
    }
  std::cout << "Tabela Síntese Nutricional:" << std::endl;
  std::cout << "_______________________________________________________________________"<< std::endl;
    
  std::cout
        << std::left
        << std::setw(10)
        << "|Nome"
        << std::left
        << std::setw(10)
        << "|Potássio|"
        << std::left
        << std::setw(10)
        << "|Sódio|"
        << std::left
        << std::setw(10)
        << "|Caloria|"
        << std::left
        << std::setw(10)
        << "|Proteína|"
        << std::left
        << std::setw(10)
        << "|VitaminaA|"
        << std::left
        << std::setw(10)
        << "|VitaminaC|"
        << std::endl;

  for (int j = 0; j < size; j++)
    {
        std::cout
            << std::left
            << std::setw(10)  
            << a0[j]
            << std::left
            << std::setw(10) 
            << a1[j]
            << std::left
            << std::setw(10)
            << a2[j]
            << std::left
            << std::setw(10)
            << a3[j]
            << std::left
            << std::setw(10)
            << a4[j]
            << std::left
            << std::setw(10)
            << a5[j]
            << std::left
            << std::setw(10)
            << a6[j]
            << std::endl;
    }
  std::cout
        << std::left
        << std::setw(10)
        << "|Total:"
        << std::left
        << std::setw(10) 
        << soma
        << std::left
        << std::setw(10)
        << somaA
        << std::left
        << std::setw(10)
        << somaB
         << std::left
        << std::setw(10)
        << somaC
         << std::left
        << std::setw(10)
        << somaD
         << std::left
        << std::setw(10)
        << somaE
        << std::endl;
  std::cout << "_______________________________________________________________________";
  
}

void TraverseInOrder(AVL* avl)
{
	std::cout << avl->TraverseInOrder() << '\n';
}

void TraversePreOrder(AVL* avl)
{
	std::cout << avl->TraversePreOrder() << '\n';
}

void TraversePostOrder(AVL* avl)
{
	std::cout << avl->TraversePostOrder() << '\n';
}



int main()
{
  std::ifstream file;
  file.open("Tabela.csv");
  std::string line = "";
  std::vector<tabela> array;
  
  AVL* avl = new AVL();

  while(std::getline(file, line))
    {
      std::stringstream inputstring(line);

      int id;
      std::string nome;
      std::string serving;
      std::string caloria;
      std::string caloriaDV;
      std::string gordura;
      std::string gorduraDV;
      std::string sodio;
      std::string sodioDV;
      std::string potassio;
      std::string potassioDV;
      std::string carbohidrato;
      std::string carbohidratoDV;
      std::string fibra;
      std::string fibraDV;
      std::string acucar;
      std::string proteina;
      std::string vitaminaA;
      std::string vitaminaC;
      std::string calcio;
      std::string ferro;
      std::string gordurasatDV;
      std::string gordurasat;
      std::string choleDV; 
      std::string chole;
      std::string cholesterol;
      std::string food_type;

      std::string temp;


      std::getline(inputstring, nome, ',');
      std::getline(inputstring, serving, ',');
      std::getline(inputstring, caloria, ',');
      float n1 = std::stof(caloria);
      std::getline(inputstring, caloriaDV, ',');
      float n2 = std::stof(caloriaDV);
      std::getline(inputstring, gordura, ',');
      float n3 = std::stof(gordura);
      std::getline(inputstring, gorduraDV, ',');
      float n4 = std::stof(gorduraDV);
      std::getline(inputstring, sodio, ',');
      float n5 = std::stof(sodio);
      std::getline(inputstring, sodioDV, ',');
      float n6 = std::stof(sodioDV);
      std::getline(inputstring, potassio, ',');
      float n7 = std::stof(potassio);
      std::getline(inputstring, potassioDV, ',');
      float n8 = std::stof(potassioDV);
      std::getline(inputstring, carbohidrato, ',');
      float n9 = std::stof(carbohidrato);
      std::getline(inputstring, carbohidratoDV, ',');
      float n10 = std::stof(carbohidratoDV);
      std::getline(inputstring, fibra, ',');
      float n11 = atof(fibra.c_str());
      std::getline(inputstring, fibraDV, ',');
      float n12 = atof(fibraDV.c_str());
      std::getline(inputstring, acucar, ',');
      float n13 = atof(acucar.c_str());
      std::getline(inputstring, proteina, ',');
      float n14 = atof(proteina.c_str());
      std::getline(inputstring, vitaminaA, ',');
      float n15 = atof(vitaminaA.c_str());
      std::getline(inputstring, vitaminaC, ',');
      float n16 = atof(vitaminaC.c_str());
      std::getline(inputstring, calcio, ',');
      float n17 = atof(calcio.c_str());
      std::getline(inputstring, ferro, ',');
      float n18 = atof(ferro.c_str());
      std::getline(inputstring, gordurasatDV, ',');
      float n19 = atof(fibra.c_str());
      std::getline(inputstring, gordurasat, ',');
      float n20 = atof(gordurasat.c_str());
      std::getline(inputstring, choleDV, ',');
      float n21 = atof(choleDV.c_str());
      std::getline(inputstring, chole, ',');
      float n22 = atof(chole.c_str());
      std::getline(inputstring, cholesterol, ',');
      std::getline(inputstring, food_type, ',');


      tabela tab(nome, serving, caloria, caloriaDV, gordura, gorduraDV, sodio, sodioDV, potassio, potassioDV, carbohidrato, carbohidratoDV, fibra, fibraDV, acucar, proteina, vitaminaA, vitaminaC, calcio, ferro, gordurasatDV, gordurasat, choleDV, chole, cholesterol, food_type);
      array.push_back(tab);

      avl->Insert(nome, serving, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16, n17, n18, n19, n20, n21, n22, cholesterol, food_type);

      array.clear();
      
    }



  //display(array);


	int option = 0;
	do
	{
		std::cout << "*** AVL Tree ***\n"
      << "[1] Traverse in-order\n"
			<< "[2] Search\n"
      << "[3] Calcular Caloria\n"
      << "[4] Calcular Vitaminas\n"
      << "[5] Calcular Proteinas\n"
      << "[6] Calcular outras informações\n"
      << "[7] Tabela síntese nutricional\n"
			<< "[0] Exit\n"
			<< "Option: ";
		std::cin >> option;
		std::cout << '\n';

		switch (option)
		{
    case 1: TraverseInOrder(avl); break;
		case 2: Search(avl); break;
    case 3: CalcCaloria(avl); break;
    case 4: CalcVitamina(avl); break;
    case 5: CalcProteina(avl); break;  
    case 6: CalcOthers(avl); break;
    case 7: Table(avl); break;
		}

		std::cout << '\n';
	} while (option != 0);

	delete avl;
}
//#endif
