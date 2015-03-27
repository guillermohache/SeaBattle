#include "computer.h"
#include "human.h"
#include "coord.h"
#include <stdio.h>
int x,a = 0,barcox = 0, barcoy = 0,outfield;
int countershoot [2];
int checkinfield(int); // Check if all coordinates go into the field
Coord c;

main()
{
    srand(time(NULL));
    for ( x = 0; x < 300; x++ ) {

    computerMove();

    outfield = checkinfield (c.x);// Check if c.x is inside the field.
	if (outfield == 1)
	{
	printf("Coodinates out of field!!!!\n");
	break;}
	outfield = checkinfield (c.y);// Check if c.y is inside the field.
	if (outfield == 1)
	{
	printf("Coodinates out of field!!!!\n");
	break;}


    if( c.x == barcox && c.y == (barcoy + a)) //
    {
    tellComputerShipHurted();
    countershoot[a]=x;
    a++;
    printf("Este es el numero ordinal del intento %d\n", x);
    printf(" These are the coordinates\n%d\n", c.x);
    printf("%d\n \n", c.y);

    if (a > 2) //computerlogic has killed the ship
    {
    if ( (countershoot[2] - countershoot[1]) > 5 || (countershoot[1] - countershoot[0]) > 5 ) //Shoot should not be more than 5.
    {
	printf("Error. Too many shoots\n");
	break;
	}

    tellComputerShipKilled();
    a = 0;
	break;
	}
    }
    printf("%d\n", x);
    }

    }


int checkinfield (int a) {

	if ( a  <= -1 || a >= 6  )
	{ return 1;
    }
    else{
	return 0;
	}
	}
