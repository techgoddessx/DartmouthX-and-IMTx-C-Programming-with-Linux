#include <stdio.h>
#include <stdlib.h>
/* Your program should read two integers, between 1 and 6, representing the values of each dice.
 * If the sum is greater than or equal to 10, then you must pay a special fee (36 coins). Otherwise,
   you pay twice the sum of the values of the two dice.
 * Your program must then display the text "Special tax" or "Regular tax" followed by the amount you have to pay on the next line.
*/
int main()
{
    int result1;
    int result2;

    scanf("%d%d",&result1,&result2);

    int total;
    total = result1 + result2;

    if (total >= 10 ){
        printf("Special tax\n36");
    } else {
        printf("Regular tax\n%d",total * 2);
    }
    return 0;
}
