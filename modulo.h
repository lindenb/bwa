#ifndef MODULO_H
#define MODULO_H

#include <stdio.h>

typedef struct {
        long total;
        long mod;
        long every;
        } modulo_t;

#define WHERE do {fprintf(stderr,"[DEBUG][%s:%d]\n",__FILE__,__LINE__);} while(0)


#endif

