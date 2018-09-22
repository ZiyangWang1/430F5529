
#include "configuration.h"
#include "font.h"

int main( void )
{
  u32 u32Counter = 0;
  
  // Stop watchdog timer to prevent time out reset
  WDTCTL = WDTPW + WDTHOLD;

  P1SEL |= 0xC2;
  P4SEL |= 0x7F;
  
  P1DIR |= 0x3D;
  P4DIR |= 0x80;
  
  P1OUT |= 0x01;
  P1OUT &= 0xF3;
  P4OUT &= 0x7F;
  
  OledInit();
  /*OLEDª∂”≠ΩÁ√Ê*/
  DisplayChar_16X08(0,12,"326");
  DisplayChar_16X08(2,0,"DASABI");
  
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
