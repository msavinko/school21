#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(value) ({int v= value; if (value < 0) v=value*(-1); v;})

#endif
