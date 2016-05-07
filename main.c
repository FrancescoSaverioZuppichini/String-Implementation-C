//
//  main.c
//  String_Implementation
//
//  Created by Francesco  on 03/05/16.
//  Copyright © 2016 Francesco Saverio Zuppichini. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#include "my_string.h"

int main(int argc, const char * argv[]) {
    my_string * my_new_string;
    char * string1 = "Lorem ipsum dolor sit amet, consectetur ...";
    int i;
    
    my_new_string = my_string_init();
//    my_string_add(my_new_string, 'a');
//    my_string_add(my_new_string, 'b');
//    my_string_add(my_new_string, '\0');
//    printf("%s\n",get_my_string(my_new_string));
//
//    my_string_erase(my_new_string);
    my_string_add(my_new_string, 'x');
    my_string_add(my_new_string, 'y');
    my_string_add(my_new_string, 'y');
    printf("%s\n",get_my_string(my_new_string));

//    my_string_add(my_new_string, '\0');
    
    my_string_erase(my_new_string);
    my_string_add_str(my_new_string, "ciao");
    printf("ciao: %s\n",get_my_string(my_new_string));

    for (i = 0; i< strlen(string1) + 1; i++) {
        my_string_add(my_new_string, string1[i]);
    }
    
    
    printf("%s\n",get_my_string(my_new_string));
    printf("size: %zu\n",my_string_get_size(my_new_string));
    printf("strlen: %lu\n",strlen(get_my_string(my_new_string)));

    printf("cap %zu\n",my_string_get_cap(my_new_string));
    
    my_string_copy_str(my_new_string, string1);
    printf("%s\n",get_my_string(my_new_string));

    my_string_destroy(my_new_string);
    return 0;
}
