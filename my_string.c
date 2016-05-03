//
//  my_string.c
//  String_Implementation
//
//  Created by Francesco  on 03/05/16.
//  Copyright © 2016 Francesco Saverio Zuppichini. All rights reserved.
//

#include "my_string.h"

my_string * my_string_init(){
    my_string * my_new_string;
    
    my_new_string = malloc(sizeof(my_string));
    my_new_string->cap = MIN_CAP;
    my_new_string->size = 0;
    my_new_string->string = malloc(sizeof(my_new_string->cap));
    
    return my_new_string;
}

void  my_string_add(my_string * this,char el){
    if(this->size == this->cap){
        this->cap *= 2;
        this->string = realloc(this->string,this->cap);
    }
    this->string[this->size] = el;
    this->size++;
}

void my_string_erase(my_string *this){
    this->size = 0;
}

void  my_string_destroy(my_string * this){
    free(this->string);
    free(this);
}

int   my_string_get_size(my_string * this){
    return this->size;
}

int   my_string_get_cap(my_string * this){
    return this->cap;
}