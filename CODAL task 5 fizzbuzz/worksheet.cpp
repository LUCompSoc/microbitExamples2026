#include "MicroBit.h"
 
MicroBit uBit;
int count = 0;
 
void onButtonA(MicroBitEvent e)
{
    count++;
    if (???????) {
        uBit.display.print("FizzBuzz", 400);
    }
    ?????Fill in the rest of the code???????
}
int main()
{
    uBit.init();
    uBit.messageBus.listen(MICROBIT_ID_BUTTON_A, MICROBIT_BUTTON_EVT_CLICK, onButtonA);
    release_fiber();
}
 