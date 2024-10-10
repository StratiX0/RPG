#include "Entity.h"

int main()
{

	Equipment sword = Equipment(Sword, 10, 1);
    Inventory playerInv;
    playerInv.AddItem(sword);
	playerInv.SetActiveItemIndex(0);

    Entity player = Entity("Player", Player, 100, playerInv);

    Competences playerCompetences;
    Competence attackBuff = Competence(Attack, 3, 1, 0, 5, 1.5f, false);
    Competence defenceBuff = Competence(Defense, 3, 1, 0, 5, 0.5f, false);
    Competence playerHeal = Competence(Heal, 3, 1, 0, 10, 1, false);
    playerCompetences.AddCompetence(attackBuff);
	playerCompetences.AddCompetence(defenceBuff);
    playerCompetences.AddCompetence(playerHeal);
	player.SetCompetences(playerCompetences);



    Equipment sword2 = Equipment(Sword, 5, 1);
    Inventory npcInv;
	npcInv.AddItem(sword2);

    Entity npc= Entity("NPC", NPC, 100, npcInv);

    Competences npcCompetences;
    Competence npcHeal = Competence(Heal, 3, 1, 0, 3, 1, false);
    npcCompetences.AddCompetence(npcHeal);
	npc.SetCompetences(npcCompetences);


    bool gameRunning = true;

	int round = 0;
    float multiplier = 1;

    while (gameRunning)
    {
		round++;
		std::cout << std::endl << "Round " << round << std::endl;

        multiplier = 1;

        player.Attack(player.GetInventory().GetItem(0).GetDamage() * multiplier, npc);

        if (npc.GetHealth() <= 0)
        {
            std::cout << std::endl << "Le joueur a vaincu son adversaire!" << std::endl;
            gameRunning = false;
            break;
        }

        // Heal du npc
		if (npc.GetHealth() < 50 && npc.GetCompetences().GetCompetence(0).GetQuantity() > 0)
		{
            float heal = npc.GetCompetences().GetCompetence(0).GetValue();
			npc.SetHealth(npc.GetHealth() + heal);
			npc.GetCompetences().GetCompetence(0).RemoveQuantity();
            std::cout << std::endl << "Le npc s'est heal!" << std::endl;
		}

        npc.Attack(npc.GetInventory().GetItem(0).GetDamage() * multiplier, player);

        if (player.GetHealth() <= 0)
        {
            std::cout << std::endl << "Le NPC a vaincu le joueur!" << std::endl;
            gameRunning = false;
            break;
        }
    }

}
