#pragma once

#include "Status.h"
#include "Competences.h"
#include <string>

enum EquipmentType
{
	Sword,
	Shield
};

class Equipment
{
public:

	Equipment(std::string _name, EquipmentType _type, float _damage, float _defense, StatusType _statusResistance, CompetenceType _competenceBuff) :
	name(_name), type(_type), damage(_damage), defense (_defense), statusResistance(_statusResistance), competenceBuff(_competenceBuff) {}

	void SetDamage(float _damage) { damage = _damage; }
	float GetDamage() { return damage; }

	void SetDefense(float _defense) { defense = _defense; }
	float GetDefense() { return defense; }

	void SetType(EquipmentType _type) { type = _type; }
	EquipmentType GetType() { return type; }

	void SetStatusResistance(StatusType _statusResistance) { statusResistance = _statusResistance; }
	StatusType GetStatusResistance() { return statusResistance; }

	void SetCompetenceBuff(CompetenceType _competenceBuff) { competenceBuff = _competenceBuff; }
	CompetenceType GetCompetenceBuff() { return competenceBuff; }

protected:



private:

	std::string name;

	EquipmentType type;
	float damage;
	float defense;

	StatusType statusResistance;
	CompetenceType competenceBuff;


	friend class Inventory;

};