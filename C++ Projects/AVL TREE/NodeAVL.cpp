// NodeAVL.cpp
#include "NodeAVL.h"
#include "Utils.h"
#include <sstream>

NodeAVL::NodeAVL(std::string nome,std::string serving, float caloria, float caloriaDV, float gordura, float gorduraDV, float sodio, float sodioDV, float potassio, float potassioDV, float carbohidrato, float carbohidratoDV, float fibra, float fibraDV, float acucar, float proteina, float vitaminaA, float vitaminaC, float calcio, float ferro, float gordurasatDV, float gordurasat, float choleDV, float chole,std::string cholesterol,std::string food_type, NodeAVL* parent, NodeAVL* left, NodeAVL* right)
	: m_Nome(nome)
	, m_Serving(serving)
  , m_Caloria(caloria)
  , m_CaloriaDV(caloriaDV)
  , m_Gordura(gordura)
  , m_Sodio(sodio)
  , m_SodioDV(sodioDV)
  , m_Potassio(potassio)
  , m_PotassioDV(potassioDV)
  , m_Carbohidrato(carbohidrato)
  , m_CarbohidratoDV(carbohidratoDV)
  , m_Fibra(fibra)
  , m_FibraDV(fibraDV)
  , m_Acucar(acucar)
  , m_Proteina(proteina)
  , m_VitaminaA(vitaminaA)
  , m_VitaminaC(vitaminaC)  
  , m_Calcio(calcio)
  , m_Ferro(ferro)
  , m_GordurasatDV(gordurasatDV)
  , m_Gordurasat(gordurasat)
  , m_CholeDV(choleDV)
  , m_Chole(chole)
  , m_Cholesterol(cholesterol)
  , m_Food_type(food_type)
	, m_Parent(parent)
	, m_Left(left)
	, m_Right(right)
	, m_BalanceFactor(0)
{
}

NodeAVL::~NodeAVL()
{
	m_Parent = nullptr;
	m_Left = nullptr;
	m_Right = nullptr;
}

void NodeAVL::CopyDataFrom(const NodeAVL* node)
{
	m_ID = node->GetID();
	m_Nome = node->GetNome();
  m_Serving = node->GetServing();
  m_Caloria = node->GetCaloria();
  m_CaloriaDV = node->GetCaloriaDV();
	m_Gordura = node->GetGordura();
  m_GorduraDV = node->GetGorduraDV();
  m_Sodio = node->GetSodio();
  m_SodioDV = node->GetSodioDV();
  m_Potassio = node->GetPotassio();
  m_PotassioDV = node->GetPotassioDV();
  m_Carbohidrato = node->GetCarbohidrato();
  m_CarbohidratoDV = node->GetCarbohidratoDV();
  m_Fibra = node->GetFibra();
  m_FibraDV = node->GetFibraDV();
  m_Acucar = node->GetAcucar();
  m_Proteina = node->GetProteina();
  m_VitaminaA = node->GetVitaminaA();
  m_VitaminaC = node->GetVitaminaC();
  m_Calcio = node->GetCalcio();
  m_Ferro = node->GetFerro();
  m_GordurasatDV = node->GetGordurasatDV();
  m_Gordurasat = node->GetGordurasat();
  m_CholeDV = node->GetCholeDV();
  m_Chole = node->GetChole();
  m_Cholesterol = node->GetCholesterol();
  m_Food_type = node->GetFood_type();
}

int NodeAVL::GetID() const
{
	return m_ID;
}

std::string NodeAVL::GetNome() const
{
	return m_Nome;
}

void NodeAVL::SetNome(std::string nome)
{
	m_Nome = nome;
}

std::string NodeAVL::GetServing() const
{
	return m_Serving;
}

void NodeAVL::SetServing(std::string serving)
{
	m_Serving = serving;
}

float NodeAVL::GetCaloria()const
{
  return m_Caloria;
}

void NodeAVL::SetCaloria(float caloria)
{
	m_Caloria = caloria;
}

float NodeAVL::GetCaloriaDV()const
{
  return m_CaloriaDV;
}

void NodeAVL::SetCaloriaDV(float caloriaDV)
{
	m_CaloriaDV = caloriaDV;
}

float NodeAVL::GetGordura()const
{
  return m_Gordura;
}

void NodeAVL::SetGordura(float gordura)
{
	m_Gordura = gordura;
}

float NodeAVL::GetGorduraDV()const
{
  return m_GorduraDV;
}

void NodeAVL::SetGorduraDV(float gorduraDV)
{
	m_GorduraDV = gorduraDV;
}

float NodeAVL::GetSodio()const
{
  return m_Sodio;
}

void NodeAVL::SetSodio(float sodio)
{
	m_Sodio = sodio;
}

float NodeAVL::GetSodioDV()const
{
  return m_SodioDV;
}

void NodeAVL::SetSodioDV(float sodioDV)
{
	m_SodioDV = sodioDV;
}

float NodeAVL::GetPotassio()const
{
  return m_Potassio;
}

void NodeAVL::SetPotassio(float potassio)
{
	m_Potassio = potassio;
}

float NodeAVL::GetPotassioDV()const
{
  return m_PotassioDV;
}

void NodeAVL::SetPotassioDV(float potassioDV)
{
	m_PotassioDV = potassioDV;
}

float NodeAVL::GetCarbohidrato()const
{
  return m_Carbohidrato;
}

void NodeAVL::SetCarbohidrato(float carbohidrato)
{
	m_Carbohidrato = carbohidrato;
}

float NodeAVL::GetCarbohidratoDV()const
{
  return m_CarbohidratoDV;
}

void NodeAVL::SetCarbohidratoDV(float carbohidratoDV)
{
	m_CarbohidratoDV = carbohidratoDV;
}

float NodeAVL::GetFibra()const
{
  return m_Fibra;
}

void NodeAVL::SetFibra(float fibra)
{
	m_Fibra = fibra;
}

float NodeAVL::GetFibraDV()const
{
  return m_FibraDV;
}

void NodeAVL::SetFibraDV(float fibraDV)
{
	m_FibraDV = fibraDV;
}

float NodeAVL::GetAcucar()const
{
  return m_Acucar;
}

void NodeAVL::SetAcucar(float acucar)
{
	m_Acucar = acucar;
}

float NodeAVL::GetProteina()const
{
  return m_Proteina;
}

void NodeAVL::SetProteina(float proteina)
{
	m_Proteina = proteina;
}

float NodeAVL::GetVitaminaA()const
{
  return m_VitaminaA;
}

void NodeAVL::SetVitaminaA(float vitaminaA)
{
	m_VitaminaA = vitaminaA;
}

float NodeAVL::GetVitaminaC()const
{
  return m_VitaminaC;
}

void NodeAVL::SetVitaminaC(float vitaminaC)
{
	m_VitaminaC = vitaminaC;
}

float NodeAVL::GetCalcio()const
{
  return m_Calcio;
}

void NodeAVL::SetCalcio(float calcio)
{
	m_Calcio = calcio;
}

float NodeAVL::GetFerro()const
{
  return m_Ferro;
}

void NodeAVL::SetFerro(float ferro)
{
	m_Ferro = ferro;
}

float NodeAVL::GetGordurasatDV()const
{
  return m_GordurasatDV;
}

void NodeAVL::SetGordurasatDV(float gordurasatDV)
{
	m_GordurasatDV = gordurasatDV;
}

float NodeAVL::GetGordurasat()const
{
  return m_Gordurasat;
}

void NodeAVL::SetGordurasat(float gordurasat)
{
	m_Gordurasat = gordurasat;
}

float NodeAVL::GetCholeDV()const
{
  return m_CholeDV;
}

void NodeAVL::SetCholeDV(float choleDV)
{
	m_CholeDV = choleDV;
}

float NodeAVL::GetChole()const
{
  return m_Chole;
}

void NodeAVL::SetChole(float chole)
{
	m_Chole = chole;
}

std::string NodeAVL::GetCholesterol() const
{
	return m_Cholesterol;
}

void NodeAVL::SetCholesterol(std::string cholesterol)
{
	m_Cholesterol = cholesterol;
}
std::string NodeAVL::GetFood_type() const
{
	return m_Food_type;
}
void NodeAVL::SetFood_type(std::string food_type)
{
	m_Food_type = food_type;
}

NodeAVL* NodeAVL::GetParent() const
{
	return m_Parent;
}

void NodeAVL::SetParent(NodeAVL* parent)
{
	m_Parent = parent;
}

NodeAVL* NodeAVL::GetLeft() const
{
	return m_Left;
}

void NodeAVL::SetLeft(NodeAVL* left)
{
	m_Left = left;
}

NodeAVL* NodeAVL::GetRight() const
{
	return m_Right;
}

void NodeAVL::SetRight(NodeAVL* right)
{
	m_Right = right;
}

bool NodeAVL::IsRoot() const
{
	return m_Parent == nullptr;
}

bool NodeAVL::IsLeaf() const
{
	return m_Left == nullptr && m_Right == nullptr;
}

int NodeAVL::GetDegree() const
{
	int degree = 0;

	if (m_Left != nullptr)
		++degree;
	if (m_Right != nullptr)
		++degree;

	return degree;
}

int NodeAVL::GetDepth() const
{
	return GetDepthInternal(this);
}

int NodeAVL::GetDepthInternal(const NodeAVL* node) const
{
	if (node->IsRoot())
	{
		return 0;
	}
	else
	{
		return 1 + GetDepthInternal(node->GetParent());
	}
}

int NodeAVL::GetHeight() const
{
	return GetHeightInternal(this);
}

int NodeAVL::GetHeightInternal(const NodeAVL* node) const
{
	if (node == nullptr || node->IsLeaf())
	{
		return 0;
	}
	else
	{
		return 1 + Utils::Max(GetHeightInternal(node->GetLeft()), GetHeightInternal(node->GetRight()));
	}
}

int NodeAVL::GetBalanceFactor() const
{
	return m_BalanceFactor;
}

void NodeAVL::UpdateBalanceFactor()
{
	int leftHeight = m_Left == nullptr ? -1 : GetHeightInternal(m_Left);
	int rightHeight = m_Right == nullptr ? -1 : GetHeightInternal(m_Right);
	m_BalanceFactor = rightHeight - leftHeight;

	// Read the comments inside AVL::Balance().
	//m_BalanceFactor = leftHeight - rightHeight;
}

std::string NodeAVL::ToString() const
{
	std::ostringstream oss;

	oss << "Nome produto::" << m_Nome << std::endl
    //<< " Name:" << GetNome() << std::endl
    << " Porção:" << GetServing() << std::endl
    << " Calorias:" << GetCaloria() << std::endl
    << " CaloriasDV:" << GetCaloriaDV() << std::endl
    << " Gorduras:" << GetGordura() << std::endl
    << " GordurasDV:" << GetGorduraDV() << std::endl
    << " Sódio:" << GetSodio() << std::endl
    << " SódioDV:" << GetSodioDV() << std::endl
    << " Potássio:" << GetPotassio() << std::endl
    << " PotássioDV:" << GetPotassioDV() << std::endl
    << " Fibras:" << GetFibra() << std::endl
    << " FibrasDV:" << GetFibraDV() << std::endl
    << " Açúcares:" << GetAcucar() << std::endl
    << " Protéinas:" << GetProteina() << std::endl
    << " VitaminaA:" << GetVitaminaA() << std::endl
    << " VitaminaC:" << GetVitaminaC() << std::endl
    << " Cálcio:" << GetFerro() << std::endl
    << " Ferro:" << GetCalcio() << std::endl
    << " GorduraSaturadaDV:" << GetGordurasatDV() << std::endl
    << " GorduraSaturada:" << GetGordurasat() << std::endl
    << " CholeDV:" << GetCholeDV() << std::endl
    << " Chole:" << GetChole() << std::endl
    << " Cholesterol:" << GetCholesterol() << std::endl
    << " Tipo da Comida:" << GetFood_type() << std::endl
		/*<< " Parent:" << (m_Parent != nullptr ? m_Parent->GetID() : -1)
		<< " Left:" << (m_Left != nullptr ? m_Left->GetID() : -1)
		<< " Right:" << (m_Right != nullptr ? m_Right->GetID() : -1)
		<< " Degree: " << GetDegree()
		<< " Depth: " << GetDepth()
		<< " Height: " << GetHeight()
		<< " Balance: " << m_BalanceFactor << std::endl*/
    << "######################################################### " << std::endl;

	return oss.str();
}
