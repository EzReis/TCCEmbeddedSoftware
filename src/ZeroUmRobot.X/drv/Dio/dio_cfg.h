/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef DIO_CFG_H
#define	DIO_CFG_H


//#include <xc.h> // include processor files - each processor file is guarded.  
//#include <stdint.h>


typedef enum 
{
    STD_LOW=0,
    STD_HIGH=1,
}Dio_LevelType;
            
typedef enum 
{
}Dio_ChannelType;           
        
typedef enum 
{
}Dio_GroupType;

typedef enum{
            DIO_PORTA,
            DIO_PORTB,
            DIO_PORTC,
            DIO_PORTD,
            DIO_PORTE,
            
            /*Need to be in the last position*/
            DIO_MAXPORTS     
}Dio_PortType;            
            

#endif DIO_CFG_H;
            
