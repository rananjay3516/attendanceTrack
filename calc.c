//Program to calculate days to attend for reaching minimum attendance requirements
#include <stdio.h>

int main(void)
	{
		//Variables and array declarations
		int attended, held;
		const double min = 70.00 ;
		double total_att, total_held ; 
		
		//Total classes in semester
		double subject [ 7 ] = { 0, 82, 85, 71, 76, 80, 77 } ;
		
		//Prior attendance - upto March 31, 2017
		double march [ 7 ] [ 2 ] = { 0, 0, 50, 63, 52, 64, 42, 57, 52, 62, 49, 61, 51, 59 } ; 
						 	  
		//Get current attendance
		printf("\nENTER CURRENT ATTENDANCE\n");
		
		for(int sub = 1; sub < 7; sub++)
			{
				printf ( "SUBJECT %i\n", sub ) ;
				printf ( "Classes attended: " ) ;
				scanf ( "%i", &attended ) ;	
				printf ( "Total classes held: " ) ;
				scanf( "%i", &held ) ;	
							  
	 			//Calculate current attendance
				total_att = attended + march [ sub ] [ 0 ] ;
				total_held = held + march [ sub ] [ 1 ] ;
				
				//Print current attendance
				printf( "\nCURRENT ATTENDANCE = %.2f %%\n", total_att/ total_held * 100.00 ) ;
				
				//Iterate over subjects to calculate required attendance
				int count_days = 0 ;
				
				while ( total_att / subject [ sub ] * 100.00 < min) 
					{
						count_days ++ ;
						total_att ++ ;	
					}
				
				printf ( "MINIMUM CLASSES = %i\n\n", count_days ) ;
			}
		
		return 0 ;
			
	}