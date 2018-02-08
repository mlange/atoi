#include <moca.h>

#include <stdio.h>
#include <stdlib.h>

#include <mocagendef.h>
#include <mocaerr.h>
#include <mislib.h>
#include <oslib.h>
#include <mxmllib.h>


void main(int argc, char *argv[])
{

    printf("atoi(\"10\"): %d\n", atoi("10"));
    printf("atoi(NULL): %d\n", atoi(NULL));

    exit(0);
}
