#include "Entity.h"

int main()
{

	Equipment sword = Equipment(Sword, 10, 1);
    Inventory playerInv;
    playerInv.AddItem(sword);
    Entity player = Entity("Player", Player, 100, playerInv);


    Equipment sword2 = Equipment(Sword, 5, 1);
    Inventory npcInv;
	npcInv.AddItem(sword2);
    Entity npc= Entity("NPC", NPC, 100, npcInv);

    player.Attack(npc);

    npc.Attack(player);

    player.Attack(npc);

    player.SetDefence(true);

    npc.Attack(player);

}
