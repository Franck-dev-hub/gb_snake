/* ===== INCLUDES ===== */
/* Native */
#include <stdio.h>

/* gbdk 2020 */
#include <gb/gb.h>
#include <gbdk/console.h>

/* Custom */
#include "helpers.h"
#include "screen_title.h"

void screen_title(void)
{
	clear_screen();
	gotoxy(4, 5);
	printf("-- Snake --");

	gotoxy(3, 15);
	printf("- Press START -");
	waitpad(J_START);
	waitpadup();
}
