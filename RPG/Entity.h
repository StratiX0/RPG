#pragma once

#include <iostream>
#include "Inventory.h"

enum EntityType
{
	Player,
	NPC
};

class Entity
{
public:

	void InitEntity(EntityType _type, int _health, Inventory _inventoryComponent);

	void SetHealth(int _health) { health = _health; }
	int GetHealth() { return health; }

	void SetType(EntityType _type) { type = _type; }
	EntityType GetType() { return type;  }

	void SetInventory(Inventory _inventory) { inventoryComponent = _inventory; }
	Inventory GetInventory() { return inventoryComponent; }

	void Attack(Entity _enemy);

protected:



private:

	int health;
	EntityType type;

	Inventory inventoryComponent;

};