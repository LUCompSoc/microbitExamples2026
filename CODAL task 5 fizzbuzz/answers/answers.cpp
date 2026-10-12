#include "MicroBit.h"
#include "samples/Tests.h"
 
MicroBit uBit;
int count = 0;
 
void onButtonA(MicroBitEvent e)
{
    count++;
    if (count % 3 == 0 && count % 5 == 0) {
        uBit.display.print("FizzBuzz", 400);
    }
    else if (count % 3 == 0) {
        uBit.display.print("Fizz", 400);
    }
    else if (count % 5 == 0) {
        uBit.display.print("Buzz", 400);
    }
    else {
        uBit.display.print(count, 400);
    }
}
int main()
{
    uBit.init();
    uBit.messageBus.listen(MICROBIT_ID_BUTTON_A, MICROBIT_BUTTON_EVT_CLICK, onButtonA);
    release_fiber();
}