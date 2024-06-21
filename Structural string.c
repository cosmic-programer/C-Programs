#include <stdio.h>

// Defining a structure to hold employee address details
struct EmpAddress {
    char *ename;        // Employee name (string pointer)
    char stname[20];    // Street name (array of characters)
    int pincode;        // Pincode (integer)
} 

// Initializing an instance of the structure with data
employee = {"John Alter", "Court Street \n", 654134}, *pt = &employee;

int main() 
{
    
    printf(" %s from %s \n\n", pt->ename, (*pt).stname);
    return 0;
}

