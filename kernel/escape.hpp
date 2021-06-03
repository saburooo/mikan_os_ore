#include "graphics.hpp"


// マウスのカーソルは自由に長さを決めることができないみたい。
namespace {
  const char mouse_cursor_shape[kMouseCursorHeight][kMouseCursorWidth + 1] = {
    "        @@@@@@@@@       ",
    "       @@.......@@      ",
    "      @@.........@@     ",
    "@    @@...........@@    ",
    "@@   @.............@   @",
    " @@  @@...........@@  @@",
    "  @@  @@.........@@  @@ ",
    "   @@  @@.......@@  @@  ",
    "    @@  @@@@@@@@@  @@   ",
    "     @@@@@@@@@@@@@@@    ",
    "      @@@@@@@@@@@@@     ",
    "       @@@@@@@@@@@      ",
    "       @@@@@@@@@@@      ",
    "       @@@@@@@@@@@      ",
    "       @@@@@@@@@@@      ",
    "       @@@@@@@@@@@      ",
    "       @@@@@ @@@@@      ",
    "       @@@@@ @@@@@      ",
    "       @@@@@ @@@@@      ",
    "       @@@@@ @@@@@      ",
    "       @@@@@ @@@@@      ",
    "       @@@@@ @@@@@      ",
    "       @@@@@ @@@@@      ",
    "       @@@@@ @@@@@      ",
  };
}

const PixelColor kDesktopBGColor{178, 216, 255};
const PixelColor kDesktopFGColor{71, 87, 102};

const PixelColor kTaskBarColor{255, 179, 217};
const PixelColor kStartMenuColor{217, 255, 179};
const PixelColor kWindowButtonColor{255, 217, 179};

