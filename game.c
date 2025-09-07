/* gbdk 2020 */
#include <gb/gb.h>

/* Custom */
#include "game.h"
#include "tile_set.h"
#include "tile_map.h"

void game(void)
{
	set_bkg_data(0, 5, tile_set);
	set_bkg_tiles(0, 0, 20, 18, tile_map);
	SHOW_BKG;
}
