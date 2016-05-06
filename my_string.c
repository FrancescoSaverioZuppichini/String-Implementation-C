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
    if(!my_new_string)
        return NULL;
    my_new_string->cap = MIN_CAP;
    my_new_string->size = 0;
    my_new_string->string = malloc(sizeof(my_new_string->cap));
    if(!my_new_string->string)
        return NULL;
    return my_new_string;
}

char *  my_string_add(my_string * this,char el){
    if(this->size == this->cap){
        this->cap *= 2;
        this->string = realloc(this->string,this->cap);
        if(!this->string)
            return NULL;
    }
    this->string[this->size] = el;
    this->size++;
    return this->string;
}

char * my_string_copy_str(my_string * this, char * src){
    size_t new_size;
    int i;
    new_size = strlen(src) + 1;
    
    my_string_erase(this);
    
    for(i = 0; i < new_size; i++){
        my_string_add(this, *src + i);
    }
   
    return this->string;

}

void my_string_erase(my_string *this){
    this->size = 0;
}

void  my_string_destroy(my_string * this){
    free(this->string);
    free(this);
}

size_t   my_string_get_size(my_string * this){
    return this->size;
}

size_t   my_string_get_cap(my_string * this){
    return this->cap;
}