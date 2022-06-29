
/*
 * hawk.cpp
 *
 *  Created on: Jun 28, 2014
 *      Author: kamath
 */
//#include<windows.h>

#include<GL/glut.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
static GLfloat spin=45.0,spin1=200.0,bail=1.0,ball=1.0;
void Sprint( int x, int y, const char *st)
{
	int l,i;

	l=strlen( st ); // see how many characters are in text string.
	glRasterPos2i( x, y); // location to start printing text
	for( i=0; i < l; i++)  // loop until i is greater then l
		{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, st[i]); // Print a character on the screen
	}

}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
 //CODE FOR BOUNDRY
	glColor3f(1.0,1.0,1.0);
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glVertex2f(20.0,1.0);
	glVertex2f(10.0,50.0);
	glVertex2f(10.0,50.0);
	glVertex2f(1.0,200.0);
	glVertex2f(1.0,200.0);
	glVertex2f(1.0,350.0);
	glVertex2f(1.0,350.0);
	glVertex2f(10.0,475.0);
	glVertex2f(10.0,475.0);
	glVertex2f(30.0,525.0);
	glVertex2f(30.0,525.0);
	glVertex2f(70.0,525.0);
	glVertex2f(70.0,525.0);
	glVertex2f(85.0,475.0);
	glVertex2f(85.0,475.0);
	glVertex2f(95.0,350.0);
	glVertex2f(95.0,350.0);
	glVertex2f(95.0,100.0);
	glVertex2f(95.0,100.0);
	glVertex2f(85.0,1.0);
	glVertex2f(85.0,1.0);
	glVertex2f(20.0,1.0);
	glEnd();
//CODE FOR FIRST SHADE
	glColor3f(0.0,0.7,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(10.0,475.0);
	glVertex2f(1.0,350.0);
    glVertex2f(95.0,350.0);
	glVertex2f(85.0,475.0);
	glEnd();
//CODE FOR SECOND SHADE
	glColor3f(0.0,0.7,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(10.0,50.0);
	glVertex2f(3.0,175.0);
    glVertex2f(95.0,175.0);
	glVertex2f(95.0,100.0);
	glVertex2f(90.0,50.0);
	glEnd();
//CODE FOR THIRD SHADE
	glColor3f(0.0,0.7,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(10.0,475.0);
	glVertex2f(30.0,525.0);
    glVertex2f(30.0,1.0);
	glVertex2f(20.0,1.0);
	glVertex2f(10.0,50.0);
	glEnd();
//CODE FOR FIRST SQUARE SHADE
	glColor3f(0.0,0.6,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(10.0,50.0);
	glVertex2f(30.0,50.0);
    glVertex2f(30.0,175.0);
	glVertex2f(10.0,175.0);
	glEnd();
//CODE FOR SECOND SQUARE SHADE
	glColor3f(0.0,0.6,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(10.0,475.0);
	glVertex2f(30.0,475.0);
    glVertex2f(30.0,350.0);
	glVertex2f(10.0,350.0);
	glEnd();
//CODE FOR FOURTH SHADE
	glColor3f(0.0,0.7,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(65.0,525.0);
	glVertex2f(70.0,525.0);
	glVertex2f(85.0,475.0);
	glVertex2f(85.0,1.0);
	glVertex2f(65.0,1.0);
	glEnd();
//CODE FOR THIRD SQUARE SHADE
	glColor3f(0.0,0.6,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(65.0,475.0);
	glVertex2f(85.0,475.0);
    glVertex2f(85.0,350.0);
	glVertex2f(65.0,350.0);
	glEnd();
//CODE FOR FOURTH SQUARE SHADE
	glColor3f(0.0,0.6,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(65.0,50.0);
	glVertex2f(85.0,50.0);
    glVertex2f(85.0,175.0);
	glVertex2f(65.0,175.0);
	glEnd();
//CODE FOR PITCH
	glColor3f(0.5,0.7,0.0);
	glBegin(GL_POLYGON);
    glVertex3f(45.0,405.0,0.0);
    glVertex3f(45.0,132.0,0.0);
    glVertex3f(55.0,132.0,0.0);
    glVertex3f(55.0,405.0,0.0);
	glEnd();
//CODE FOR LBW REFERENCE LINE
	glColor3f(1.5,1.5,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(49.0,187.0);
	glVertex2f(51.0,187.0);
    glVertex2f(51.0,370.0);
	glVertex2f(49.0,370.0);
	glEnd();
//CODE FOR CREASE
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINES);
    glVertex2f(40.0,350.0);
    glVertex2f(60.0,350.0);
    glVertex2f(40.0,187.0);
    glVertex2f(60.0,187.0);
	glVertex2f(45.0,370.0);
	glVertex2f(55.0,370.0);
    glVertex2f(45.0,157.0);
	glVertex2f(55.0,157.0);
	glVertex2f(45.0,405.0);
	glVertex2f(45.0,350.0);
	glVertex2f(55.0,405.0);
	glVertex2f(55.0,350.0);
	glVertex2f(45.0,132.0);
	glVertex2f(45.0,187.0);
	glVertex2f(55.0,132.0);
    glVertex2f(55.0,187.0);
	glEnd();
//CODE FOR WICKETS ON STRIKER SIDE
	glBegin(GL_LINES);
//FIRST WICKET
	glColor3f(0.9,0.9,0.9);
 	glVertex2f(51.0,410.0);
	glVertex2f(51.0,370.0);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(51.0,370.0);
	glVertex2f(49.0,390.0);
//SECOND WICKET
    glColor3f(0.9,0.9,0.9);
	glVertex2f(50.0,410.0);
	glVertex2f(50.0,370.0);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(50.0,370.0);
	glVertex2f(48.0,390.0);
//THIRD WICKET
	glColor3f(0.9,0.9,0.9);
    glVertex2f(49.0,410.0);
	glVertex2f(49.0,370.0);
	glColor3f(0.0,0.0,0.0);
    glVertex2f(49.0,370.0);
	glVertex2f(47.0,390.0);
    glEnd();
//CODE FOR WICKET ON NON STRIKER SIDE
	glBegin(GL_LINES);
//FIRST WICKET
	glColor3f(0.9,0.9,0.9);
    glVertex2f(51.0,157.0);
	glVertex2f(51.0,197.0);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(51.0,157.0);
	glVertex2f(49.0,177.0);
//SECOND WICKET
	glColor3f(0.9,0.9,0.9);
    glVertex2f(50.0,157.0);
	glVertex2f(50.0,197.0);
	glColor3f(0.0,0.0,0.0);
    glVertex2f(50.0,157.0);
	glVertex2f(48.0,177.0);
//THIRD WICKET
	glColor3f(0.9,0.9,0.9);
    glVertex2f(49.0,157.0);
	glVertex2f(49.0,197.0);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(49.0,157.0);
	glVertex2f(47.0,177.0);
	glEnd();
//CODE FOR BAILS
	glColor3f(1.0,1.0,1.0);
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex2f(49.0,197.0);
	glVertex2f(49.2,197.0);
	glEnd();
    glLineWidth(5.0);
	glBegin(GL_LINES);
	glVertex2f(49.2,197.0);
	glVertex2f(49.8,197.0);
	glEnd();
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex2f(49.8,197.0);
	glVertex2f(50.0,197.0);
	glEnd();
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex2f(50.0,197.0);
	glVertex2f(50.2,197.0);
	glEnd();
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glVertex2f(50.2,197.0);
	glVertex2f(50.8,197.0);
	glEnd();
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex2f(50.8,197.0);
	glVertex2f(51.0,197.0);
	glEnd();
	if(bail==1.0)
	{
	   glLineWidth(1.0);
	   glBegin(GL_LINES);
	   glVertex2f(49.0,410.0);
	   glVertex2f(49.2,410.0);
	   glEnd();
       glLineWidth(5.0);
	   glBegin(GL_LINES);
       glVertex2f(49.2,410.0);
	   glVertex2f(49.8,410.0);
	   glEnd();
	   glLineWidth(1.0);
	   glBegin(GL_LINES);
	   glVertex2f(49.8,410.0);
	   glVertex2f(50.0,410.0);
	   glEnd();
       glLineWidth(1.0);
	   glBegin(GL_LINES);
	   glVertex2f(50.0,410.0);
	   glVertex2f(50.2,410.0);
	   glEnd();
	   glLineWidth(5.0);
	   glBegin(GL_LINES);
	   glVertex2f(50.2,410.0);
	   glVertex2f(50.8,410.0);
	   glEnd();
	   glLineWidth(1.0);
	   glBegin(GL_LINES);
	   glVertex2f(50.8,410.0);
	   glVertex2f(51.0,410.0);
	   glEnd();
	}
//CODE FOR SHADOW OF BAILS
    glColor3f(0.0,0.0,0.0);
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex2f(47.0,177.0);
	glVertex2f(47.2,177.0);
	glEnd();
    glLineWidth(5.0);
	glBegin(GL_LINES);
	glVertex2f(47.2,177.0);
	glVertex2f(47.8,177.0);
	glEnd();
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex2f(47.8,177.0);
	glVertex2f(48.0,177.0);
	glEnd();
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex2f(48.0,177.0);
	glVertex2f(48.2,177.0);
	glEnd();
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glVertex2f(48.2,177.0);
	glVertex2f(48.8,177.0);
	glEnd();
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex2f(48.8,177.0);
	glVertex2f(49.0,177.0);
	glEnd();
	if(bail==1.0)
	{
	   glLineWidth(1.0);
	   glBegin(GL_LINES);
	   glVertex2f(47.0,390.0);
	   glVertex2f(47.2,390.0);
	   glEnd();
       glLineWidth(5.0);
	   glBegin(GL_LINES);
	   glVertex2f(47.2,390.0);
	   glVertex2f(47.8,390.0);
	   glEnd();
	   glLineWidth(1.0);
	   glBegin(GL_LINES);
	   glVertex2f(47.8,390.0);
	   glVertex2f(48.0,390.0);
	   glEnd();
       glLineWidth(1.0);
	   glBegin(GL_LINES);
	   glVertex2f(48.0,390.0);
	   glVertex2f(48.2,390.0);
	   glEnd();
	   glLineWidth(5.0);
	   glBegin(GL_LINES);
	   glVertex2f(48.2,390.0);
	   glVertex2f(48.8,390.0);
	   glEnd();
	   glLineWidth(1.0);
	   glBegin(GL_LINES);
	   glVertex2f(48.8,390.0);
	   glVertex2f(49.0,390.0);
	   glEnd();
	}
//CODE FOR ADVERTISEMENT BOARD
//CODE FOR FIRST BLUE BOARD AND ITS SHADOW
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
    glVertex2f(1.0,350.0);
	glVertex2f(0.0,410.0);
	glVertex2f(10.0,550.0);
	glVertex2f(10.0,475.0);
	glEnd();
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(1.0,350.0);
	glVertex2f(10.0,475.0);
	glVertex2f(10.0,525.0);
	glVertex2f(1.0,400.0);
	glEnd();
//CODE FOR SECOND BLUE BOARD AND ITS SHADOW
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(10.0,475.0);
	glVertex2f(10.0,550.0);
	glVertex2f(30.0,550.0);
	glEnd();
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(10.0,475.0);
	glVertex2f(30.0,525.0);
	glVertex2f(30.0,550.0);
	glVertex2f(10.0,525.0);
	glEnd();
//CODE FOR THIRD BLUE BOARD AND ITS SHADOW
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(70.0,550.0);
	glVertex2f(85.0,540.0);
	glVertex2f(85.0,525.0);
    glEnd();
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(70.0,525.0);
	glVertex2f(70.0,555.0);
	glVertex2f(85.0,525.0);
	glVertex2f(85.0,475.0);
    glEnd();
//CODE FOR FOURTH BLUE BOARD AND ITS SHADOW
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(85.0,525.0);
	glVertex2f(85.0,540.0);
	glVertex2f(95.0,425.0);
	glVertex2f(95.0,350.0);
	glEnd();
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(85.0,525.0);
	glVertex2f(85.0,475.0);
	glVertex2f(95.0,350.0);
	glVertex2f(95.0,400.0);
	glEnd();
//CODE FOR FIRST YELLOW BOARD.
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(30.0,550.0);
	glVertex2f(70.0,550.0);
	glVertex2f(70.0,525.0);
	glVertex2f(30.0,525.0);
	glEnd();
	glColor3f(0.0,0.0,1.0);
	Sprint(43,530,"HAWK-EYE");//To display project name.
//CODE FOR SECOND YELLOW BOARD
    glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(95.0,350.0);
	glVertex2f(95.0,435.0);
	glVertex2f(98.0,150.0);
	glVertex2f(95.0,100.0);
	glEnd();
//CODE FOR THIRD YELLOW BOARD
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(1.0,350.0);
	glVertex2f(0.0,400.0);
	glVertex2f(0.0,200.0);
	glVertex2f(1.0,200.0);
	glEnd();
//CODE FOR FIFTH BLUE BOARD
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.0,200.0);
	glVertex2f(1.0,200.0);
	glVertex2f(10.0,50.0);
	glVertex2f(6.0,80.0);
	glEnd();
//CODE FOR FOURTH YELLOW BOARD
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(10.0,50.0);
	glVertex2f(6.0,80.0);
	glVertex2f(15.0,10.0);
	glVertex2f(20.0,0.0);
	glEnd();
//CODE FOR SIXTH BLUE BOARD
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(95.0,100.0);
	glVertex2f(85.0,1.0);
	glVertex2f(90.0,30.0);
	glVertex2f(98.0,150.0);
    glEnd();
    //wickets in display
    glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(10.0,410.0);
	glVertex2f(20.0,410.0);
	glVertex2f(20.0,430.0);
	glVertex2f(10.0,430.0);
	glEnd();
	glColor3f(1.0,1.0,1.0);
		Sprint(10,415,"WICKETS");
	//impact
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(10.0,350.0);
	glVertex2f(20.0,350.0);
	glVertex2f(20.0,330.0);
	glVertex2f(10.0,330.0);
	glEnd();
	glColor3f(1.0,1.0,1.0);
		Sprint(10,335,"IMPACT");
	//pitching
		glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(10.0,270.0);
	glVertex2f(20.0,270.0);
	glVertex2f(20.0,250.0);
	glVertex2f(10.0,250.0);
	glEnd();
	glColor3f(1.0,1.0,1.0);
		Sprint(10,255,"PITCHING");

//MESSAGE DISPLAY
	glColor3f(0.0,0.0,0.0);
	Sprint(30, 100, "Press left mouse button to move ball");
	Sprint(30, 80, "Press right mouse button to pitch the ball");
	glColor3f(1.0,1.0,1.0);
	Sprint(30,55,"Project by:");
	glColor3f(.0,0.0,1.0);
	Sprint(40,35,"RAMACHANDRA BHAT");
	Sprint(40,15,"RAKSHITH M.N.");
//CODE FOR BALL AND ITS TRANSLATION
    if(ball==1.0)
	{
	   glPushMatrix();
	   glTranslatef(spin,spin1,-15.0);//specify the position where the translation should start.
	   glColor3f(1.0,0.0,0.0);
	   glutSolidSphere(1.58,400,421);//ball
	   glPopMatrix();
	   glutSwapBuffers();
	}
	if(bail==0.0)
    {
        //answer for wickets
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(10.0,405.0);
	glVertex2f(20.0,405.0);
	glVertex2f(20.0,385.0);
	glVertex2f(10.0,385.0);
	glEnd();
        glColor3f(1.0,1.0,1.0);
		Sprint(10,390,"Hitting");
    }
    else{
        glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(10.0,405.0);
	glVertex2f(20.0,405.0);
	glVertex2f(20.0,385.0);
	glVertex2f(10.0,385.0);
	glEnd();
        glColor3f(1.0,1.0,1.0);
		Sprint(10,390,"Missing");
    }
	glFlush();
}
//CODE FOR MOVEMENT OF BALL BEFORE PITCHING.
void spindisplay()
{
	spin=spin+0.04;
	spin1=spin1+1.0;
    glutPostRedisplay();
}
//CODE FOR MOVEMENT OF BALL AFTER PITCHING
void spindisplayy()
{
	static GLfloat spiny=spin1,spinx=spin;
	ball=0.0;
	if(spinx>=49.0&&spinx<=51.0)
	{
	    //answer for pitching
		glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(10.0,245.0);
	glVertex2f(20.0,245.0);
	glVertex2f(20.0,225.0);
	glVertex2f(10.0,225.0);
	glEnd();
		glColor3f(1.0,1.0,1.0);
		Sprint(10,230,"Inside");
			//answer for impact
		glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(10.0,325.0);
	glVertex2f(20.0,325.0);
	glVertex2f(20.0,305.0);
	glVertex2f(10.0,305.0);
	glEnd();
		//answer for impact
		glColor3f(1.0,1.0,1.0);
		Sprint(10,310,"In-Line");

	}
	else
        if(spinx<49.0)
    {
        //Answer for pitching
        glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(10.0,245.0);
	glVertex2f(20.0,245.0);
	glVertex2f(20.0,225.0);
	glVertex2f(10.0,225.0);
	glEnd();
        glColor3f(1.0,1.0,1.0);
		Sprint(10,230,"Outside off");
			//answer for impact
		glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(10.0,325.0);
	glVertex2f(20.0,325.0);
	glVertex2f(20.0,305.0);
	glVertex2f(10.0,305.0);
	glEnd();
		//answer for impact
		glColor3f(1.0,1.0,1.0);
		Sprint(10,310,"Missing");
    }
    else
	{
	     //Answer for pitching
        glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(10.0,245.0);
	glVertex2f(20.0,245.0);
	glVertex2f(20.0,225.0);
	glVertex2f(10.0,225.0);
	glEnd();
		glColor3f(1.0,1.0,1.0);
		Sprint(10,230,"Outside leg");
		glColor3f(0.0,1.0,0.0);
	//answer for impact
	glBegin(GL_POLYGON);
	glVertex2f(10.0,325.0);
	glVertex2f(20.0,325.0);
	glVertex2f(20.0,305.0);
	glVertex2f(10.0,305.0);
	glEnd();

		glColor3f(1.0,1.0,1.0);
		Sprint(10,310,"Missing");
	}
    glPushMatrix();
	glTranslatef(spinx,spiny,-15.0);
	glColor3f(1.0,0.0,0.0);
	glutSolidSphere(1.58,400,421);
	glPopMatrix();
	glutSwapBuffers();
	spiny=spiny+0.5;
	if(spinx>=49.0&&spinx<=51.0&&spiny>=410.0)
	{
		bail=0.0;//make the bails disappear.

	}
	 glutPostRedisplay();

}
//CODE FOR MOUSE INTERACTION
void mouse(int button,int state,int x,int y)
{
	switch(button)
	{
	case GLUT_LEFT_BUTTON:
		if(state==GLUT_DOWN)
			glutIdleFunc(spindisplay);
		break;

    case GLUT_RIGHT_BUTTON:
			if(state==GLUT_DOWN)
		        glutIdleFunc(spindisplayy);
			break;
	default:
		break;
	}
}

int main(int argc,char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowSize(500,500);
    glutInitWindowPosition(30,30);
	glutCreateWindow("Hawk-Eye");
	glClearColor(0.0,0.6,0.0,0.0);
	glOrtho(0.0,100.0,0.0,550.0,-15.0,50.0);
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	glutMainLoop();
	return(0);
}
