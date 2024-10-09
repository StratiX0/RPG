#include "Entity.h"

void Entity::InitEntity(EntityType _type, int _health, Inventory _inventoryComponent)
{
	SetType(_type);
	SetHealth(_health);
	SetInventory(_inventoryComponent);
}

void Entity::Attack(Entity& _enemy)
{
	Equipment sword = inventoryComponent.GetItem(0);
	_enemy.SetHealth(_enemy.GetHealth() - sword.GetDamage());
	_enemy.GetHealth();
}