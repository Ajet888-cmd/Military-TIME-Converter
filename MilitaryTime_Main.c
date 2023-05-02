/*
Programmed by:
				AJET
		 	
		 		
Last modified: May 3, 2023
Version: 3.0


Description of Program: This program converts 24-hour time format 
						to 12-hour time format given hours:minutes (hhmm).

*/

/*
	Implement string restriction


*/


/* Pre-Processor Directive*/
#include<stdio.h>
#include<ctype.h>



int main(){
	
	
	/*Variable Declaration*/
	
	char lock;
	
	do{
	
	
	int key = 0;
	

	int morning;
	int hour;
	int minute;



	do{
	printf("Input a valid time (hhmm): ");
	

    scanf("%02d%02d", &hour, &minute);
    
    	printf("\n");

	if (hour > 23 || minute > 59){
	
	printf("Time not valid! \n");
	}else key = 1;
	
	}while(key == 0);
		
		
	if(hour <= 23 || minute <= 59){    
		
		
		
		/* Validate Meridian if either AM or PM*/
		if(hour <= 11){
				morning = 0;
			}
		
	    if (hour >= 12 )
	    {
	        morning = 1;//PM
	
			
	        if (hour > 12)
	        {
	            hour -= 12;
	        }
	    }
	    
		/* For 12am case condition*/
	    if (hour == 0 )
		{
		    morning = 0;//AM
		    hour = hour + 12;
		}	
	}
    
    switch(morning){
    	
    	
    	case 1: printf("%02d:%02d P.M.\n", hour, minute);
    	break;
    	
    	case 0: printf("%02d:%02d A.M\n", hour, minute);
    	break;
	}
	
	printf("Try again ? [Y]es / [N]o: ");
	scanf(" %c",&lock);
	 	printf("\n");
	lock = toupper(lock);
	
}while(lock == 'Y');
 
		return 0;
	}

    
	
/*
Programmed by:
				AJET
*/


