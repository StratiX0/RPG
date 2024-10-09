#include "Entity.h"

int main()
{
    


    Equipment sword;
    sword.InitEquipment(Sword, 10);

    Inventory playerInv;
    playerInv.AddItem(sword);

    Entity player;
    player.InitEntity(Player, 100, playerInv);

    Entity npc;
    Inventory npcInv;
    npc.InitEntity(NPC, 100, npcInv);
    
    npc.SetType(NPC);
    npc.SetHealth(100);
    std::cout << "\nVie du npc : " << npc.GetHealth();


    player.Attack(npc);

    npc.GetHealth();

    std::cout << "\nVie du npc apres attaque : " << npc.GetHealth();
}
