/*
 * Simple Cave Adventure - A Short Text-Based Game
 * Made for beginners
 */

#include <stdio.h>

int main()
{
    char name[64];
    int choice;
    int health = 100;
    int treasure = 0;

    printf("Welcome to Simple Cave Adventure!\n");
    printf("What's your name? ");
    scanf("%s", name);

    printf("\nHello, %s! Your adventure begins.\n", name);
    
    printf("Health: %d\n", health);
    printf("Treasure: %d gold coins\n", treasure);
    
    printf("\nYou stand at the entrance of a cave.\n");
    printf("Do you: 1) Enter the cave  2) Walk around it: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nInside the cave, you see two paths.\n");
        printf("Do you: 1) Take left path  2) Take right path: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("\nYou take the left path and find a treasure chest!\n");
            printf("Do you: 1) Open it  2) Leave it alone: ");
            scanf("%d", &choice);
            
            if (choice == 1) {
                printf("\nYou open the chest and find 50 gold coins!\n");
                treasure = treasure + 50;
                
                printf("Health: %d\n", health);
                printf("Treasure: %d gold coins\n", treasure);
                
                printf("\nAs you grab the treasure, a goblin appears!\n");
                printf("\nCombat begins!\n");
                int enemyHealth = 30;
                
                while(health > 0) {
                    if(enemyHealth <= 0) {
                        break;
                    }
                    
                    printf("Your health: %d, Enemy health: %d\n", health, enemyHealth);
                    printf("Choose: 1) Attack  2) Defend: ");
                    int action;
                    scanf("%d", &action);

                    if (action == 1) {
                        enemyHealth = enemyHealth - 10;
                        printf("You attack and deal 10 damage!\n");
                    } else {
                        printf("You defend and take less damage.\n");
                    }

                    if (enemyHealth > 0) {
                        if (action == 2) {
                            health = health - 4;
                            printf("Enemy hits you for 4 damage (reduced by defense)!\n");
                        } else {
                            health = health - 8;
                            printf("Enemy hits you for 8 damage!\n");
                        }
                    }
                }

                if (health > 0) {
                    printf("You won the battle!\n");
                    printf("\nYou defeated the goblin and found 20 more gold coins!\n");
                    treasure = treasure + 20;
                    
                    printf("Health: %d\n", health);
                    printf("Treasure: %d gold coins\n", treasure);
                    
                    printf("You exit the cave as a winner!\n");
                } else {
                    printf("The goblin defeated you. Game over.\n");
                    return 0;
                }
            } else {
                printf("\nYou wisely avoid the suspicious chest and find the exit.\n");
                printf("You survive with your life intact!\n");
            }
        } else {
            printf("\nYou take the right path and encounter a bear!\n");
            printf("Do you: 1) Fight the bear  2) Run away: ");
            scanf("%d", &choice);
            
            if (choice == 1) {
                printf("\nCombat begins!\n");
                int enemyHealth = 50;
                
                while(health > 0) {
                    if(enemyHealth <= 0) {
                        break;
                    }
                    
                    printf("Your health: %d, Enemy health: %d\n", health, enemyHealth);
                    printf("Choose: 1) Attack  2) Defend: ");
                    int action;
                    scanf("%d", &action);

                    if (action == 1) {
                        enemyHealth = enemyHealth - 10;
                        printf("You attack and deal 10 damage!\n");
                    } else {
                        printf("You defend and take less damage.\n");
                    }

                    if (enemyHealth > 0) {
                        if (action == 2) {
                            health = health - 4;
                            printf("Enemy hits you for 4 damage (reduced by defense)!\n");
                        } else {
                            health = health - 8;
                            printf("Enemy hits you for 8 damage!\n");
                        }
                    }
                }

                if (health > 0) {
                    printf("You won the battle!\n");
                    printf("\nYou defeated the bear and find 30 gold coins nearby!\n");
                    treasure = treasure + 30;
                    
                    printf("Health: %d\n", health);
                    printf("Treasure: %d gold coins\n", treasure);
                    
                    printf("You exit the cave as a winner!\n");
                } else {
                    printf("The bear defeated you. Game over.\n");
                    return 0;
                }
            } else {
                printf("\nYou run away safely but find nothing else.\n");
                printf("You exit the cave with no treasure but alive!\n");
            }
        }
    } else {
        printf("\nYou walk around the cave and find a small pouch with 10 gold coins!\n");
        treasure = treasure + 10;
        
        printf("Health: %d\n", health);
        printf("Treasure: %d gold coins\n", treasure);
        
        printf("Sometimes the easy path pays off. You win!\n");
    }

    printf("\nThanks for playing, %s!\n", name);
    printf("Final stats - Health: %d, Treasure: %d gold coins\n", health, treasure);
    return 0;
}