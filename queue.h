#pragma once

#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

typedef struct{
  int x;
  int y;	
}point;
    
void init();
void enqueue(point val);
point dequeue();
int is_empty();

#endif
