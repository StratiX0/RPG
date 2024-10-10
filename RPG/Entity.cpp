#include "Entity.h"

void Entity::Attack(float _damage, Entity& _enemy)
{
	//Equipment sword = inventoryComponent.GetItem(0);

	if (_enemy.GetDefence())
	{
		_damage /= 2;
	}

	_enemy.GetDamage(_damage);

	_enemy.SetDefence(false);

	std::cout << "Vie de " << _enemy.GetName() << " apres attaque : " << _enemy.GetHealth() << std::endl;
}