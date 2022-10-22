// NodeAVL.h
#ifndef __NODE_AVL_H__
#define __NODE_AVL_H__

#include <string>

class NodeAVL
{
public:
	NodeAVL(std::string nome,std::string serving, float caloria, float caloriaDV, float gordura, float gorduraDV, float sodio, float sodioDV, float potassio, float potassioDV, float carbohidrato, float carbohidratoDV, float fibra, float fibraDV, float acucar, float proteina, float vitaminaA, float vitaminaC, float calcio, float ferro, float gordurasatDV, float gordurasat, float choleDV, float chole,std::string cholesterol,std::string food_type, NodeAVL* parent = nullptr, NodeAVL* left = nullptr, NodeAVL* right = nullptr);
	~NodeAVL();

	void CopyDataFrom(const NodeAVL* node);

	int GetID() const;
	//void SetID(int id);

	std::string GetNome() const;
	void SetNome(std::string nome);

  std::string GetServing() const;
	void SetServing(std::string serving);

	float GetCaloria() const;
	void SetCaloria(float caloria);

	float GetCaloriaDV() const;
	void SetCaloriaDV(float caloriaDV);

	float GetGordura() const;
	void SetGordura(float gordura);

	float GetGorduraDV() const;
	void SetGorduraDV(float gorduraDV);

	float GetSodio() const;
	void SetSodio(float sodio);

	float GetSodioDV() const;
	void SetSodioDV(float sodioDV);

	float GetPotassio() const;
	void SetPotassio(float potassio);

	float GetPotassioDV() const;
	void SetPotassioDV(float potassioDV);

	float GetCarbohidrato() const;
	void SetCarbohidrato(float carbohidrato);

	float GetCarbohidratoDV() const;
	void SetCarbohidratoDV(float carbohidratoDV);

	float GetFibra() const;
	void SetFibra(float fibra);

	float GetFibraDV() const;
	void SetFibraDV(float fibraDV);

	float GetAcucar() const;
	void SetAcucar(float acucar);

	float GetProteina() const;
	void SetProteina(float proteina);

	float GetVitaminaA() const;
	void SetVitaminaA(float vitaminaA);

	float GetVitaminaC() const;
	void SetVitaminaC(float vitaminaC);

	float GetCalcio() const;
	void SetCalcio(float calcio);

	float GetFerro() const;
	void SetFerro(float ferro);

	float GetGordurasatDV() const;
	void SetGordurasatDV(float gordurasatDV);

	float GetGordurasat() const;
	void SetGordurasat(float gordurasat);

	float GetCholeDV() const;
	void SetCholeDV(float choleDV);

	float GetChole() const;
	void SetChole(float chole);

  std::string GetCholesterol() const;
	void SetCholesterol(std::string cholesterol);

  std::string GetFood_type() const;
	void SetFood_type(std::string food_type);

	NodeAVL* GetParent() const;
	void SetParent(NodeAVL* parent);

	NodeAVL* GetLeft() const;
	void SetLeft(NodeAVL* left);

	NodeAVL* GetRight() const;
	void SetRight(NodeAVL* right);

	bool IsRoot() const;
	bool IsLeaf() const;

	int GetDegree() const;
	int GetDepth() const;
	int GetHeight() const;

	int GetBalanceFactor() const;
	void UpdateBalanceFactor();

	std::string ToString() const;

private:
	int m_ID;
	std::string m_Nome;
  std::string m_Serving;
  float m_Caloria;
  float m_CaloriaDV;
	float m_Gordura;
  float m_GorduraDV;
  float m_Sodio;
  float m_SodioDV;
  float m_Potassio;
  float m_PotassioDV;
  float m_Carbohidrato;
  float m_CarbohidratoDV;
  float m_Fibra;
  float m_FibraDV;
  float m_Acucar;
  float m_Proteina;
  float m_VitaminaA;
  float m_VitaminaC;
  float m_Calcio;
  float m_Ferro;
  float m_GordurasatDV;
  float m_Gordurasat;
  float m_CholeDV;
  float m_Chole;
	std::string m_Cholesterol;
  std::string m_Food_type;
	
	NodeAVL* m_Parent;
	NodeAVL* m_Left;
	NodeAVL* m_Right;

	int m_BalanceFactor;

	int GetDepthInternal(const NodeAVL* node) const;
	int GetHeightInternal(const NodeAVL* node) const;
};

#endif
