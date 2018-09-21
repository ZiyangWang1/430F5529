
#include "configuration.h"

int main( void )
{
  u32 u32Counter = 0;
  
  // Stop watchdog timer to prevent time out reset
  WDTCTL = WDTPW + WDTHOLD;

  P1SEL |= 0xFE;
  P4SEL |= 0x7F;
  
  P1DIR |= 0x01;
  P4DIR |= 0x80;
  
  P1OUT |= 0x01;
  P4OUT &= 0x7F;
  
  
  while(1)
  {
    u32Counter++;
    
    if(u32Counter == 100000)
    {
      P1OUT ^= PX_0_Location;
      P4OUT ^= PX_7_Location;
      u32Counter = 0;
    }
    
  }
  
  
  
}
