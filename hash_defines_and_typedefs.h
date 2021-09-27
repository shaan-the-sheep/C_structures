#ifndef _HASH_DEFINES_AND_TYPEDEFS_
#define _HASH_DEFINES_AND_TYPEDEFS_

// hash defines are simply replacement literals, They have no type.
// They just replace 
#define MY_AGE   18
// or better still use brackets so that in an equation the thing keeps its integrity
#define MY_ADDRESS   ("74 Rugby Avenue")


/*
 * TYPEDEFS (Type Definition)
 * With typedef you can assign a new name to a type that is already defined
 * This is part of the actual C language (not a preprocessor thing)
 */

// Simple cases
typedef char byte;
typedef unsigned int uint_32;

// more complex cases usually involve structure types

// Basic way to define a struct. Both words 'struct my_struct_t' are needed
struct my_struct_t {
    int x;
    int y;
};

// To make it easier to use, we can re-define the above struct using typedef
typedef struct my_other_struct_t {
    int x;
    int y;
} my_new_s_t;


// Weird gotcha. If the typedef is not there then we're actually creating a
// variable (a object) just line " int x;".
// We're not  defining a new type.
struct my_other2_struct_t {
    int x;
    int y;
} an_object;


struct {
    int x;
    int y;
} an_object_again;

#endif