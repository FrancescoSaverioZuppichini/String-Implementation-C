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
This will add 'a' to your String, remember to always add the string delimiter in the end ('\0')

####Copy a string to my_string:

```
char * string1 = "Hey i'm a normal string";
my_string_copy_str(<your_my_string>, string1);

```

####Reset a my_string:
You can reset a my_string in order to be overritten:
After the execution of this code

```
char * string1 = "Hey i'm a normal string";
my_string_copy_str(<your_my_string>, string1);

```
The actual string is *<your_my_string>* will be *"Hey i'm a normal string"*. But what if know we want to use the same *my_string* and just add two characters? We can reset the

#####Front pop
```
 sll_pop_front(<your_sll>);

```
#####Back pop
```
sll_pop_back(<your_sll>)
```
Every pop method returns the node popped


####Remove an element

```
sll_remove(<your_sll>,&<your_key>)
```

It returns the element removed

####Get an element:

```
sll_get(<your_sll>,&<your_key>);
```
It returns the getted element

####Destroy the list
```
sll_destroy(<your_sll>);
```
####Mapping the list
You can perfom an *action* function on every evelement by calling:

```
sll_map(<your_list>,&<your_function>);

```

The signature of the function must be 

```
void <your_action_function>(void *)
```

Example:
Assume you have a SLL of integer an you want to double every element, create a function:

```
void double_data(void *node){
    *get_data(node,int) *=2;
}

```
And call the map method:

```
sll_print(<your_int_sll>, &my_print);
```
####Get data from a node
The macro *get_data*  returns the casted pointer to the data of a given node

```
get_data(<node>,<type>)
```

Example:
Assume we have a node with a *int* data, we can print it like that:

```
printf("%i\n",*get_data(node,int));
```

####Example file
You can find an example in *main.c*

