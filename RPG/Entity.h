#pragma once

#include <iostream>
#include "Inventory.h"
#include "Competences.h"
#include "Status.h"

enum EntityType
{
    Player,
    NPC
};

class Entity
{
public:
    // Constructeur
    Entity(std::string _name, EntityType _type, float _health, Inventory _inventoryComponent, StatusEffect _statusEffect, int _stamina, int _mana) :
	name(_name), type(_type), health(_health), inventoryComponent(_inventoryComponent), statusEffectComponent(_statusEffect), stamina(_stamina), mana(_mana) {}

    void SetName(std::string _name) { name = _name; }
    std::string GetName() { return name; }

    void SetHealth(float _health) { health = _health; }
    float GetHealth() { return health; }

    void SetType(EntityType _type) { type = _type; }
    EntityType GetType() { return type; }

    void SetInventory(Inventory _inventory) { inventoryComponent = _inventory; }
    Inventory& GetInventory() { return inventoryComponent; }

    void Attack(float _damage, Entity& _enemy);
	void GetDamage(float _damage) { health -= _damage; }

	void SetDefence(bool _isDefending) { isDefending = _isDefending; }
	bool GetDefence() { return isDefending; }

	void SetCompetences(Competences _competences) { competencesComponent = _competences; }
	void AddCompetences(Competence _competence) { competencesComponent.AddCompetence(_competence); }
	Competences& GetCompetences() { return competencesComponent; }

	void SetStatusEffect(StatusEffect _statusEffect) { statusEffectComponent = _statusEffect; }
	StatusEffect& GetStatusEffect() { return statusEffectComponent; }

	void SetStamina(int _stamina) { stamina = _stamina; }
	int GetStamina() { return stamina; }

	void SetMana(int _mana) { mana = _mana; }
	int GetMana() { return mana; }

protected:

private:
    std::string name;
    float health;
    bool isDefending;
    EntityType type;

    int stamina;
    int mana;

    Inventory inventoryComponent;
	Competences competencesComponent;
    StatusEffect statusEffectComponent;
};
