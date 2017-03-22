/* Simple test */

#include <stdio.h>

#include "../color.h"

int main (void) {
  color(RED);
  bold();
  bg(CYAN);
  printf("Text in red, bold and background cyan.\n");

  color_reset();
  return 0;
}
