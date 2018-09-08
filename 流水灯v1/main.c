#include <8051.h>
void delaySecond(unsigned char second);
void delayMs(unsigned int millsecond);
void  main()
{
   P2=0x0;
   while(1)
  {
    P2=P2<<1;
    P2=(P2==0x0)?0x1:P2;
    delaySecond(1);
  }
}
