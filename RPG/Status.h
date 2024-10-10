#pragma once

enum StatusType
{
	Normal,
	Freeze,
	Poison,
	Burn
};

class StatusEffect
{
public:

	StatusEffect(StatusType _type, int _duration, float _damage) : type(_type), duration(_duration), damage(_damage) {}

	void SetType(StatusType _type) { type = _type; }
	StatusType GetType() { return type; }

	void SetDuration(int _duration) { duration = _duration; }
	int GetDuration() { return duration; }

	void SetDamage(float _damage) { damage = _damage; }
	float GetDamage() { return damage; }

	void AddDuration(int _duration) { duration += _duration; }
	void RemoveDuration() { duration -= 1; }

protected:



private:

	StatusType type;
	int duration;
	float damage;

	friend class Entity;

};

