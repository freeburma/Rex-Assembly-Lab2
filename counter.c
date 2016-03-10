
#include "/home/200/ex2/lib.h"



void counter (int value, int direction)
{
        // Declaring the variables
        int i; 
        
        // Checking the value from counter_control
        if (direction == 0)
        {
                // Looping the value to value
                for (i = 0; i <= value; i++)
                {
                        // count = i; 
                        writessd (i);
                         delay100 ();
                }
                
               
        }
        
        if (direction == 1)
        {
                // Looping the value to zero
                for (i = value; i >= 0; i--)
                {
                        writessd (i);
                        
                         delay100 ();
                }
               
               
        }

}


