#pragma once

#include <vector>
#include "Equipment.h"

class Inventory
{
public:

	void AddItem(Equipment _item) { inventory.push_back(_item); }
	void RemoveItem(int _index) { inventory.erase(inventory.begin() + _index); }

	Equipment GetItem(int _type);

	void SetActiveItemIndex(int _index) { activeItemIndex = _index; }
	int GetActiveItemIndex() { return activeItemIndex; }

protected:



private:

	std::vector<Equipment> inventory;

	int activeItemIndex;

	friend class Entity;
};