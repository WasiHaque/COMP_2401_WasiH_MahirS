#include "subsystem.h"
#include <string.h>

/*
    This file should contain the implementations for Subsystem specific functionality.
    Initialization, printing, setting and getting data and statuses.
*/


int subsys_init(Subsystem *subsystem, const char *name, char status) {

    //null checker case for name and subsys
    if (subsystem == NULL){
        return ERR_NULL_POINTER;
    }
    
    if  (name == NULL) {
        return ERR_NULL_POINTER;
    }

    //copy till the length of the name for safe 
    strncpy(subsystem->name, name, MAX_STR - 1);

     // manually add null-terminating string 
    subsystem->name[MAX_STR - 1] = '\0';  
    subsystem->status = status;

    //initiate data to 0
    subsystem->data = 0;  

    return ERR_SUCCESS;
}
