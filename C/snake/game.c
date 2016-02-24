#include <stdio.h>
#include <malloc.h>
#include <math.h>
#include <unistd.h>

#include "gfx.h"

typedef struct Point {
int x;
int y;
} Point;

Point* new_point(int x,int y){
	Point *p = (Point*)malloc(sizeof(Point));
	p->x = x;
	p->y = y;
}

void put_pixel(int x,int y) {
	gfx_point(x,y);
}

void log_msg(char *tag,int num) {
	printf("%s: %d\n",tag,num);
}

int main() {
int width = 800;
int height = 600;
gfx_open(width,height,"Snake");
gfx_color(0,200,100);
int src=0,dst=0;
asm("mov %1,%0\n\t"
"add $1,%0"
: "=r" (dst)
: "r" (src)
);
int steps,i,x,y;
char c;
Point *p1 = new_point(-3,-5);
Point *p2 = new_point(-8,10);
float dx = p1->x - p2->x;
log_msg("dx",dx);
float dy = p1->y - p2->y;
log_msg("dy",dy);
if(dx > dy)
	steps = abs(dx); 
else
	steps = abs(dy); 
float x_incr = dx / (float)steps;

float y_incr = dy / (float)steps;
for(i=0;i<steps;i++)
{
	x = x + x_incr;
	y = y + y_incr;
	put_pixel((int)x,(int)y);
}

int marker_x=width/2,marker_y=height/2;

while(1) {
	c = gfx_wait();
	if(c == 'q') break;
	if(c == 'w') put_pixel(marker_x,--marker_y);
	if(c == 's') put_pixel(marker_x,++marker_y);
	if(c == 'a') put_pixel(--marker_x,marker_y);
	if(c == 'd') put_pixel(++marker_x,marker_y);
}

}
