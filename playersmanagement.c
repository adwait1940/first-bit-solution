#include <stdio.h>
#include <string.h>


#define MAX_PLAYERS 100


typedef struct {
    int jerseyNumber;
    char name[50];
    int runs;
    int wickets;
    int matches;
} Player;


Player players[MAX_PLAYERS];
int playerCount = 0;


void addPlayer() {
    if (playerCount >= MAX_PLAYERS) {
        printf("Player limit reached!\n");
        return;
    }

    printf("Enter Jersey Number: ");
    scanf("%d", &players[playerCount].jerseyNumber);
    printf("Enter Name: ");
    scanf(" %[^\n]", players[playerCount].name);
    printf("Enter Runs: ");
    scanf("%d", &players[playerCount].runs);
    printf("Enter Wickets: ");
    scanf("%d", &players[playerCount].wickets);
    printf("Enter Matches Played: ");
    scanf("%d", &players[playerCount].matches);

    playerCount++;
    printf("Player added successfully!\n");
}


void removePlayer() {
    int jersey;
    printf("Enter Jersey Number to remove: ");
    scanf("%d", &jersey);

    for (int i = 0; i < playerCount; i++) {
        if (players[i].jerseyNumber == jersey) {
            
            
            for (int j = i; j < playerCount - 1; j++) {
                players[j] = players[j + 1];
            }
            playerCount--;
            printf("Player removed successfully!\n");
            return;
        }
    }
    printf("Player not found!\n");
}


void searchPlayer() {
    int choice;
    printf("Search by:\n1. Jersey Number\n2. Name\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int jersey;
        printf("Enter Jersey Number: ");
        scanf("%d", &jersey);
        for (int i = 0; i < playerCount; i++) {
            if (players[i].jerseyNumber == jersey) {
                printf("Player Found: %s, Runs: %d, Wickets: %d, Matches: %d\n",
                       players[i].name, players[i].runs, players[i].wickets, players[i].matches);
                return;
            }
        }
    } else if (choice == 2) {
        char name[50];
        printf("Enter Name: ");
        scanf(" %[^\n]", name);
        for (int i = 0; i < playerCount; i++) {
            if (strcmp(players[i].name, name) == 0) {
                printf("Player Found: Jersey: %d, Runs: %d, Wickets: %d, Matches: %d\n",
                       players[i].jerseyNumber, players[i].runs, players[i].wickets, players[i].matches);
                return;
            }
        }
    }
    printf("Player not found!\n");
}


void updatePlayer() {
    int jersey;
    printf("Enter Jersey Number to update: ");
    scanf("%d", &jersey);

    for (int i = 0; i < playerCount; i++) {
        if (players[i].jerseyNumber == jersey) {
            printf("Enter new Runs: ");
            scanf("%d", &players[i].runs);
            printf("Enter new Wickets: ");
            scanf("%d", &players[i].wickets);
            printf("Enter new Matches Played: ");
            scanf("%d", &players[i].matches);
            printf("Player updated successfully!\n");
            return;
        }
    }
    printf("Player not found!\n");
}


void displayPlayers() {
    if (playerCount == 0) {
        printf("No players to display.\n");
        return;
    }
    printf("\nAll Players:\n");
    for (int i = 0; i < playerCount; i++) {
        printf("Jersey: %d, Name: %s, Runs: %d, Wickets: %d, Matches: %d\n",
               players[i].jerseyNumber, players[i].name, players[i].runs,
               players[i].wickets, players[i].matches);
    }
}

// Function to find and display the top 3 players by runs and wickets
void displayTopPlayers() {
    if (playerCount == 0) {
        printf("Not enough players to determine top players.\n");
        return;
    }

    // Sort players by runs in descending order
    Player tempPlayers[MAX_PLAYERS];
    memcpy(tempPlayers, players, sizeof(Player) * playerCount);
    
    for (int i = 0; i < playerCount - 1; i++) {
        for (int j = 0; j < playerCount - i - 1; j++) {
            if (tempPlayers[j].runs < tempPlayers[j + 1].runs) {
                Player temp = tempPlayers[j];
                tempPlayers[j] = tempPlayers[j + 1];
                tempPlayers[j + 1] = temp;
            }
        }
    }

    printf("\nTop 3 Players by Runs:\n");
    for (int i = 0; i < 3 && i < playerCount; i++) {
        printf("%d. %s - Runs: %d\n", i + 1, tempPlayers[i].name, tempPlayers[i].runs);
    }

    // Sort players by wickets in descending order
    memcpy(tempPlayers, players, sizeof(Player) * playerCount);
    
    for (int i = 0; i < playerCount - 1; i++) {
        for (int j = 0; j < playerCount - i - 1; j++) {
            if (tempPlayers[j].wickets < tempPlayers[j + 1].wickets) {
                Player temp = tempPlayers[j];
                tempPlayers[j] = tempPlayers[j + 1];
                tempPlayers[j + 1] = temp;
            }
        }
    }

    printf("\nTop 3 Players by Wickets:\n");
    for (int i = 0; i < 3 && i < playerCount; i++) {
        printf("%d. %s - Wickets: %d\n", i + 1, tempPlayers[i].name, tempPlayers[i].wickets);
    }
}


int main() {
    int choice;
    do {
        printf("\n- Player Management System -\n");
        printf("1. Add Player\n");
        printf("2. Remove Player\n");
        printf("3. Search Player\n");
        printf("4. Update Player\n");
        printf("5. Display All Players\n");
        printf("6. Display Top Players\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addPlayer(); 
			break;
            case 2: removePlayer();
			 break;
            case 3: searchPlayer();
			 break;
            case 4: updatePlayer();
			 break;
            case 5: displayPlayers(); 
			break;
            case 6: displayTopPlayers();
			 break;
            case 7: printf("Exiting...\n"); 
			break;
            default : printf("Invalid choice!\n");
        }
    } while (choice != 7);

    return 0;
}