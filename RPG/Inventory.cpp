#include "Inventory.h"

Equipment Inventory::GetItem(int _type)
{
	for (int i = 0; i < inventory.size(); i++)
	{
		if (inventory[i].GetType() == _type) return inventory[i];
	}
}