#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct player {
	int level;
	char name[17];

}Player;

typedef struct room {
	int minlevel, maxlevel, count;
	Player players[300];
}Room;

int main(void) {
	Player player;
	int p, m;
	scanf("%d %d", &p, &m);

	Room rooms[300]; 
	int room_count = 0;

	for (int i = 0; i < p; i++) {
		scanf("%d %s", &player.level, &player.name);

		int placed = 0; //들어갈 방이 있는지 여부 1:있, 0:없

		for (int j = 0; j < room_count; j++) {
			if (rooms[j].count < m && rooms[j].minlevel <=
				player.level && player.level <= rooms[j].maxlevel) {
				rooms[j].players[rooms[j].count] = player;
				rooms[j].count++;
				placed = 1;
				break;
			}
		}

		if (!placed) {
			rooms[room_count].minlevel = player.level - 10;
			rooms[room_count].maxlevel = player.level + 10;
			rooms[room_count].count = 1;
			rooms[room_count].players[0] = player;
			room_count++;
		}
	}

	for (int i = 0; i < room_count; i++) {
			if (rooms[i].count == m) {
				printf("Started!\n");
			}
			else {
				printf("Waiting!\n");
			}
		

		//선택정렬
		for (int j = 0; j < rooms[i].count - 1; j++) {
			for (int k = j + 1; k < rooms[i].count; k++) {
				if (strcmp(rooms[i].players[j].name, rooms[i].players[k].name) > 0) {
					Player temp = rooms[i].players[j];
					rooms[i].players[j] = rooms[i].players[k];
					rooms[i].players[k] = temp;
				}
			}
		}

		for (int j = 0; j < rooms[i].count; j++) {
			printf("%d %s\n", rooms[i].players[j].level, rooms[i].players[j].name);
		}
		}
		

	return 0;
}