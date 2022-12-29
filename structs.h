//
// Created by KenAM on 12/28/2022.
//

#ifndef UNTITLED_STRUCTS_H
#define UNTITLED_STRUCTS_H

#include <stdio.h> //NULL identifier comes from here, library for input and output
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

//Structs can only have data members
struct node{

    int data;
    int key;

    struct node *next;
    struct node *prev;
};

//points to head, defining a node type
struct node *head = NULL;

//points to tail
struct node *last = NULL;

struct node *current = NULL;

bool isEmpty(){

    return head == NULL;

}

int length(){

    int length = 0;

    for(current = head; current != NULL; current = current->next){

        length++;
    }

    return length;
}

//print nodes first to last
void print() {

    struct node *ptr = head;

    printf("\n[");

    while(ptr != NULL){

        printf("(%d,%d) ", ptr->key, ptr->data);
        ptr = ptr->next;
    }

    printf(" ]");
}

//insert at the front of the list
void insertFirst(int key, int data){

    struct node *link = (struct node*) malloc(sizeof(struct node)); //Allocates memory the size of the node pointer
    link->key = key;
    link->data = data;

    if(isEmpty()){

        last = link; //If the list is empty, make the new node the last link
    }else{

        head->prev = link; //else make the new link the prev for head
    }

    link->next = head; //next of new link points to the old head node

    head = link; //new link becomes head of list
}

//Delete first node of the list
struct node* deleteFirst(){

    struct node *tempLink = head;

    if(head->next == NULL){

        last = NULL; //If there is only one link in the list, set it equal to NULL
    }else{

        head->next->prev = NULL; //Else, delete the head of the list
    }

    head = head->next; //Set head of the list to old head's next

    return tempLink;
}
void hi(){

    printf("hi\n");
};

#endif //UNTITLED_STRUCTS_H
