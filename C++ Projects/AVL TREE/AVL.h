// AVL.h
#ifndef __AVL_H__
#define __AVL_H__

#include "NodeAVL.h"
#include <vector>

class AVL
{
public:
	AVL();
	~AVL();

	NodeAVL* GetRoot() const;

	bool IsEmpty() const;
	void Clear();

	int GetDegree() const;
	int GetHeight() const;

	std::string TraverseInOrder() const;
	std::string TraversePreOrder() const;
	std::string TraversePostOrder() const;

	NodeAVL* FindMin() const;
	NodeAVL* FindMax() const;

	NodeAVL* Predecessor(int id) const;
	NodeAVL* Successor(int id) const;

	NodeAVL* Search(std::string name) const;
  NodeAVL* CalcCaloria(std::string name) const;
  NodeAVL* CalcVitamina(std::string name) const;
  NodeAVL* CalcProteina(std::string name) const;
  NodeAVL* CalcOthers(std::string name) const;
	NodeAVL* Insert(std::string nome,std::string serving, float caloria, float caloriaDV, float gordura, float gorduraDV, float sodio, float sodioDV, float potassio, float potassioDV, float carbohidrato, float carbohidratoDV, float fibra, float fibraDV, float acucar, float proteina, float vitaminaA, float vitaminaC, float calcio, float ferro, float gordurasatDV, float gordurasat, float choleDV, float chole,std::string cholesterol,std::string food_type);
	void Remove(int id);

private:
	NodeAVL* m_Root;

	void Destroy(NodeAVL *node);
	
	int GetDegreeInternal(const NodeAVL* node) const;

	std::string TraverseInOrderInternal(const NodeAVL* node) const;
	std::string TraversePreOrderInternal(const NodeAVL* node) const;
	std::string TraversePostOrderInternal(const NodeAVL* node) const;

	NodeAVL* FindMinInternal(NodeAVL* node) const;
	NodeAVL* FindMaxInternal(NodeAVL* node) const;

	NodeAVL* PredecessorInternal(NodeAVL* node) const;
	NodeAVL* SuccessorInternal(NodeAVL* node) const;

	NodeAVL* SearchInternal(NodeAVL* node, std::string name) const;
  NodeAVL* CalcCaloriaInternal(NodeAVL* node, std::string name) const;
  NodeAVL* CalcVitaminaInternal(NodeAVL* node, std::string name) const;
  NodeAVL* CalcProteinaInternal(NodeAVL* node, std::string name) const;
  NodeAVL* CalcOthersInternal(NodeAVL* node, std::string name) const;
	NodeAVL* InsertInternal(NodeAVL* node, NodeAVL* parent, std::string nome,std::string serving, float caloria, float caloriaDV, float gordura, float gorduraDV, float sodio, float sodioDV, float potassio, float potassioDV, float carbohidrato, float carbohidratoDV, float fibra, float fibraDV, float acucar, float proteina, float vitaminaA, float vitaminaC, float calcio, float ferro, float gordurasatDV, float gordurasat, float choleDV, float chole,std::string cholesterol,std::string food_type);
	NodeAVL* RemoveInternal(NodeAVL* node, int id);
	NodeAVL* RemoveNode(NodeAVL* node);
	void UpdateParentChild(NodeAVL* parent, const NodeAVL* child, NodeAVL* newChild);

	NodeAVL* RotateLeft(NodeAVL* node);
	NodeAVL* RotateRight(NodeAVL* node);
	NodeAVL* RotateLeftRight(NodeAVL* node);
	NodeAVL* RotateRightLeft(NodeAVL* node);

	NodeAVL* Balance(NodeAVL* node);
};

#endif
