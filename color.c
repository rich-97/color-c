/*
 * (c) Ricardo Moreno <morenoricardo237@gmail.com>
 *
 * For more details about the license of this source code,
 * please view the file LICENSE.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "color.h"

void exec (char *cmd) {
  int status = system(cmd);

  assert(status != -1);
}

void color (short color) {
  char cmd[] = "tput setaf ";
  char dest[] = "";

  strcat(dest, cmd);
  strcat(dest, (char*) &color);
  color_reset();
  exec(dest);
}

void bg (short color) {
  char cmd[] = "tput setab ";
  char dest[] = "";

  strcat(dest, cmd);
  strcat(dest, (char*) &color);
  exec(dest);
}

inline void bold (void) {
  exec("tput bold");
}

inline void underline (void) {
  exec("tput smul");
}

inline void color_reset (void) {
  exec("printf '\e[0m'");
}
