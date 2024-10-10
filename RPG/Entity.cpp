#include "Entity.h"

void Entity::Attack(Entity& _enemy)
{
	Equipment sword = inventoryComponent.GetItem(0);

	bool isDef = _enemy.GetDefence();

	float damage = sword.GetDamage();

	if (isDef)
	{
		damage /= 2;
	}

	_enemy.GetDamage(damage);

	std::cout << "\nVie de " << _enemy.GetName() << " apres attaque : " << _enemy.GetHealth();
}