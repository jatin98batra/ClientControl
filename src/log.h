#include<stdlib.h>
int static inline DEBUG_EXIT(char *msg)
{
    fprintf(stderr,"ERR:%s",msg);
    exit(-1);
}
