#include "subsystem.h"
#include <string.h>

/*
    This file should contain your documentation and implementations for SubsystemCollection 
    specific functionality; initialization, appending, removal, printing, finding, and filtering.
*/
int subsys_collection_init(SubsystemCollection *subsystems) {
    // Check for a null pointer
    if (subsystems == NULL) {
        return ERR_NULL_POINTER;
    }

    // Set the initial size to 0
    subsystems->size = 0;

    return ERR_SUCCESS;
}

int subsys_collection_print(SubsystemCollection *subsystems) {
    // Check for null pointer
    if (subsystems == NULL) {
        return ERR_NULL_POINTER;
    }

    // Check if the collection is empty
    if (subsystems->size == 0) {
        return ERR_NO_DATA;  // Return error code for no data
    }

    // Loop through the subsystems and print each one
    for (unsigned int i = 0; i < subsystems->size; i++) {
        subsys_print(&subsystems->subsystems[i]);
    }

    return ERR_SUCCESS;
}