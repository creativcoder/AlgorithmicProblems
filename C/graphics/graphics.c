#include <stdio.h>
#include <malloc.h>
#include <math.h>
#include <unistd.h>

#include "gfx.h"

void window_wait();

/*typedef struct Point {
int x;
int y;
} Point;

Point* new_point(int x,int y){
	Point *p = (Point*)malloc(sizeof(Point));
	p->x = x;
	p->y = y;
}*/

void put_pixel(int x,int y) {
	gfx_point(x,y);
}

void log_int(char *tag,int num) {
	printf("%s: %d\n",tag,num);
}

void log_float(char *tag,int num) {
	printf("%s: %d\n",tag,num);
}

int round_cod(float *x) {
	return (int)(*x + 0.5);
}

void simple_plot(int x,int y,float slope) {
	printf("Simple Line plot (y=mx+c))");
	put_pixel(x,y);
	int i;
	int src_x = x;
	int src_y = y;
	for(i=0;i<100;i++) {
		++src_x;
		src_y = slope*src_x + 0;
		put_pixel(src_x,src_y);
	}
}

void bresenham(int xa,int ya,int xb,int yb) {
	printf("Bresenham's Line drawing algorithm");
	char c;
	put_pixel(xa,ya);
	int i;
	int del_x = abs(xb - xa);
	int del_y = abs(yb - ya);
	int p0 = 2*del_y - del_x;
	printf("%d\n",p0 );
	for(i=1;i<xb;i++) {
		if (p0 < 0) {
			xa = xa + 1;
			put_pixel(xa,ya);
			p0 = p0 + 2*del_y;
		} else {
			xa = xa + 1;
			ya = ya + 1;
			put_pixel(xa,ya);
			p0 = p0 + 2*del_y - 2*del_x;
		}
	}
}

void window_wait() {
	char c;
	while(1) {
		c = gfx_wait();
		if (c == 'q') break;
	}
}

int main() {
int width = 800;
int height = 600;
gfx_open(width,height,"Graphics Algorithms");
gfx_color(0,200,100);
int src_x = 20,
	src_y = 10,
	dest_x = 30,
	dest_y = 18;
bresenham(src_x,src_y,dest_x,dest_y);
/*simple_plot(200,200,0.5);*/
window_wait();
}
