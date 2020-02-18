#include <windows.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#define PI 3.1416

GLint i;
GLfloat bx=15,cx=0,str=500.0,Moon=500.0;
GLfloat sr=0.0,sg=0.749,sb=1.0;



void circle1(GLdouble rad)
{
    GLint points = 50;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for( i = 0; i <=70; i++, theta += delTheta )
        {
            glVertex2f(rad * cos(theta),rad * sin(theta));
        }
    }
    glEnd();
}



void circle(float radius_x, float radius_y)
{
	int i = 0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle = 2* PI * i / 100;
			glVertex3f (cos(angle) * radius_x, sin(angle) * radius_y, 0);
		}

	glEnd();
}


void car()
{

    glColor3f(1.0, 0.8, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.52, 0.1);
    glVertex2f(-0.9, 0.1);
    glVertex2f(-0.87, 0.5);
    glVertex2f(-0.52, 0.5);
    glEnd();
    glColor3f(1.0, 0.5, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.43, 0.1, 0);
    glVertex3f(-0.52, 0.1, 0);
    glVertex3f(-0.52, 0.5, 0);
    glVertex3f(-0.46, 0.45, 0);
    glEnd();

    glColor3f(0.90, 0.75, 0.80);
    glBegin(GL_POLYGON);
    glVertex3f(-0.53, 0.5, 0);
    glVertex3f(-0.83, 0.5, 0);
    glVertex3f(-0.77, 0.9, 0);
    glVertex3f(-0.56, 0.9, 0);
    glEnd();

    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f(-0.65, 0.1, 0);
    glVertex3f(-0.65, 0.5, 0);
    glEnd();

    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f(-0.65, 0.5, 0);
    glVertex3f(-0.68, 0.9, 0);
    glEnd();

    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f(-0.75, 0.1, 0);
    glVertex3f(-0.75, 0.5, 0);
    glEnd();

    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f(-0.75, 0.5, 0);
    glVertex3f(-0.77, 0.9, 0);
    glEnd();

    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f(-0.55, 0.1, 0);
    glVertex3f(-0.55, 0.5, 0);
    glEnd();

    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f(-0.55, 0.5, 0);
    glVertex3f(-0.58, 0.9, 0);
    glEnd();

    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f(-0.6, 0.4, 0);
    glVertex3f(-0.62, 0.4, 0);
    glEnd();

    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f(-0.7, 0.4, 0);
    glVertex3f(-0.72, 0.4, 0);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(-.78, .2, 0);
    circle(0.065,0.15);
    glPopMatrix();

    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(-.5, .2, 0);
    circle(0.065,0.15);
    glPopMatrix();

    glColor3f(1.0, 1.0, 1.0);
    glPushMatrix();
    glTranslatef(-.5, .2, 0);
    circle(0.030,0.050);
    glPopMatrix();

    glColor3f(1.0, 1.0, 1.0);
    glPushMatrix();
    glTranslatef(-.78, .2, 0);
    circle(0.030,0.050);
    glPopMatrix();
}



void cloudB()

{
    //left

    glPushMatrix();
    glTranslatef(4,5.5,0);
    circle1(4);
    glPopMatrix();

    //right

    glPushMatrix();
    glTranslatef(-8,5.5,0);
    circle1(3.5);
    glPopMatrix();

    //top left

    glPushMatrix();
    glTranslatef(-3.5,9,0);
    circle1(3.5);
    glPopMatrix();

    //top right

    glPushMatrix();
    glTranslatef(1,9,0);
    circle1(3);
    glPopMatrix();

    //middle

    glPushMatrix();

    //glColor3f (1, 1 ,1);
    glTranslatef(-1.5,5.5,0);
    circle1(4);
    glPopMatrix();

}

void a()      //green tree cloud

{
    //left

    glPushMatrix();
    //glColor3f (0.195,0.800,0.195);
    glTranslatef(4,5.5,0);
    circle1(4);
    glPopMatrix();

    //right

    glPushMatrix();
    glTranslatef(-8,5.5,0);
    circle1(3.5);
    glPopMatrix();

    //top left

    glPushMatrix();
    glTranslatef(-3.5,9,0);
    circle1(3.5);
    glPopMatrix();

    //top right

    glPushMatrix();
    glTranslatef(1,9,0);
    circle1(3);
    glPopMatrix();

    //middle

    glPushMatrix();
    glTranslatef(-1.5,5.5,0);
    circle1(4);
    glPopMatrix();

}


void c()                                        //One Single Cloud
{
    glPushMatrix();
    glColor3f (1,1,1);
    glTranslatef(35,10,0);
    a();
    glPopMatrix();


    glPushMatrix();
    glColor3f (1,1,1);
    glTranslatef(28,16,0);
    a();
    glPopMatrix();

    glPushMatrix();
    glColor3f (1,1,1);
    glTranslatef(20,10,0);
    a();
    glPopMatrix();
}

void cloud()                                     // Three Cloud
{
    glPushMatrix();
    glTranslatef(-15.0,30.0,0.0);
    glScalef(0.7,0.7,0.0);
    c();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(20.0,25.0,0.0);
    glScalef(0.7,0.7,0.0);
    c();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-60.0,25.0,0.0);
    glScalef(0.7,0.7,0.0);
    c();
    glPopMatrix();
}





void rect()
{
    glRectf(-16.0, -16.0, 16.0, 16.0);
}

GLfloat ssun=0.0;

void day()
{
    glBegin(GL_POLYGON);                        // blue sky
    glColor3f(sr,sg,sb);
    glVertex3f(-50,-3,0.0);
    glVertex3f(-50,50,0.0);
    glVertex3f(80,50,0.0);
    glVertex3f(80,-3,0.0);
    glEnd();

    glPushMatrix();                             //sun
    glTranslatef(ssun,0.0,0.0);
    glTranslatef(-20.0,40.0,0.0);
    glScalef(1.0,1.5,0.0);
    glColor3f(1.0,1.0,0.0);
    circle1(3);
    glPopMatrix();
}
void road()
{

    glColor3f(0.512,0.512,0.512);
    glPushMatrix();
    glTranslatef(-70,-42,0);
    glBegin(GL_POLYGON);

    glVertex2f (-10, 0);
    glVertex2f (-10,10);
    glVertex2f (600,10);
    glVertex2f (600,0);

    glEnd();

    //glColor3f(1.0,1.0,1.0);
    //glPushMatrix();
    //glTranslatef(-70,-42,0);
    //glBegin(GL_QUADS);

    //glVertex2f (-8,-1 );
    //glVertex2f (-7,-1);
    //glVertex2f (-7,-1.5);
    //glVertex2f (-8,-1.5);
    //glVertex2f (-8,-1 );

    //glEnd();
    //glPopMatrix();
}
void night ()                                    //black sky
{
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-50,-3,0.0);
    glVertex3f(-50,50,0.0);
    glVertex3f(80,50,0.0);
    glVertex3f(80,-3,0.0);

    glEnd();
}
void moon()                                     //moon
{
    glPushMatrix();
    glTranslatef(Moon,0.0,0.0);
    glTranslatef(20.0,35.0,0.0);
    glScalef(1.0,1.5,0.0);
    glColor3f(0.996,0.976,0.800);
    circle1(3.5);
    glPopMatrix();

    glutPostRedisplay();
}

void triangle(void)
{
    glColor3f (0.137255,0.556863,0.137255);
    glBegin(GL_POLYGON);
    glColor3f (0.496,0.996,0.0);
    glVertex3f (0, 0, 0.0);
    glColor3f (0.195,0.800,0.195);
    glVertex3f (9, 13, 0.0);
    glColor3f (0.120,0.601,0.137);
    glVertex3f (18, 0, 0.0);
    glColor3f (0.120,0.601,0.137);

    glEnd();
}

void grass()
{

    glPushMatrix();
    glColor3f (0.8,0.196078,0.6);
    glTranslatef(38,16,0);
    glScalef(.1,.1,0);
    //cloud();
    glPopMatrix();

}
void tree2()
{
    glPushMatrix();
    glTranslatef(3,8,0);
    triangle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(3.5,14,0);
    glScalef(.9,.9,0);
    triangle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(4.5,20,0);
    glScalef(.8,.8,0);
    triangle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(7,26,0);
    glScalef(.5,.5,0);
    triangle();
    glPopMatrix();

    //gora

    glPushMatrix();
    glBegin(GL_POLYGON);

    glColor3f(0.36,0.25,0.20);
    glVertex3f (10, 4, 0.0);
    glVertex3f (10, 8, 0.0);
    glVertex3f (14, 8, 0.0);
    glVertex3f (14, 4, 0.0);

    glEnd();
    glPopMatrix();

}
void tree()                             //green leaves
{
    glPushMatrix();
    glColor3f (0.601,0.800,0.195);
    glTranslatef(35,10,0);
    //glColor3f (0.120,0.601,0.137);
    a();
    glPopMatrix();
    glPushMatrix();
    glColor3f (0.195,0.800,0.195);
    glTranslatef(28,16,0);
    //glColor3f (0.120,0.601,0.137);
    a();
    glPopMatrix();
    glPushMatrix();
    glColor3f (0.195,0.800,0.195);
    glTranslatef(20,10,0);
    glColor3f (0.120,0.601,0.137);
    a();
    glPopMatrix();
}
void treebody()                         //tree body
{
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(0,0,0);
    glVertex3f(2.5,2,0);
    glVertex3f(4.0,-2,0);
    glVertex3f(1,-4,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(7,2,0);
    glVertex3f(9,2,0);
    glVertex3f(8,-2,0);
    glVertex3f(4,-2,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(1,-4,0);
    glVertex3f(4,-2,0);
    glVertex3f(8,-2,0);
    glVertex3f(7,-7,0);
    glVertex3f(1.5,-7,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(1.5,-7,0);
    glVertex3f(7,-7,0);
    glVertex3f(6.5,-10,0);
    glVertex3f(2,-10,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(2,-10,0);
    glVertex3f(6.5,-10,0);
    glVertex3f(6.8,-13,0);
    glVertex3f(1.5,-13,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(1.5,-13,0);
    glVertex3f(6.8,-13,0);
    glVertex3f(7,-18,0);
    glVertex3f(.5,-18,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(.5,-18,0);
    glVertex3f(7,-18,0);
    glVertex3f(3,-27,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(.5,-18,0);
    glVertex3f(2.5,-23,0);
    glVertex3f(-1,-25,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(7,-18,0);
    glVertex3f(8,-28,0);
    glVertex3f(4,-22,0);
    glEnd();
}

void home()
{
    //1st Home
    //1
    glColor3f(0.800,0.332,0.332);
    glBegin(GL_POLYGON);
    glVertex2d(3,14);
    glVertex2d(3,9);
    glVertex2d(10,6);
    glVertex2d(10,12);
    glVertex2d(6,18);
    glEnd();
    //2
    glColor3f(0.996,0.644,0.0); //home front body
    glBegin(GL_POLYGON);
    glVertex2d(10,6);
    glVertex2d(10,12);
    glVertex2d(20,12);
    glVertex2d(20,6);
    glEnd();
    //3
    glColor3ub(0,100,200);   ///home roof
    glBegin(GL_POLYGON);
    glVertex2d(10,12);
    glVertex2d(6,18);
    glVertex2d(17,18);
    glVertex2d(21,12);
    glEnd();
    //4
    glColor3ub(255,255,0);   ///home window
    glBegin(GL_POLYGON);
    glVertex2d(5,9);
    glVertex2d(5,13);
    glVertex2d(8,12);
    glVertex2d(8,8);
    glEnd();
    //5

    glColor3ub(50,50,50);   //home door
    glBegin(GL_POLYGON);
    glVertex2d(14,6);
    glVertex2d(14,10);
    glVertex2d(17,10);
    glVertex2d(17,6);
    glEnd();


}
void house()
{
    glColor3ub(240,150,100);
    glBegin(GL_POLYGON);

    glVertex2d(33,19);
    //glColor3f(0.70,0.996,0.0)
    glVertex2d(44,19);
    //glColor3f(0.996,0.658,0.0)
    glVertex2d(44,30);
    //glColor3f(0.996,0.996,0.0)
    glVertex2d(33,30);
    glEnd();

    /*glColor3f(0.996,0.996,0.0);
    glBegin(GL_POLYGON);
    glVertex2d(13,19);
    glVertex2d(20,19);
    glVertex2d(20,25);
    glVertex2d(13,25);
    glEnd();*/

    glColor3ub(0,105,105);
    glBegin(GL_TRIANGLES);
    glVertex2d(31,30);
    glVertex2d(46,30);
    glVertex2d(38.5,38);
    glEnd();

}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    day();
    glPopMatrix();

    ///ground///
    glPushMatrix();
    glTranslatef(0.0,-35.0,0.0);
    glScalef(3.5,3.0,0.0);
    glColor3f(0.0, 0.5, 0.0);
    rect();
    glPopMatrix();



    glPushMatrix();
    glColor3f (1,1,1);
    glTranslatef(cx,17.0,0.0);
    cloudB();
    glPopMatrix();

    glPushMatrix();
    glColor3f (1,1,1);
    glTranslatef(cx,20.0,0.0);
    cloudB();
    glPopMatrix();



//tree1
    glPushMatrix();
    glColor3f(0.133, 0.545, 0.133);
    glTranslatef(-49.0,9.5,0.0);
    glScalef(0.4,0.5,0.0);
    tree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-40.4,15.4,0.0);
    glScalef(0.4,0.5,0.0);
    treebody();
    glPopMatrix();



    glPushMatrix();
    moon();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(cx,0.0,0.0);
    glScalef(.8,1,0);
    cloud();
    glPopMatrix();

///home 2///
    glPushMatrix();
    glTranslatef(-65.0,-20.0,0.0);
    house();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-15.0,-20.0,0.0);
    house();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-45.0,-10.0,0.0);
    home();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(20.0,-15.0,0.0);
    home();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-5.0,-5.0,0.0);
    glScalef(.5,1,0);
    tree2();
    glPopMatrix();

///tree///
    glPushMatrix();
    glTranslatef(35.0,-5.0,0.0);
    glScalef(.5,1,0);
    tree2();
    glPopMatrix();

///tree///
    glPushMatrix();
    glTranslatef(30.0,-15.0,0.0);
    glScalef(.5,1,0);
    tree2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(8.0,-17.0,0.0);
    glScalef(.5,1,0);
    tree2();
    glPopMatrix();




///tree2///
    glPushMatrix();
    glColor3f(0.133, 0.545, 0.133);
    glTranslatef(-44.0,-1,0.0);
    glScalef(0.4,0.5,0.0);
    tree();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-35.0,5.0,0.0);
    glScalef(0.4,0.5,0.0);
    treebody();
    glPopMatrix();

///home 2///
    glPushMatrix();
    glTranslatef(-10.0,-10.0,0.0);
    home();
    glPopMatrix();
    glPopMatrix();

///road///
    glPushMatrix();
    glTranslatef(-10.0,15.0,0.0);
    road();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-10.0,20.0,0.0);
    road();
    glPopMatrix();
    glPopMatrix();

///car///
    glPushMatrix();
    glTranslatef(cx, -15, 0);
    glScalef(30, 8, 0);
    car();
    glPopMatrix();


///car2///
    glPushMatrix();
    glTranslatef(bx, -25, 0);
    glScalef(30, 8, 0);
    car();
    glPopMatrix();


    ///tree3///
    glPushMatrix();
    glColor3f(0.133, 0.545, 0.133);
    glTranslatef(22.0,-32.5,0.0);
    glScalef(0.4,0.5,0.0);
    tree();
    glPopMatrix();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(30.5,-26.5,0.0);
    glScalef(0.4,0.5,0.0);
    treebody();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(-5.0,-70.0,0.0);
    house();
    glPopMatrix();
    glPopMatrix();

        glPushMatrix();
    glTranslatef(-50.0,-65.0,0.0);
    house();
    glPopMatrix();
    glPopMatrix();


    ///tree type 1///
    glPushMatrix();
    glTranslatef(-10.0,-50.0,0.0);
    glScalef(.5,1,0);
    tree2();
    glPopMatrix();

    glFlush();
}
void init(void)
{
    glClearColor (0, 0.749, 1, 0);
    glOrtho(-50.0,50.0, -50.0, 50.0, -1.0, 1.0);
}
void spinDisplay()
{
    cx = cx + .02;
    if(cx>70)
        cx = -70;

    glutPostRedisplay();

    bx = bx + .03;
    if(bx>70)
        bx = -70;

    glutPostRedisplay();
}
/*void spinDisplay1()
{
    bx = bx + .03;
    if(bx>70)
        bx = -70;

    glutPostRedisplay();
}*/
void mouse(int key, int state, int x, int y)
{
    switch (key)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
        {
            glutIdleFunc(spinDisplay);
            //glutIdleFunc(spinDisplay1);
        }
        break;

    /*case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
        {
            //glutIdleFunc(spinDisplay);
            glutIdleFunc(spinDisplay1);
        }
        break;*/
    //case GLUT_MIDDLE_BUTTON:
    case GLUT_RIGHT_BUTTON:
        if (state == GLUT_DOWN)
        {
            glutIdleFunc(NULL);
        }
        break;
    default:
        //glutIdleFunc(spinDisplay);
        break;
    }
}
void keyDisplayAnimationDay()
{
    str=500.0;
    sr=0.0;
    sg=0.749;
    sb=1.0;

    ssun = 0.0;

    Moon = 500.0;
    glutPostRedisplay();
}
void keyDisplayAnimationNight()
{
    str = 0.0;
    sr=0.0;
    sg=0.0;
    sb=0.0;

    ssun = 500.0;

    Moon = 0.0;
    glutPostRedisplay();
}
void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'd':
        keyDisplayAnimationDay();
        break;

    case 'n':

        keyDisplayAnimationNight();
        break;

    default:
        break;
    }
}
int main()
{
    printf(">><< Press n for night mode>><< Press d for day mode >><<\n\n");
    printf("Click Mouse Left/Right Button for cloud movement\n\n");
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1350, 690);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("My Scenary ");
    init();
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
