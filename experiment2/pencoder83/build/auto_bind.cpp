#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->in, 8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->en, 1, SW8);
	nvboard_bind_pin( &top->seg, 7, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G);
	nvboard_bind_pin( &top->flag, 1, LD4);
}
