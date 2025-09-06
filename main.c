#include <gb/gb.h>

#include "tile_map.h"
#include "tile_set.h"

void main(void) {
    set_bkg_data(0, 5, tile_set);
    set_bkg_tiles(0, 0, 20, 18, tile_map);
    SHOW_BKG;
}
