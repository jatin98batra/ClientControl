
//Parse the args
//Sanity checks 
//Send the json to the backend!
#include<stdio.h>
#include"log.h"
#include"commander.h"


static command parse_args(int argc,char *argv[])
{
    
    command temp;
    intialize_command(&temp);


}
int main(int argc,char *argv[])
{
    command ret;
    ret=parse_args(argc,argv);

    if(ret.filled <=0 )
        DEBUG_EXIT("Parser reported error!");


return 0;
}
