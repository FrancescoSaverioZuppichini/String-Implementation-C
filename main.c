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
    char * string1 = "Lorem ipsum dolor sit amet, consectetur ..Lorem ipsum dolor sit amet, consectetur ..Lorem ipsum dolor sit amet, consectetur ..Lorem ipsum dolor sit amet, consectetur ..Lorem ipsum dolor sit amet, consectetur ..Lorem ipsum dolor sit amet, consectetur ...";
    int i;
    char c;
    
    my_new_string = my_string_init();
    my_string_add(my_new_string, 'a');
    my_string_add(my_new_string, 'b');
    my_string_add(my_new_string, 'b');
    my_string_add(my_new_string, '\0');
    printf("%s\n",get_my_string(my_new_string));
    my_string_erase(my_new_string);
    my_string_add(my_new_string, 'x');
    my_string_add(my_new_string, 'y');
    my_string_add(my_new_string, 'y');
    printf("xyy:%s\n",get_my_string(my_new_string));

    
    my_string_erase(my_new_string);
    my_string_add_str(my_new_string, "ciao");
    printf("After reset ciao: %s\n",get_my_string(my_new_string));
    my_string_add_str(my_new_string, "ciao");
    printf("added another ciao: %s\n",get_my_string(my_new_string));
    
    my_string_erase(my_new_string);
    /* we can copy a string like that */
    for (i = 0; i< strlen(string1) + 1; i++) {
        my_string_add(my_new_string, string1[i]);
    }
    printf("loop copying: %s\n",get_my_string(my_new_string));

    my_string_erase(my_new_string);
    my_string_copy_str(my_new_string, string1);
    /* or like that  */
    
    printf("my_string_copy_str: %s\n",get_my_string(my_new_string));
    
    my_string_add(my_new_string, 'Y');
    printf("added Y: %s\n",get_my_string(my_new_string));

    printf("size: %zu\n",my_string_get_size(my_new_string));
    printf("strlen: %lu\n",strlen(get_my_string(my_new_string)));

    printf("cap %zu\n",my_string_get_cap(my_new_string));
    my_string_erase(my_new_string);
//    std test
    while((c = getchar()) != EOF){
        my_string_add(my_new_string,c);
    }
    
    printf("%s\n",get_my_string(my_new_string));

    my_string_destroy(my_new_string);
    
    return 0;
}
