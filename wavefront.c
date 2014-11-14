#include <stdlib.h>
#include <stdio.h>
#include "queue.h"
#include "wavefront.h"

// Austin Corotan 372

static void getNeighbors(point loc, point neigh[8]);	
 	
void wavefront(char map[HEIGHT][LENGTH], int startx, int starty){
	//init queue	
	void init();
	//init current location	
	point curr;
	//init neighbors collection	
	point neighbors[8];
	//init start location
	point start;
	//set start loc value
	start.x = startx;
	start.y = starty;
	
	int i;
	//init wavefront value
	int currentWave;
	//enqueue start	
	enqueue(start);
	
	//wavefront
	while(is_empty() == 0)	
  	{	
		curr = dequeue();
		if(map[curr.y][curr.x] == 'S'){
			currentWave = 1;
		}else{
		currentWave = (map[curr.y][curr.x]-'0') + 1;
		}
    		getNeighbors(curr, neighbors);
		
		for(i = 0; i < 8; i++){
			if(map[neighbors[i].y][neighbors[i].x] == ' '){
				char temp = (char)((int)'0') + currentWave;
				map[neighbors[i].y][neighbors[i].x] = temp;
				enqueue(neighbors[i]);	
			}
		}
				
  	}
}

//Moore neighboorhood   	 
static void getNeighbors(point loc, point neigh[8]){
	   
	neigh[0].x = loc.x + 1;
	neigh[0].y = loc.y;
	
	neigh[1].x = loc.x - 1;
	neigh[1].y = loc.y;

	neigh[2].x = loc.x;
	neigh[2].y = loc.y + 1;

	neigh[3].x = loc.x;
	neigh[3].y = loc.y - 1;

	neigh[4].x = loc.x + 1;
	neigh[4].y = loc.y + 1;
	
	neigh[5].x = loc.x - 1;
	neigh[5].y = loc.y - 1;

	neigh[6].x = loc.x - 1;
	neigh[6].y = loc.y + 1;

	neigh[7].x = loc.x + 1;
	neigh[7].y = loc.y - 1;
	
}
