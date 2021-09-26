
#include <stdio.h>
#include "my_fancy_struct.h"


void print_my_fancy_struct(struct my_fancy_struct mfs)
{
    printf("In main: print mfs fields:\n");
    printf("\t%d\n", mfs.x);
    printf("\t%c\n", mfs.c);
    printf("\t%s\n", mfs.pS);
}

// ToDo
//void print_my_fancy_struct2()  // pass in a ptr to the array od structs & print each one


void main()
{
char a_str[30] = "stupid string";
struct my_fancy_struct mfs;

// populate our struct. This is one way to define the field values
mfs.x = 10;
mfs.c = 'Z';
mfs.pS = a_str;
print_my_fancy_struct(mfs);

// Define another my_fancy_struct with values defined at the same time
struct my_fancy_struct mfs2 = {.x = 3, .c = 'M', .pS = a_str};
print_my_fancy_struct(mfs2);

// Let's store LOCALY (ie on the stack) a bunch of mfs 'objects' in an array
// We could define the field values here just like for mfs2
struct my_fancy_struct arr[2] = {
    {.x=1, .c='q', .pS=a_str},
    {.x=2, .c='y', .pS=a_str},
};

// Print our array of structs using print_my_fancy_struct()
// But we need the num of items in the array!!
int num_of_elements_in_arr = sizeof(arr) / sizeof(arr[0]);
for(int i=0; i < num_of_elements_in_arr; i++)
    print_my_fancy_struct(arr[i]);

// call a better way to pass an array of structs, using pointers
print_my_fancy_struct2
}