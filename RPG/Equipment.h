#pragma once

enum EquipmentType
{
	Sword,
	Shield
};

class Equipment
{
public:

	Equipment(EquipmentType _type, float _damage, float _defense) : type(_type), damage(_damage), defense (_defense) {}

	void SetDamage(float _damage) { damage = _damage; }
	float GetDamage() { return damage; }

	void SetDefense(float _defense) { defense = _defense; }
	float GetDefense() { return defense; }

	void SetType(EquipmentType _type) { type = _type; }
	EquipmentType GetType() { return type; }

protected:



private:

	//std::string name;

	float damage;
	float defense;

	EquipmentType type;

	friend class Inventory;

};