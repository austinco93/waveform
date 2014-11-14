#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "queue.h"
#define MAX_LENGTH 2000

point queue[MAX_LENGTH];

int head;
int foot;
point voidMap = {-1,-1};

//enqueue function
void enqueue(point val) {
	if((foot == (head-1)) || (head==0 && foot==MAX_LENGTH-1)) {
		printf("Queue is full");
	}
	else {
		if(foot == MAX_LENGTH) {
			foot = 0;
		}
		queue[foot] = val;
		foot++;
	}
}

//dequeue function
point dequeue() {
	if(head == foot) {
		return voidMap;
	}
	else {
		point temp = queue[head];
		queue[head] = voidMap;
		head++;
		return temp;
	}
} 


//queue init

void init() {
	head = 0;
	foot = 0;
}

//treated as a boolean is empty function. Empty returns 1 (true), not empty returns 0 (false)
int is_empty() {
    if(head == foot)
        return 1;
    else
        return 0;
}
	
