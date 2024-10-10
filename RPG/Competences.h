#pragma once
#include <vector>

enum CompetenceType
{
    Attack,
    Defense,
    Heal
};

class Competence
{
public:
    Competence(CompetenceType _type, int _quantity, int _time, int _currentTimeUse, float _value, float _multiplier, bool _isActive) : type(_type), quantity(_quantity), time(_time), currentTimeUse(_currentTimeUse), value(_value), multiplier(_multiplier), isActive(_isActive) {}

	void SetType() { type = type; }
    CompetenceType GetType() const { return type; }

	void SetQuantity(int _quantity) { quantity = _quantity; }
    int GetQuantity() const { return quantity; }

	void SetTime(int _time) { time = _time; }
    int GetTime() const { return time; }

	void SetCurrentTimeUse(int _currentTimeUse) { currentTimeUse = _currentTimeUse; }
	int GetCurrentTimeUse() const { return currentTimeUse; }

	void SetValue(float _value) { value = _value; }
    float GetValue() const { return value; }

	void SetMultiplier(float _multiplier) { multiplier = _multiplier; }
    float GetMultiplier() const { return multiplier; }

	void SetIsActive(bool _isActive) { isActive = _isActive; }
	bool GetIsActive() const { return isActive; }

    void AddQuantity(int _quantity) { quantity += _quantity; }
	void AddTime(int _time) { time += _time; }
	void AddCurrentTimeUse(int _currentTimeUse) { currentTimeUse += _currentTimeUse; }
	void AddValue(float _value) { value += _value; }
	void AddMultiplier(float _multiplier) { multiplier += _multiplier; }

	void RemoveQuantity() { quantity -= 1; }
	void RemoveTime(int _time) { time -= _time; }
	void RemoveCurrentTimeUse() { currentTimeUse -= 1; }
	void RemoveValue(float _value) { value -= _value; }
	void RemoveMultiplier(float _multiplier) { multiplier -= _multiplier; }

protected:

private:
    friend class Entity;
    friend class Competences;

    CompetenceType type;
    int quantity;
    int time;
    int currentTimeUse;
    float value;
    float multiplier;
    bool isActive;
};

class Competences
{
public:
    void AddCompetence(const Competence& _competence) { activeCompetences.push_back(_competence); }

    void RemoveCompetence(int _index);

    Competence& GetCompetence(int _index);

protected:

private:
    friend class Entity;
    friend class Competence;

    std::vector<Competence> activeCompetences;
};

