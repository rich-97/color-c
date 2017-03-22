/*
 * (c) Ricardo Moreno <morenoricardo237@gmail.com>
 *
 * For more details about the license of this source code,
 * please view the file LICENSE.
 */

#ifndef _COLOR_H
#define _COLOR_H

/* Colors */

#define BLACK  48
#define RED    49
#define GREEN  50
#define YELLOW 51
#define BLUE   52
#define PURPLE 53
#define CYAN   54
#define WHITE  55

/* Prototypes */

void bg (short);
void bold (void);
void color (short);
void underline (void);
void color_reset (void);

/* Privates */

void exec (char*);

#endif

