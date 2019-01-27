#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include<math.h>


void main()
{
	double PI=3.121592654;
	float an,anm;
	int p[20];
	int i;
	int m,n;
	int d;
	int x=50,y=120;
	int r,s;
	int s1,s2,s3;
	int c;
	int gd = DETECT,gm;

	for(m=1;m>0;m++)
	{
		printf("Circle(1) Triangle(2) Square(3) Rectangle(4) Pentagon(5) Hexagon(6) Octagon(7) : \n");
		scanf("%d",&c);

		switch(c)
		{
		case 1: //Circle
			wronge:
			printf("\nRadius(1) or Diameter(2) : ");
			scanf("%d",&d);

			if(d==1) //Radius
			{	
				printf("\nEnter the radios : ");
				scanf("%d",&r);
				if(r<1)
					{
						printf("Wrong input \n ");
						goto wronge;
					}
			}
			else if(d==2) //Diameter
			{
				printf("\nEnter diameter : ");
				scanf("%d",&r);
				if(r<1)
					{
						printf("Wrong input \n ");
						goto wronge;
					}
				r=r/2;
			}
			else
			{
				printf("Wrong input \n ");
				goto wronge;
			}
			
			initgraph(&gd,&gm,"C:\\TC\\BGI");
			circle(5+r,y+100,r);
			break;

		case 2: //Triangle
			wrong_2:
			printf("\nEnter the size of sides : ");
			printf("Equilateral triangle(1), Right angle triangle(2), Isosceles triangle(3) : ");
			scanf("%d",&s);
			switch(s)
			{
				case 1: //Equilateral
					printf("Enter the length of side : ");
					scanf("%d",&r);
					if (r<1)
					{
						printf("Wrong input !");
						goto wrong_2;
					}
					initgraph(&gd,&gm,"C:\\TC\\BGI");
					while(x<r+5)
						x++;
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

				case 2: //Right angle
					printf("Enter ? Base & height(1), Base & hypotenuses(2), Height & Hypotenuses(3) : ");
					scanf("%d",&d);
					if(d==1)
					{
						printf("\nEnter the Base & height : ");
						scanf("%d%d",&s1,&s2);
						if(s1<1 || s2<1 )
						{
							printf("Wrong input !\n");
							goto wrong_2;
						}
						initgraph(&gd,&gm,"C:\\TC\\BGI");
						p[0]=x;
						p[1]=y;

						p[2]=x+s1;
						p[3]=y;

						p[4]=x;
						p[5]=y+s2;

						p[6]=x;
						p[7]=y;

						drawpoly(4,p);
						break;
					}
					else if(d==2)
					{
						printf("\nEnter the Base & hypotenuses : ");
						scanf("%d%d",&s1,&r);
						if (s1<1 || r<1)
						{
							printf("Wrong input !\n");
							goto wrong_2;
						}
						initgraph(&gd,&gm,"C:\\TC\\BGI");

						s2 = sqrt((r*r) - (s1*s1));

						p[0]=x;
						p[1]=y;

						p[2]=x+s1;
						p[3]=y;

						p[4]=x;
						p[5]=y+s2;

						p[6]=x;
						p[7]=y;

						drawpoly(4,p);
						break;
					}
					else if(d==3)
					{
						printf("\nEnter the Base & hypotenuses : ");
						scanf("%d%d",&s2,&r);
						if(s2<1 || r<1)
						{
							printf("Wrong input !\n");
							goto wrong_2;
						}
						initgraph(&gd,&gm,"C:\\TC\\BGI");

						s1 = sqrt((r*r) - (s2*s2));

						p[0]=x;
						p[1]=y;

						p[2]=x+s1;
						p[3]=y;

						p[4]=x;
						p[5]=y+s2;

						p[6]=x;
						p[7]=y;

						drawpoly(4,p);
						break;
					}
					else
					{
						printf("Wrong input !\n");
						goto wrong_2;
					}


				case 3: //Isosceles
					printf("Enter Base & Height(1), Base & common angle(2) ");
					scanf("%d",&d);
					switch(d)
					{
						case 1:
							printf("\nEnter Base and Height : " );
							scanf("%d%d",&s1,&s2);
							if(s1<1)
							{
								printf("Wrong input !\n");
								goto wrong_2;
							}
							if(s2<1)
							{
								printf("Wrong input !\n");
								goto wrong_2;
							}
							p[0]=x;
							p[1]=y;
							
							p[2]=x+s1;
							p[3]=y;
							
							p[4]=x+(s1/2);
							p[5]=y+s2;
							
							p[6]=x;
							p[7]=y;
							initgraph(&gd,&gm,"C:\\TC\\BGI");
							drawpoly(4,p);
							break;
							
						case 2:
						
							printf("\nEnter Base and common side: " );
							scanf("%d%d",&s1,&s3);
							
							printf("Enter common angle (degree) : ");
							scanf("%f",&an);

							if(s1<1)
							{
								printf("Wrong input (base) !\n");
								goto wrong_2;
							}
							
							if(s3<1)
							{
								printf("Wrong input (common side) !\n");
								goto wrong_2;
							}							
							
							if(an<1)
							{
								printf("Wrong input (angle) ");
								goto wrong_2;
							}
							
							anm=an*(PI/180);
							s2 = s3*sin(anm);


							p[0]=x;
							p[1]=y;
							
							p[2]=x+s1;
							p[3]=y;
							
							p[4]=x+(s1/2);
							p[5]=y+s2;
							
							p[6]=x;
							p[7]=y;
							
							initgraph(&gd,&gm,"C:\\TC\\BGI");
							drawpoly(4,p);
							break;
					
						default:
							printf("Wrong input ! ");
							goto wrong_2;
					break;
					}
				}
				break;
				
			break;

		case 3:
			wrong_3: //Square 
			printf("\nEnter the size of sides : ");
			scanf("%d",&r);
			initgraph(&gd,&gm,"C:\\TC\\BGI");
			while(x<r+5)
				x++;
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


		case 4: // Rectangle
			wrong_4:
			printf("\nEnter the length and berth : ");
			scanf("%d%d",&r,&s);
			if(r<1 || s<1)
				{
					printf("Wrong input \n ");
					goto wrong_4;
				}
			initgraph(&gd,&gm,"C:\\TC\\BGI");
			while(x<r+5)
				x++;
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

		case 5: //Pentagon
			wrong_5:
			printf("\nEnter the size of sides : ");
			scanf("%d",&r);
			if(r<1)
				{
					printf("Wrong input \n ");
					goto wrong_5;
				}
			
			initgraph(&gd,&gm,"C:\\TC\\BGI");
			while(x<r+5)
				x++;
			
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

		case 6: //Hexagon
			wrong_6:
			printf("\nEnter the size of sides : ");
			scanf("%d",&r);
			if(r<1)
				{
					printf("Wrong input \n ");
					goto wrong_6;
				}
			initgraph(&gd,&gm,"C:\\TC\\BGI");
			
			while(x<r+5)
				x++;
			
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

		case 7: //Octagon
			wrong_7:
			printf("\nEnter the size of sides : ");
			scanf("%d",&r);
			if(r<1)
				{
					printf("Wrong input \n ");
					goto wrong_7;
				}
			initgraph(&gd,&gm,"C:\\TC\\BGI");
			
			while(x<r+5)
				x++;
			
			p[0]=x;
			p[1]=y;

			p[2]=x+r;
			p[3]=y;

			p[4]=p[2]+r*cos(PI/4);
			p[5]=y+r*sin(PI/4);

			p[6]=p[4];
			p[7]=p[5]+r;

			p[8]=p[2];
			p[9]=p[7]+r*cos(PI/4);

			p[10]=x;
			p[11]=p[9];

			p[12]=x-r*sin(PI/4);
			p[13]=p[7];
			
			p[14]=p[12];
			p[15]=p[5];
			
			p[16]=x;
			p[17]=y;

			drawpoly(8,p);
			break;
		}
		getch();
		closegraph();
		printf("Exit(0) or continue(1) : ");
		scanf("%d",&n);
		if(n==0)
			break;
	}
}

