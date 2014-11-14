#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "wavefront.h"

char maze[HEIGHT][LENGTH] = {

	"0000000000000000000000000000",
	"0 S         0              0",
	"0      000000              0",
	"0      0           0       0",
	"0      0           0       0",
	"0      0           0       0",
	"0      00000       0       0",
	"0                  0       0",
	"0                  0     F 0",
	"0000000000000000000000000000"
};


void printMaze(char maze[HEIGHT][LENGTH]){
	int i;
	int j;
	for(i = 0; i < HEIGHT; i++) {
		for(j = 0; j<LENGTH; j++) {
			printf("%c",maze[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int i;
	int j;
	int startx;
	int starty;
	printf("input:\n");
	printMaze(maze);
	for(i = 0; i < HEIGHT; i++) {
		for(j = 0; j<LENGTH; j++) {
			if(maze[i][j] == 'S') {
				starty = i;
				startx = j;
			}
		}
	}
	
	wavefront(maze, startx, starty); 
    	printf("\n");
	printf("output:\n");
	printMaze(maze);
}

