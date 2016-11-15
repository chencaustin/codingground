//***********************************************************************************
//  main.cpp
//  LinkedList_Project
//
//  Created by Karlina Beringer on June 12, 2014.
//  This driver implements the LinkedList class.
//***********************************************************************************
#include <iostream>
#include <string>
#include "LinkedList.h"
using namespace std;

int main()
{
    //2.5 Sum Lists:
    /*
        You have two numbers represented by a linked list, where each node contains 
        a single digit. The digits are stored in reverse order, such that the 1 's 
        digit is at the head of the list. Write a function that adds the two numbers 
        and returns the sum as a linked list.
    */
    
    // STEP 1: Create some unlinked song nodes.
    node * A = new node;    A -> song = "We Are";    A -> artist = "Vertical Horizon";
    A->number = 7;
    
    node * B = new node;    B -> song = "I Stand Alone";    B -> artist = "Godsmack";
    B->number = 1;
    
    node * C = new node;    C -> song = "Heir Apparent";    C -> artist = "Opeth";
    C->number = 6;
    
    node * D = new node;    D -> song = "Fear of the Dark";    D -> artist = "Iron Maiden";
    D->number = 5;
    
    node * E = new node;    E -> song = "Blue Monday";    E -> artist = "New Order";
    E->number = 9;
    
    node * F = new node;    F -> song = "The Moth";    F -> artist = "Aimee Mann";
    F->number = 2;
    
    LinkedList listA;
    listA.insertNode(A, 1);
    listA.insertNode(B, 2);
    listA.insertNode(C, 3);
    
    LinkedList listB;
    listB.insertNode(D, 1);
    listB.insertNode(E, 2);
    listB.insertNode(F, 3);
    
    LinkedList listC;
    
    listA.printNumber(); //617
    listB.printNumber(); //295
    
    listC.addNumber(listA,listB,listC); //912
    
    // This is the way to grab the 2nd digit
    //cout << "HERE: " << endl;
    //cout << 18 / 10 % 10 << endl; // Gives 1
    //cout << 18 % 10 << endl;      // Gives 8
    
    
    /*
    // STEP 2: Build a list of three song nodes by appending to end of list.
    LinkedList myList;
    myList.insertNode(A, 1);
    myList.insertNode(B, 2);
    myList.insertNode(C, 3);
    myList.insertNode(D, 4);
    myList.printList();
    
    // STEP 3: Insert a node into middle of list.
    myList.insertNode(E, 2);
    myList.printList();
    
    // STEP 4: Insert node at the front of list.
    myList.insertNode(F,1);
    myList.printList();
    
    // STEP 5: Remove the last node from the list.
    myList.removeNode(6);
    myList.printList();
    
    // STEP 6: Remove the first node from the list.
    myList.removeNode(1);
    myList.printList();
    
    // STEP 7: Remove a node from the middle of the list.
    myList.removeNode(3);
    myList.printList();
    */
    
    return 0;
}
