#include "Competences.h"


Competence& Competences::GetCompetence(int _index)
{
    if (_index >= 0 && _index < activeCompetences.size())
    {
        return activeCompetences[_index];
    }
}

void Competences::RemoveCompetence(int _index)
{
    if (_index >= 0 && _index < activeCompetences.size())
    {
        activeCompetences.erase(activeCompetences.begin() + _index);
    }
}