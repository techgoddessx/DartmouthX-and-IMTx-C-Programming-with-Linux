#include <stdio.h>

/* You record the player weights as they are presented and calculate a total weight for each team to inform your bet.*/

int main(void){
	int NumOfMembers;
	int WeightTeam;

	int team1 = 0;
	int weightTeam1;

	int team2 = 0;
	int weightTeam2;

	scanf("%d\n",&NumOfMembers);

	for (int i = 0; i < NumOfMembers; i++)
	{
		scanf("%d",&weightTeam1);
		team1 = team1 + weightTeam1;
		scanf("%d",&weightTeam2);
		team2 = team2 + weightTeam2;
	}
	if (team1 > team2)
	{
		printf("Team 1 has an advantage\n");
	} else {
		printf("Team 2 has an advantage\n");
	}
	printf("Total weight for team 1: %d\n Total weight for team 2: %d",team1,team2);
	return 0;
}
