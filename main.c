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
    char * string1 = "ciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene test testciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene tciao come stai tutto bene test tes stai tutto bene test tes stai tutto bene test tes stai tutto bene t";
    int i;
    
    my_new_string = my_string_init();
    
    for (i = 0; i< strlen(string1); i++) {
        my_string_add(my_new_string, string1[i]);
    }
    
    printf("%s\n",get_my_string(my_new_string));
    printf("size: %zu\n",my_string_get_size(my_new_string));
    printf("strlen: %lu\n",strlen(get_my_string(my_new_string)));

    printf("cap %zu\n",my_string_get_cap(my_new_string));

    my_string_destroy(my_new_string);
    return 0;
}
