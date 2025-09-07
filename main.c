/* gbdk 2020 */
#include <gb/gb.h>

/* Custom */
#include "game.h"
#include "screen_title.h"

void main(void) {
	while (1)
	{
		screen_title();
		game();

		waitpad(J_START);
		waitpadup();
	}
}
