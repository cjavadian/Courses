/*
 * print_char.c
 *
 *  Created on: Apr 12, 2017
 *      Author: jcafiero
 *      Pledge: I pledge my honor that I have abided by the Stevens Honor System
 *
 *      Prints the elem of node as a char
 */

#include "list.h"

void print_char(struct s_node* node) {
    if (node == NULL){
        my_str("NULL");
        return;
    }
    else {
		if (node->elem == NULL){
			my_str("NULL");
			return;
		}
		else {
            my_char(*((char*)(node->elem)));
            return;
		}
    }
    
}

