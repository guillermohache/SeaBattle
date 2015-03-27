#include "computer.h"
#include "human.h"
#include "coord.h"
#include <stdio.h>
int x,a = 0,barcox = 0, barcoy = 0,outfield,previouscountershoot = 0,countershoot = 0 ;
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
   
    a++;
   
    countershoot = x;
    previouscountershoot = countershoot;
    
    printf("%d\n", x);
    printf(" These are the coordinates\n%d\n", c.x);
    printf("%d\n", c.y);
    
    if ( (countershoot - previouscountershoot) > 6 ) //Shoot should not be more than 5. 
    {
	printf("Error. Too many shoots\n");
	break;
	}   
    }
     
    
    if (a > 2) 
    {
    countershoot = 0;
    a = 0;
	break;
	}
   
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
