#String IMplementation C [![Build Status](https://travis-ci.org/FrancescoSaverioZuppichini/String-Implementation-C.svg?branch=master)](https://travis-ci.org/FrancescoSaverioZuppichini/String-Implementation-C)
##A String Object implementation

### *Implemented by Francesco Saverio Zuppichini*

###How to use it
```
#include "my_string.h"
```
In your source file 
####Create a new String
```
my_string * my_new_string =  my_string_init();
```

####Use the API method 
All the API method are defined in *my_string.h*
#####Add a char to my_string
```
my_string_add(<your_my_string>,'a');
```
This will add 'a' to your String, my_string automatically add the delimiter '\0'.
#####Add a string to my_string
```
my_string_add_str(<your_my_string>,"hi!");
```
This will add "hi" to your String
#####Copy a string to my_string:

```
 my_string_copy_str(<your_my_string>, "test!!");

```

This will remove and add *"test!!"* in *your\_my\_string>*


#####Reset a my_string:
You can reset a my_string in order to be overritten:
After the execution of this code

```
char * string1 = "Hey i'm a normal string";
my_string_copy_str(<your_my_string>, string1);

```
The string *<your_my_string>* will be *"Hey i'm a normal string"*. But what if know we want to use the same *my_string* and just add two characters? We can reset by executing

```
my_string_erase(<your_my_string>);
my_string_add(<your_my_string>,'a');
my_string_add(<your_my_string>,'a');

```
Now *your\_my\_string* will hold "aa"

###Destroy a my_string

```
my_string_destroy(<your_my_string>);

```

####Example file
You can find an example in *main.c*

