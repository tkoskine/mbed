#include "mbed.h"
#include <__cross_studio_io.h>

DigitalOut myled(LED3);

int main() {
  int i = 1;
  // pc.printf("Hello World !\n");
  while(1) {
    debug_printf("Hello 1\n");
    wait_ms(1000);
    // pc.printf("This program runs since %d seconds.\n", i++);
    debug_printf("Hello 2\n");
    myled = !myled;
  }
}
