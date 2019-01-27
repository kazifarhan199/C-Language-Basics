#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include<math.h>


void main()
{
	double PI=3.121592654;
	int p[20];
	int x=50,y=120;
	int r,s;
	int c;
	int gd = DETECT,gm;

	printf("Circle(1) Triangle(2) Square(3) Rectangle(4) Pentagon(5) Hexagon(6) \n");
	scanf("%d",&c);


	switch(c)
	{
	case 1:
		printf("Enter the radios");
		scanf("%d",&r);
		initgraph(&gd,&gm,"C:\\TC\\BGI");
		circle(x+100,y+100,r);
		break;

	case 2:
		printf("Enter the size of sides : ");
		scanf("%d",&r);
		initgraph(&gd,&gm,"C:\\TC\\BGI");
		p[0]=x;
		p[1]=y;
		p[2]=x+r;
		p[3]=y;
		p[4]=x+r/2;
		p[5]=y+r*sin(60);
		p[6]=x;
		p[7]=y;
		drawpoly(4,p);
		break;

	case 3:
		printf("Enter the size of sides : ");
		scanf("%d",&r);
		initgraph(&gd,&gm,"C:\\TC\\BGI");
		p[0]=x;
		p[1]=y;
		p[2]=x+r;
		p[3]=y;
		p[4]=x+r;
		p[5]=y+r;
		p[6]=x;
		p[7]=y+r;
		p[8]=x;
		p[9]=y;
		drawpoly(5,p);
		break;


	case 4:
		printf("Enter the length and berth : ");
		scanf("%d%d",&r,&s);
		initgraph(&gd,&gm,"C:\\TC\\BGI");
		p[0]=x;
		p[1]=y;
		p[2]=x+r;
		p[3]=y;
		p[4]=x+r;
		p[5]=y+s;
		p[6]=x;
		p[7]=y+s;
		p[8]=x;
		p[9]=y;
		drawpoly(5,p);
		break;

	case 5:
		printf("Enter the size of sides : ");
		scanf("%d",&r);
		initgraph(&gd,&gm,"C:\\TC\\BGI");
		p[0]=x;
		p[1]=y;

		p[2]=x+r;
		p[3]=y;

		p[4]=x+r+r*sin(PI/10);
		p[5]=y+r*cos(PI/10);

		p[6]=x+r/2;
		p[7]=p[5]+r*sin(PI/5);

		p[8]=x-r*sin(PI/10);
		p[9]=y+r*cos(PI/10);

		p[10]=x;
		p[11]=y;
		drawpoly(6,p);
		break;

	case 6:
			printf("Enter the size of sides : ");
			scanf("%d",&r);
			initgraph(&gd,&gm,"C:\\TC\\BGI");
			p[0]=x;
			p[1]=y;

			p[2]=x;
			p[3]=y+r;

			p[4]=x+r*cos(PI/6);
			p[5]=y+r+r*sin(PI/6);

			p[6]=x+2*r*cos(PI/6);
			p[7]=y+r;

			p[8]=p[6];
			p[9]=y;

			p[10]=p[8]-r*cos(PI/6);
			p[11]=p[9]-r*sin(PI/6);

			p[12]=p[0];
			p[13]=p[1];

			drawpoly(7,p);
			break;

}
	getch();
	closegraph();
}

