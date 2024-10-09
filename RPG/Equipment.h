#pragma once

enum EquipmentType
{
	Sword,
	Shield
};

class Equipment
{
public:

	void InitEquipment(EquipmentType _type, int _damage);

	void SetDamage(int _damage) { damage = _damage; }
	int GetDamage() { return damage; }

	void SetType(EquipmentType _type) { type = _type; }
	EquipmentType GetType() { return type; }

protected:



private:

	//std::string name;

	int damage;

	EquipmentType type;

	friend class Inventory;

};