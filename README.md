# Display colors in c

Litle libray using the utility `tput`, that utility is for get information from the database of the
terminal and we can use that for print color and styles.

## Colors

-   Black
-   Red
-   Green
-   Yellow
-   Blue
-   Purple
-   Cyan
-   White

## Styles

-   Bold
-   Underline
-   Background

## Simple usage

```c
#include <stdio.h>

#include "color-c/color.h"

int main (void) {
  color(RED); // Only color for text.
  bg(GREEN); // Only color for background.
  bold(); // Just that.
  printf("Text bold in red with a background green.\n");
  
  color_reset(); // Set to default terminal color.
  return 0;
}
```
