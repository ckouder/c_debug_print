#pragma once
#include <stdio.h>

# ifdef DEBUG
# define COLOR_RED      "\033[31m"
# define COLOR_GREEN    "\033[32m"
# define COLOR_YELLOW   "\033[33m"
# define COLOR_BLUE     "\033[34m"
# define COLOR_MAGENTA  "\033[35m"
# define COLOR_CYAN     "\033[36m"
# define COLOR_RESET    "\033[0m"
# define DEBUG_PRINT(fmt, args...) do { fprintf(stderr, fmt"\n", ## args); } while (0)
# define ENTER_FUNC(fmt, args...) do { \
    fprintf(stderr, \
            COLOR_CYAN \
            "---------- " fmt " begin ----------\n"\
            COLOR_RESET,\
        ## args); \
} while (0)
# define LEAVE_FUNC(fmt, args...) do { \
    fprintf(stderr, \
            COLOR_YELLOW \
            "---------- " fmt " end ----------\n"\
            COLOR_RESET,\
        ## args); \
} while (0)
# else
# define DEBUG_PRINT(fmt, args...) do {  } while (0)
# define ENTER_FUNC(fmt, args...) do {  } while (0)
# define LEAVE_FUNC(fmt, args...) do {  } while (0)
# endif
