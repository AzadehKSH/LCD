
#include <mega16a.h>
#include <stdio.h>
#include <delay.h>
#include <alcd.h>

void main(void)
{
int i;
char str[33];
 lcd_init(16);
while (1)
    {
    lcd_gotoxy(i,0) ; 
    for(i=0;i<10;i++){  
   lcd_gotoxy(0,1) ; 
   lcd_putsf("azadeh"); 
   sprintf(str,"x=%d",i);
   lcd_puts(str) ;
   delay_ms(500);
   lcd_clear();
   }
    }
}
