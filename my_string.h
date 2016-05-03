//
//  my_string.h
//  String_Implementation
//
//  Created by Francesco  on 03/05/16.
//  Copyright © 2016 Francesco Saverio Zuppichini. All rights reserved.
//

#ifndef my_string_h
#define my_string_h

#include <stdio.h>
#include <stdlib.h>

#define MIN_CAP 2

#define get_my_string(my_string)(my_string->string)

typedef struct my_string_struct{
    int cap;
    int size;
    char *string;
}my_string;

my_string * my_string_init();
void  my_string_add(my_string *,char);
void  my_string_destroy(my_string *);
void  my_string_erase(my_string *);
int   my_string_get_size(my_string *);
int   my_string_get_cap(my_string *);

#endif /* my_string_h */
