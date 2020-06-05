#include<string.h>
/*
 * The command structure
 * ======================
 * This is a descriptor and will be used after filling in the whole commanding process
 * This structure is filled by the values supplied by the user
 * The structure is then parsed and converted into a json object and sent to the backend as a query
 */
#define PORT_LEN 6
#define IP_LEN 16
#define NAME_LEN 16
#define PASS_LEN 64


typedef struct command
{
   
    /*Sanity checks*/
    int filled;

    /*Recommended*/
    char target_port[6];
    char target_ip[16];
    char machine_name[16];
    char enable_pass[64]; 

    /*Aux stuff*/
    //auxilary_ip;
    //client_name;
    //problem statement
    //problem tags
    //machine tags
    //svcusr_pass;
    //



}command;


static inline int intialize_command(command *cmd)
{
    
    if(!cmd)
        DEBUG_EXIT("MEM_NOT_OCCUPIED");
        
    cmd ->filled=-1;
    memset(cmd->target_port,0,PORT_LEN);
    memset(cmd->target_ip,0,IP_LEN);
    memset(cmd->machine_name,0,NAME_LEN);
    memset(cmd->enable_pass,0,PASS_LEN);
    
    return 0;
}

