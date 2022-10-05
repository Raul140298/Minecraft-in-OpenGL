#include <GL/glut.h>
#include <math.h>
#include <time.h>
#include <iostream>
#include <cstdlib>      // std::rand, std::srand
#include <algorithm>    // std::random_shuffle
#include <windows.h>
#include <mmsystem.h>
using namespace std;

float camaraX = -20;//ROJO
float camaraY = 30;//VERDE
float camaraZ = 40;//AZUL

float angulo = 0;

float tiempo = 0;

float tiempoAnochese = 20;

void iniciarVentana(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(70, (float)w / (float)h, 1, 2000);
}

void inicializarLuces(float animationTime) {

	float amb = (0.2 + ((tiempo >= animationTime) ? (0.075 * ((tiempo <= 2 * animationTime ? tiempo : 2 * animationTime) - animationTime) / animationTime) : 0) + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (0.35 - 0.2));
	float dif = (0.3 + ((tiempo >= animationTime) ? (0.075 * ((tiempo <= 2 * animationTime ? tiempo : 2 * animationTime) - animationTime) / animationTime) : 0) + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (0.5 - 0.3));

	GLfloat luz_ambiente[] = { amb,amb,amb,1 };
	GLfloat luz_difusa[] = { dif,dif,dif,1 };
	GLfloat luz_especular[] = { 0.3,0.3,0.3,1 };

	float posicionLuz[] = { 0,200,0,1 };

	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, luz_ambiente);
	glLightfv(GL_LIGHT0, GL_AMBIENT, luz_ambiente);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, luz_difusa);
	glLightfv(GL_LIGHT0, GL_SPECULAR, luz_especular);
	glLightfv(GL_LIGHT0, GL_POSITION, posicionLuz);

	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);

	glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
}

void pared(float animationTime) {
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3ub
	(60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (181 - 60),
		60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (205 - 60),
		60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (249 - 60));
	glVertex3d(-1000, -1000, -1000);
	glVertex3d(1000, -1000, -1000);
	glVertex3d(1000, 30, -1000);
	glVertex3d(-1000, 30, -1000);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub
	(60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (181 - 60),
		60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (205 - 60),
		60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (249 - 60));
	glVertex3d(-1000, 30, -1000);
	glVertex3d(1000, 30, -1000);
	glColor3ub
	(0 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (136 - 0),
		0 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (174 - 0),
		0 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (248 - 0));
	glVertex3d(1000, 1000, -1000);
	glVertex3d(-1000, 1000, -1000);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3ub
	(60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (181 - 60),
		60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (205 - 60),
		60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (249 - 60));
	glVertex3d(-1000, -1000, 1000);
	glVertex3d(1000, -1000, 1000);
	glVertex3d(1000, 30, 1000);
	glVertex3d(-1000, 30, 1000);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub
	(60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (181 - 60),
		60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (205 - 60),
		60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (249 - 60));
	glVertex3d(-1000, 30, 1000);
	glVertex3d(1000, 30, 1000);
	glColor3ub
	(0 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (136 - 0),
		0 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (174 - 0),
		0 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (248 - 0));
	glVertex3d(1000, 1000, 1000);
	glVertex3d(-1000, 1000, 1000);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3ub
	(60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (181 - 60),
		60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (205 - 60),
		60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (249 - 60));
	glVertex3d(-1000, -1000, -1000);
	glVertex3d(-1000, -1000, 1000);
	glVertex3d(-1000, 30, 1000);
	glVertex3d(-1000, 30, -1000);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub
	(60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (181 - 60),
		60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (205 - 60),
		60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (249 - 60));
	glVertex3d(-1000, 30, -1000);
	glVertex3d(-1000, 30, 1000);
	glColor3ub
	(0 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (136 - 0),
		0 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (174 - 0),
		0 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (248 - 0));
	glVertex3d(-1000, 1000, 1000);
	glVertex3d(-1000, 1000, -1000);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3ub
	(60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (181 - 60),
		60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (205 - 60),
		60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (249 - 60));
	glVertex3d(1000, -1000, -1000);
	glVertex3d(1000, -1000, 1000);
	glVertex3d(1000, 30, 1000);
	glVertex3d(1000, 30, -1000);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub
	(60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (181 - 60),
		60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (205 - 60),
		60 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (249 - 60));
	glVertex3d(1000, 30, -1000);
	glVertex3d(1000, 30, 1000);
	glColor3ub
	(0 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (136 - 0),
		0 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (174 - 0),
		0 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (248 - 0));
	glVertex3d(1000, 1000, 1000);
	glVertex3d(1000, 1000, -1000);
	glEnd();
	glPopMatrix();


	//Techo
	glPushMatrix();
	glTranslated(0, -0.1, 0);
	glBegin(GL_POLYGON);

	glColor3ub
	(0 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (136 - 0),
		0 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (174 - 0),
		0 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (248 - 0));

	glVertex3d(-1000, 1000, -1000);
	glVertex3d(1000, 1000, -1000);
	glVertex3d(1000, 1000, 1000);
	glVertex3d(-1000, 1000, 1000);
	glEnd();
	glPopMatrix();
}

void piso(float animationTime) {
	glPushMatrix();
	glTranslated(0, -0.1, 0);
	glBegin(GL_POLYGON);
	glColor3ub
	(123 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (163 - 123),
		152 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (204 - 152),
		43 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (56 - 43));
	glVertex3d(-1000, 0, -1000);
	glVertex3d(1000, 0, -1000);
	glVertex3d(1000, 0, 1000);
	glVertex3d(-1000, 0, 1000);
	glEnd();
	glPopMatrix();

	/*glPushMatrix();
	glTranslated(0, 0.01, 0);
	glBegin(GL_POLYGON);
	glColor3ub(163, 204, 56);
	glVertex3d(40, 16, 40);
	glVertex3d(104, 16, 40);
	glVertex3d(104, 16, 104);
	glVertex3d(40, 16, 104);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0.01, 0);
	glBegin(GL_POLYGON);
	glColor3ub(163, 204, 56);
	glVertex3d(56, 32, 56);
	glVertex3d(88, 32, 56);
	glVertex3d(88, 32, 88);
	glVertex3d(56, 32, 88);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(48, 8, 48);
	glColor3ub(173, 117, 79);
	glutSolidCube(16);
	glPopMatrix();
	glPushMatrix();
	glTranslated(64, 8, 48);
	glColor3ub(173, 117, 79);
	glutSolidCube(16);
	glPopMatrix();
	glPushMatrix();
	glTranslated(80, 8, 48);
	glColor3ub(173, 117, 79);
	glutSolidCube(16);
	glPopMatrix();
	glPushMatrix();
	glTranslated(96, 8, 48);
	glColor3ub(173, 117, 79);
	glutSolidCube(16);
	glPopMatrix();

	glPushMatrix();
	glTranslated(48, 8, 64);
	glColor3ub(173, 117, 79);
	glutSolidCube(16);
	glPopMatrix();
	glPushMatrix();
	glTranslated(64, 8, 64);
	glColor3ub(173, 117, 79);
	glutSolidCube(16);
	glPopMatrix();
	glPushMatrix();
	glTranslated(80, 8, 64);
	glColor3ub(173, 117, 79);
	glutSolidCube(16);
	glPopMatrix();
	glPushMatrix();
	glTranslated(96, 8, 64);
	glColor3ub(173, 117, 79);
	glutSolidCube(16);
	glPopMatrix();

	glPushMatrix();
	glTranslated(48, 8, 80);
	glColor3ub(173, 117, 79);
	glutSolidCube(16);
	glPopMatrix();
	glPushMatrix();
	glTranslated(64, 8, 80);
	glColor3ub(173, 117, 79);
	glutSolidCube(16);
	glPopMatrix();
	glPushMatrix();
	glTranslated(80, 8, 80);
	glColor3ub(173, 117, 79);
	glutSolidCube(16);
	glPopMatrix();
	glPushMatrix();
	glTranslated(96, 8, 80);
	glColor3ub(173, 117, 79);
	glutSolidCube(16);
	glPopMatrix();

	glPushMatrix();
	glTranslated(48, 8, 96);
	glColor3ub(173, 117, 79);
	glutSolidCube(16);
	glPopMatrix();
	glPushMatrix();
	glTranslated(64, 8, 96);
	glColor3ub(173, 117, 79);
	glutSolidCube(16);
	glPopMatrix();
	glPushMatrix();
	glTranslated(80, 8, 96);
	glColor3ub(173, 117, 79);
	glutSolidCube(16);
	glPopMatrix();
	glPushMatrix();
	glTranslated(96, 8, 96);
	glColor3ub(173, 117, 79);
	glutSolidCube(16);
	glPopMatrix();

	glPushMatrix();
	glTranslated(64, 24, 64);
	glColor3ub(173, 117, 79);
	glutSolidCube(16);
	glPopMatrix();
	glPushMatrix();
	glTranslated(80, 24, 64);
	glColor3ub(173, 117, 79);
	glutSolidCube(16);
	glPopMatrix();

	glPushMatrix();
	glTranslated(64, 24, 80);
	glColor3ub(173, 117, 79);
	glutSolidCube(16);
	glPopMatrix();
	glPushMatrix();
	glTranslated(80, 24, 80);
	glColor3ub(173, 117, 79);
	glutSolidCube(16);
	glPopMatrix();*/
}

void sol(float animationTime)
{
	//Sol
	glPushMatrix();
	glTranslated(0, -620 / animationTime * (tiempo <= animationTime ? tiempo : animationTime), 0);

	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 187);
	glVertex3d(-700, 400, 900);
	glVertex3d(-900, 400, 900);
	glVertex3d(-900, 600, 900);
	glVertex3d(-700, 600, 900);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex3d(-725, 425, 890);
	glVertex3d(-875, 425, 890);
	glVertex3d(-875, 575, 890);
	glVertex3d(-725, 575, 890);
	glEnd();
	glPopMatrix();

	glPopMatrix();
}

void luna(float animationTime)
{
	float y;

	if (tiempo < animationTime)
	{
		y = 0;
	}
	else if (tiempo >= animationTime && tiempo <= 2 * animationTime)
	{
		y = (tiempo - animationTime) / animationTime;
	}
	else
	{
		y = 1;
	}

	//Sol
	glPushMatrix();
	glTranslated(0, -655 + 655 * y, 0);

	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3ub(194, 202, 235);
	glVertex3d(-750, 450, -900);
	glVertex3d(-900, 450, -900);
	glVertex3d(-900, 600, -900);
	glVertex3d(-750, 600, -900);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex3d(-750, 480, -898);
	glVertex3d(-870, 480, -898);
	glVertex3d(-870, 600, -898);
	glVertex3d(-750, 600, -898);
	glEnd();
	glPopMatrix();

	glPopMatrix();
}

void estrellas(float animationTime)
{
	float posX[38] = { 850, 950, -100, 500, 600, 700, 800 , -250, -350, -450 , 350, 450, 100, 900, 50, 150, 250, -200, -600, -700, -800, -900, -50, -150, 200, 300, 400, -500, 550, 650, 750, -300, -400, -550, -650, -750, -850, -950};

	float posZ[38] = { -700, -800, -900, -50, -150, -250, -350, 600, 700, 800, -200, -300,100, 200, 900, -850, -950, 350, -450,  400, 500,  50, 150, 250, -400 , 650, 550, -550, -650, -750, 450, 300, 850, 950, -100, 750, -500, -600 };

	for (int i = 0; i < 38; i++)
	{
		glPushMatrix();
		glColor4ub(255, 255, 255, 255*(tiempo <= animationTime ? tiempo : animationTime) / animationTime);
		glTranslated(posX[i], 900, posZ[i] + tiempo/animationTime * 1000);
		//glTranslated(posX[i], 900, posZ[i] + (tiempo <= animationTime ? tiempo : animationTime) /animationTime * 1000);
		glutSolidCube(3);
		glPopMatrix();
	}

	for (int i = 0; i < 38; i++)
	{
		glPushMatrix();
		glColor4ub(255, 255, 255, 255*(tiempo <= animationTime ? tiempo : animationTime) / animationTime);
		glTranslated(posZ[i], 900, -1000 + posX[i] + tiempo / animationTime * 1000);
		//glTranslated(posX[i], 900, posZ[i] + (tiempo <= animationTime ? tiempo : animationTime) /animationTime * 1000);
		glutSolidCube(3);
		glPopMatrix();
	}

	for (int i = 0; i < 38; i++)
	{
		glPushMatrix();
		glColor4ub(255, 255, 255, 255 * (tiempo <= animationTime ? tiempo : animationTime) / animationTime);
		glTranslated(posX[i], 900, -2000 + posZ[i] + tiempo / animationTime * 1000);
		//glTranslated(posX[i], 900, posZ[i] + (tiempo <= animationTime ? tiempo : animationTime) /animationTime * 1000);
		glutSolidCube(3);
		glPopMatrix();
	}
}

void nubes(float animationTime)
{
	float posX[38] = { 850, 950, -100, 500, 600, 700, 800 , -250, -350, -450 , 350, 450, 100, 900, 50, 150, 250, -200, -600, -700, -800, -900, -50, -150, 200, 300, 400, -500, 550, 650, 750, -300, -400, -550, -650, -750, -850, -950 };

	float posZ[38] = { -700, -800, -900, -50, -150, -250, -350, 600, 700, 800, -200, -300,100, 200, 900, -850, -950, 350, -450,  400, 500,  50, 150, 250, -400 , 650, 550, -550, -650, -750, 450, 300, 850, 950, -100, 750, -500, -600 };

	float nubeColorTime = animationTime * 1.5;

	for (int i = 0; i < 38; i++)
	{
		glPushMatrix();
		glColor3ub
		(60 + (nubeColorTime - (tiempo <= nubeColorTime ? tiempo : nubeColorTime)) / nubeColorTime * (255 - 60),
			60 + (nubeColorTime - (tiempo <= nubeColorTime ? tiempo : nubeColorTime)) / nubeColorTime * (255 - 60),
			60 + (nubeColorTime - (tiempo <= nubeColorTime ? tiempo : nubeColorTime)) / nubeColorTime * (255 - 60));
		glTranslated(posZ[i], 500, posX[i] + tiempo / animationTime * 1000);
		glScaled(1 * i, 1 * i/2, 1.5 *i);
		glutSolidCube(3);
		glPopMatrix();
	}

	for (int i = 0; i < 38; i++)
	{
		glPushMatrix();
		glColor3ub
		(60 + (nubeColorTime - (tiempo <= nubeColorTime ? tiempo : nubeColorTime)) / nubeColorTime * (255 - 60),
			60 + (nubeColorTime - (tiempo <= nubeColorTime ? tiempo : nubeColorTime)) / nubeColorTime * (255 - 60),
			60 + (nubeColorTime - (tiempo <= nubeColorTime ? tiempo : nubeColorTime)) / nubeColorTime * (255 - 60));
		glTranslated(posX[i], 500, -1000 + posZ[i] + tiempo / animationTime * 1000);
		glScaled(1 * i, 1 * i/2, 1.5 * i);
		glutSolidCube(3);
		glPopMatrix();
	}

	for (int i = 0; i < 38; i++)
	{
		glPushMatrix();
		glColor3ub
		(60 + (nubeColorTime - (tiempo <= nubeColorTime ? tiempo : nubeColorTime)) / nubeColorTime * (255 - 60),
			60 + (nubeColorTime - (tiempo <= nubeColorTime ? tiempo : nubeColorTime)) / nubeColorTime * (255 - 60),
			60 + (nubeColorTime - (tiempo <= nubeColorTime ? tiempo : nubeColorTime)) / nubeColorTime * (255 - 60));
		glTranslated(posZ[i], 500, -2000 + posX[i] + tiempo / animationTime * 1000);
		glScaled(1 * i, 1 * i/2, 1.5 * i);
		glutSolidCube(3);
		glPopMatrix();
	}
}

void ejes() {
	glPushMatrix();
	glBegin(GL_LINES);
	glColor3ub(255, 0, 0);
	glVertex3d(0, 0, 0);
	glVertex3d(50, 0, 0);

	glColor3ub(0, 255, 0);
	glVertex3d(0, 0, 0);
	glVertex3d(0, 50, 0);

	glColor3ub(0, 0, 255);
	glVertex3d(0, 0, 0);
	glVertex3d(0, 0, 50);
	glEnd();
	glPopMatrix();
}

void cerdo_pata() {
	glPushMatrix();
	glColor3ub(224, 144, 142);
	glTranslated(0, 3, 0);
	glScaled(1, 1.5, 1);
	glutSolidCube(4);
	glPopMatrix();

	glPushMatrix();
	glColor3ub(163, 96, 84);
	glTranslated(-1.4, 0.5, 1.7);
	glScaled(1, 1, 1);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0.5, 0.5, 1.7);
	glScaled(1, 1, 1);
	glutSolidCube(1);
	glPopMatrix();
}

void cerdo_patas() {
	glPushMatrix();
	glTranslated(2.5, 0, 5);
	cerdo_pata();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-2.5, 0, 5);
	cerdo_pata();
	glPopMatrix();

	glPushMatrix();
	glTranslated(2.5, 0, -7);
	cerdo_pata();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-2.5, 0, -7);
	cerdo_pata();
	glPopMatrix();
}

void cerdo_cuerpo() {
	glPushMatrix();
	glColor3ub(224, 144, 142);
	glTranslated(0, 10, 0);
	glScaled(1.2, 1, 2);
	glutSolidCube(8);
	glPopMatrix();
}

void cerdo_cara() {
	glPushMatrix();
	glColor3ub(224, 144, 142);
	glTranslated(0, 12, 11);
	glutSolidCube(8);
	glPopMatrix();

	//Orejas
	glPushMatrix();
	glColor3ub(163, 96, 84);
	glTranslated(-3.51, 10.5, 13.5);
	glScaled(0.333, 1, 0.333);
	glutSolidCube(3);
	glPopMatrix();

	glPushMatrix();
	glTranslated(3.51, 10.5, 13.5);
	glScaled(0.33, 1, 0.33);
	glutSolidCube(3);
	glPopMatrix();
}

void cerdo_nariz() {
	glPushMatrix();
	glColor3ub(224, 144, 142);
	glTranslated(0, 9.5, 14);
	glScaled(1, 0.75, 1);
	glutSolidCube(4);
	glPopMatrix();

	glPushMatrix();
	glColor3ub(163, 96, 84);
	glTranslated(-1.49, 9.5, 15.6);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1.49, 9.5, 15.6);
	glutSolidCube(1);
	glPopMatrix();
}

void cerdo_ojo() {
	glPushMatrix();
	glColor3ub(0, 0, 0);
	glTranslated(-3.49, 11.5, 14.6);
	glutSolidCube(1);
	glPopMatrix();


	glPushMatrix();
	glTranslated(3.49, 11.5, 14.6);
	glutSolidCube(1);
	glPopMatrix();


	glPushMatrix();
	glColor3ub(255, 255, 255);
	glTranslated(-2.5, 11.5, 14.6);
	glutSolidCube(1);
	glPopMatrix();


	glPushMatrix();
	glTranslated(2.5, 11.5, 14.6);
	glutSolidCube(1);
	glPopMatrix();
}

void color_enderman_principal() {
	glColor3ub(6, 0, 6);
}

void color_enderman_sombra_primario() {
	glColor3ub(60, 43, 77);
}

void color_enderman_sombra_secundario() {
	glColor3ub(39, 26, 58);
}

void enderman_globo(int cubo) {
	/* GLOBO MORADO */
	glPushMatrix();
	glTranslated(15, 38, 15);
	glColor3ub(82, 67, 154);
	glutSolidCube(cubo);

	glPopMatrix();

	glPushMatrix();
	glTranslated(15, 36, 15);
	glColor3ub(73, 60, 142);
	glutSolidCube(cubo - 2);
	glPopMatrix();

	glPushMatrix();
	glColor3ub(101, 87, 174);
	glTranslated(0, 0, -0.001);
	glBegin(GL_QUADS);
	glVertex3d(10, 33, 10);
	glVertex3d(20, 33, 10);
	glVertex3d(20, 43, 10);
	glVertex3d(10, 43, 10);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(148, 138, 199);
	glBegin(GL_QUADS);
	glVertex3d(10, 42, 10);
	glVertex3d(11, 42, 10);
	glVertex3d(11, 36, 10);
	glVertex3d(10, 36, 10);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(11, 39, 10);
	glVertex3d(11, 40, 10);
	glVertex3d(12, 40, 10);
	glVertex3d(12, 39, 10);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(12, 34, 10);
	glVertex3d(12, 36, 10);
	glVertex3d(13, 36, 10);
	glVertex3d(13, 34, 10);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(12, 41, 10);
	glVertex3d(12, 42, 10);
	glVertex3d(13, 42, 10);
	glVertex3d(13, 41, 10);
	glEnd();


	glBegin(GL_QUADS);
	glVertex3d(15, 39, 10);
	glVertex3d(15, 42, 10);
	glVertex3d(17, 42, 10);
	glVertex3d(17, 39, 10);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(16, 42, 10);
	glVertex3d(16, 43, 10);
	glVertex3d(17, 43, 10);
	glVertex3d(17, 42, 10);
	glEnd();


	glBegin(GL_QUADS);
	glVertex3d(15, 37, 10);
	glVertex3d(15, 39, 10);
	glVertex3d(19, 39, 10);
	glVertex3d(19, 37, 10);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(14, 37, 10);
	glVertex3d(14, 38, 10);
	glVertex3d(15, 38, 10);
	glVertex3d(15, 37, 10);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(16, 35, 10);
	glVertex3d(16, 37, 10);
	glVertex3d(18, 37, 10);
	glVertex3d(18, 35, 10);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(15, 34, 10);
	glVertex3d(15, 35, 10);
	glVertex3d(20, 35, 10);
	glVertex3d(20, 34, 10);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(18, 33, 10);
	glVertex3d(18, 34, 10);
	glVertex3d(19, 34, 10);
	glVertex3d(19, 33, 10);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(19, 35, 10);
	glVertex3d(19, 37, 10);
	glVertex3d(20, 37, 10);
	glVertex3d(20, 35, 10);
	glEnd();
	glPopMatrix();

	/* GLOBO ROSADO */
	glPushMatrix();
	glTranslated(15, 42, 25);
	glColor3ub(255, 136, 254);
	glutSolidCube(cubo);

	glPopMatrix();

	glPushMatrix();
	glTranslated(15, 40, 25);
	glColor3ub(255, 136, 254);
	glutSolidCube(cubo - 2);
	glPopMatrix();


	glPushMatrix();
	glColor3ub(255, 156, 255);
	glTranslated(0, 0, -0.001);
	glBegin(GL_QUADS);
	glVertex3d(10, 47, 20);
	glVertex3d(20, 47, 20);
	glVertex3d(20, 37, 20);
	glVertex3d(10, 37, 20);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslated(0, 0, -0.01);

	glColor3ub(254, 186, 255);
	glBegin(GL_QUADS);
	glVertex3d(10, 46, 20);
	glVertex3d(11, 46, 20);
	glVertex3d(11, 40, 20);
	glVertex3d(10, 40, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(11, 43, 20);
	glVertex3d(11, 44, 20);
	glVertex3d(12, 44, 20);
	glVertex3d(12, 43, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(12, 38, 20);
	glVertex3d(12, 40, 20);
	glVertex3d(13, 40, 20);
	glVertex3d(13, 38, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(12, 45, 20);
	glVertex3d(12, 47, 20);
	glVertex3d(13, 47, 20);
	glVertex3d(13, 45, 20);
	glEnd();


	glBegin(GL_QUADS);
	glVertex3d(15, 43, 20);
	glVertex3d(15, 46, 20);
	glVertex3d(17, 46, 20);
	glVertex3d(17, 43, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(16, 46, 20);
	glVertex3d(16, 47, 20);
	glVertex3d(17, 47, 20);
	glVertex3d(17, 46, 20);
	glEnd();


	glBegin(GL_QUADS);
	glVertex3d(15, 41, 20);
	glVertex3d(15, 43, 20);
	glVertex3d(19, 43, 20);
	glVertex3d(19, 41, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(14, 41, 20);
	glVertex3d(14, 42, 20);
	glVertex3d(15, 42, 20);
	glVertex3d(15, 41, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(16, 39, 20);
	glVertex3d(16, 41, 20);
	glVertex3d(18, 41, 20);
	glVertex3d(18, 39, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(15, 38, 20);
	glVertex3d(15, 39, 20);
	glVertex3d(20, 39, 20);
	glVertex3d(20, 38, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(18, 37, 20);
	glVertex3d(18, 38, 20);
	glVertex3d(19, 38, 20);
	glVertex3d(19, 37, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(19, 39, 20);
	glVertex3d(19, 41, 20);
	glVertex3d(20, 41, 20);
	glVertex3d(20, 39, 20);
	glEnd();
	glPopMatrix();


	/* GLOBO BARNI */
	glPushMatrix();
	glTranslated(4, 47, 25);
	glColor3ub(100, 29, 128);
	glutSolidCube(cubo);

	glPopMatrix();

	glPushMatrix();
	glTranslated(4, 45, 25);
	glColor3ub(100, 29, 128);
	glutSolidCube(cubo - 2);
	glPopMatrix();


	glPushMatrix();
	glColor3ub(121, 51, 150);
	glTranslated(0, 0, -0.001);
	glBegin(GL_QUADS);
	glVertex3d(9, 52, 20);
	glVertex3d(-1, 52, 20);
	glVertex3d(-1, 42, 20);
	glVertex3d(9, 42, 20);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslated(0, 0, -0.01);

	glColor3ub(162, 112, 182);
	glBegin(GL_QUADS);
	glVertex3d(10 - 11, 51, 20);
	glVertex3d(11 - 11, 51, 20);
	glVertex3d(11 - 11, 45, 20);
	glVertex3d(10 - 11, 45, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(11 - 11, 48, 20);
	glVertex3d(11 - 11, 49, 20);
	glVertex3d(12 - 11, 49, 20);
	glVertex3d(12 - 11, 48, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(12 - 11, 43, 20);
	glVertex3d(12 - 11, 45, 20);
	glVertex3d(13 - 11, 45, 20);
	glVertex3d(13 - 11, 43, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(12 - 11, 50, 20);
	glVertex3d(12 - 11, 52, 20);
	glVertex3d(13 - 11, 52, 20);
	glVertex3d(13 - 11, 50, 20);
	glEnd();


	glBegin(GL_QUADS);
	glVertex3d(15 - 11, 48, 20);
	glVertex3d(15 - 11, 51, 20);
	glVertex3d(17 - 11, 51, 20);
	glVertex3d(17 - 11, 48, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(16 - 11, 51, 20);
	glVertex3d(16 - 11, 52, 20);
	glVertex3d(17 - 11, 52, 20);
	glVertex3d(17 - 11, 51, 20);
	glEnd();


	glBegin(GL_QUADS);
	glVertex3d(15 - 11, 46, 20);
	glVertex3d(15 - 11, 48, 20);
	glVertex3d(19 - 11, 48, 20);
	glVertex3d(19 - 11, 46, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(14 - 11, 46, 20);
	glVertex3d(14 - 11, 47, 20);
	glVertex3d(15 - 11, 47, 20);
	glVertex3d(15 - 11, 46, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(16 - 11, 44, 20);
	glVertex3d(16 - 11, 46, 20);
	glVertex3d(18 - 11, 46, 20);
	glVertex3d(18 - 11, 44, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(15 - 11, 43, 20);
	glVertex3d(15 - 11, 44, 20);
	glVertex3d(20 - 11, 44, 20);
	glVertex3d(20 - 11, 43, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(18 - 11, 42, 20);
	glVertex3d(18 - 11, 43, 20);
	glVertex3d(19 - 11, 43, 20);
	glVertex3d(19 - 11, 42, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(19 - 11, 44, 20);
	glVertex3d(19 - 11, 46, 20);
	glVertex3d(20 - 11, 46, 20);
	glVertex3d(20 - 11, 44, 20);
	glEnd();
	glPopMatrix();
}

void enderman_pita_globo() {

	glPushMatrix();
	glTranslated(0, 5, -3);
	glRotated(40, 0, 1, 0);
	glPushMatrix();
	glRotated(34, 1, 0, 0);
	glTranslated(0, 25, 0);
	glScaled(1, 150, 1);
	glutSolidCube(0.2);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 5, -3);
	glRotated(40, 0, 1, 0);
	glPushMatrix();
	glRotated(40, 1, 0, 0);
	glTranslated(0, 25, 0);
	glScaled(1, 180, 1);
	glutSolidCube(0.2);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glRotated(355, 0, 1, 0);
	glTranslated(5, 5, -3);
	glPushMatrix();
	glRotated(35, 1, 0, 0);
	glTranslated(0, 25, 0);
	glScaled(1, 200, 1);
	glutSolidCube(0.2);
	glPopMatrix();
	glPopMatrix();
}

void enderman_sombra_cabeza() {
	/* Pelo Lado Derecho (Al costado cabeza)*/
	glPushMatrix();
	glTranslated(0.01, 0, 0);

	color_enderman_sombra_secundario();
	glBegin(GL_QUADS);
	glVertex3d(4.01, 30, -3);
	glVertex3d(4.01, 31, -3);
	glVertex3d(4.01, 31, -1);
	glVertex3d(4.01, 30, -1);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(4.01, 27, -2);
	glVertex3d(4.01, 28, -2);
	glVertex3d(4.01, 28, 1);
	glVertex3d(4.01, 27, 1);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(4.01, 29, 1);
	glVertex3d(4.01, 31, 1);
	glVertex3d(4.01, 31, 2);
	glVertex3d(4.01, 29, 2);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(4.01, 25, -1);
	glVertex3d(4.01, 26, -1);
	glVertex3d(4.01, 26, 2);
	glVertex3d(4.01, 25, 2);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(4.01, 26, 3);
	glVertex3d(4.01, 30, 3);
	glVertex3d(4.01, 30, 4);
	glVertex3d(4.01, 26, 4);
	glEnd();

	color_enderman_sombra_primario();
	glBegin(GL_QUADS);
	glVertex3d(4, 32, -4);
	glVertex3d(4, 32, 4);
	glVertex3d(4, 24, 4);
	glVertex3d(4, 24, -4);
	glEnd();

	glPopMatrix();

	/* Pelo Lado Izquierdo (Al costado cabeza)*/
	glPushMatrix();
	glTranslated(-0.01, 0, 0);

	color_enderman_sombra_secundario();
	glBegin(GL_QUADS);
	glVertex3d(-4.01, 30, -3);
	glVertex3d(-4.01, 31, -3);
	glVertex3d(-4.01, 31, -1);
	glVertex3d(-4.01, 30, -1);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(-4.01, 27, -2);
	glVertex3d(-4.01, 28, -2);
	glVertex3d(-4.01, 28, 1);
	glVertex3d(-4.01, 27, 1);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(-4.01, 29, 1);
	glVertex3d(-4.01, 31, 1);
	glVertex3d(-4.01, 31, 2);
	glVertex3d(-4.01, 29, 2);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(-4.01, 25, -1);
	glVertex3d(-4.01, 26, -1);
	glVertex3d(-4.01, 26, 2);
	glVertex3d(-4.01, 25, 2);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(-4.01, 26, 3);
	glVertex3d(-4.01, 30, 3);
	glVertex3d(-4.01, 30, 4);
	glVertex3d(-4.01, 26, 4);
	glEnd();

	color_enderman_sombra_primario();
	glBegin(GL_QUADS);
	glVertex3d(-4, 32, -4);
	glVertex3d(-4, 32, 4);
	glVertex3d(-4, 24, 4);
	glVertex3d(-4, 24, -4);
	glEnd();

	glPopMatrix();

}

void enderman_cara() {
	/*Ojo Blanco y Morado*/
	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(238, 144, 255);
	glBegin(GL_QUADS);
	glVertex3d(-4, 28, -4);
	glVertex3d(-1, 28, -4);
	glVertex3d(-1, 27, -4);
	glVertex3d(-4, 27, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.025);
	glColor3ub(221, 45, 246);
	glBegin(GL_QUADS);
	glVertex3d(-3, 28, -4);
	glVertex3d(-2, 28, -4);
	glVertex3d(-2, 27, -4);
	glVertex3d(-3, 27, -4);
	glEnd();
	glPopMatrix();
	/*--------------------*/

	/*Ojo Blanco y Morado*/
	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(238, 144, 255);
	glBegin(GL_QUADS);
	glVertex3d(4, 28, -4);
	glVertex3d(1, 28, -4);
	glVertex3d(1, 27, -4);
	glVertex3d(4, 27, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.025);
	glColor3ub(221, 45, 246);
	glBegin(GL_QUADS);
	glVertex3d(3, 28, -4);
	glVertex3d(2, 28, -4);
	glVertex3d(2, 27, -4);
	glVertex3d(3, 27, -4);
	glEnd();
	glPopMatrix();
	/*--------------------*/
}

void enderman_cabeza() {
	/* Cabeza (Cubo: ahi se superponen diseños faciales[rectangulos, circulos, etc])*/
	glPushMatrix();
	glTranslated(0, 34, 0);
	color_enderman_principal();
	glutSolidCube(8);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 6, 0);
	enderman_cara();
	enderman_sombra_cabeza();
	glPopMatrix();
}

void enderman_cuerpo() {
	color_enderman_principal();
	/* Cuerpo */
	glPushMatrix();
	glTranslated(0, 23.5, 0);
	glScaled(8, 13, 4);
	glutSolidCube(1);
	glPopMatrix();
}

void enderman_pierna_izquierda() {
	color_enderman_principal();
	glPushMatrix();
	glTranslated(-2, 9, 0);
	glScaled(1, 9, 1);
	glutSolidCube(2);
	glPopMatrix();
	
}

void enderman_pierna_derecha() {
	color_enderman_principal();
	glPushMatrix();
	glTranslated(2, 9, 0);
	glScaled(1, 9, 1);
	glutSolidCube(2);
	glPopMatrix();
}

void enderman_sombra_brazo_izquierdo() {
	/* Sombra Brazo Izquierdo*/
	glPushMatrix();
	glTranslated(-0.001, 0, -2.9);
	glRotated(15.5, 1, 0, 0);

	color_enderman_sombra_secundario();
	glBegin(GL_QUADS);
	glVertex3d(4, 9, -3);
	glVertex3d(4, 14, -3);
	glVertex3d(4, 14, -2);
	glVertex3d(4, 9, -2);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(4, 15, -3);
	glVertex3d(4, 16, -3);
	glVertex3d(4, 16, -2);
	glVertex3d(4, 15, -2);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(4, 9, -2);
	glVertex3d(4, 11, -2);
	glVertex3d(4, 11, -1);
	glVertex3d(4, 9, -1);
	glEnd();

	color_enderman_sombra_primario();
	glBegin(GL_QUADS);
	glVertex3d(4, 9, -3);
	glVertex3d(4, 24.5, -3);
	glVertex3d(4, 24.5, -1);
	glVertex3d(4, 9, -1);
	glEnd();
	glPopMatrix();
}

void enderman_sombra_brazo_derecho()
{
	/* Sombra Brazo Derecho*/
	glPushMatrix();
	glTranslated(+0.001, 0, 7);
	glRotated(360 - 15.5, 1, 0, 0);

	color_enderman_sombra_secundario();
	glBegin(GL_QUADS);
	glVertex3d(-4, 9.5, -3);
	glVertex3d(-4, 14, -3);
	glVertex3d(-4, 14, -2);
	glVertex3d(-4, 9.5, -2);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(-4, 15, -3);
	glVertex3d(-4, 16, -3);
	glVertex3d(-4, 16, -2);
	glVertex3d(-4, 15, -2);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(-4, 9.5, -2);
	glVertex3d(-4, 11, -2);
	glVertex3d(-4, 11, -1);
	glVertex3d(-4, 9.5, -1);
	glEnd();

	color_enderman_sombra_primario();
	glBegin(GL_QUADS);
	glVertex3d(-4, 9.5, -3);
	glVertex3d(-4, 24.5, -3);
	glVertex3d(-4, 24.5, -1);
	glVertex3d(-4, 9.5, -1);
	glEnd();
	glPopMatrix();
}

void enderman_brazo_izquierdo() {
	color_enderman_principal();
	glPushMatrix();
	glTranslated(-5, 18.5, 0);
	glScaled(1, 11.5, 1);
	glutSolidCube(2);
	glPopMatrix();
}

void enderman_brazo_derecho() {
	color_enderman_principal();
	glPushMatrix();
	glTranslated(5, 18.5, 0);
	glScaled(1, 11.5, 1);
	glutSolidCube(2);
	glPopMatrix();
}

void espada()
{
	glPushMatrix();
	glTranslated(0, 0, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(1, 0, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(2, 0, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(0, 1, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(1, 1, 0);
	glColor3ub(29, 136, 117);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(2, 1, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(0, 2, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(1, 2, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(2, 2, 0);
	glColor3ub(135, 101, 38);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 3, 0);
	glColor3ub(135, 101, 38);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(4, 4, 0);
	glColor3ub(135, 101, 38);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(2, 3, 0);
	glColor3ub(72, 53, 20);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 4, 0);
	glColor3ub(72, 53, 20);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 2, 0);
	glColor3ub(39, 29, 11);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(4, 3, 0);
	glColor3ub(39, 29, 11);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(5, 5, 0);
	glColor3ub(29, 136, 117);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(6, 6, 0);
	glColor3ub(42, 196, 170);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(7, 7, 0);
	glColor3ub(42, 196, 170);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(8, 8, 0);
	glColor3ub(42, 196, 170);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(9, 9, 0);
	glColor3ub(42, 196, 170);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(10, 10, 0);
	glColor3ub(42, 196, 170);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(11, 11, 0);
	glColor3ub(42, 196, 170);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(12, 12, 0);
	glColor3ub(42, 196, 170);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(13, 13, 0);
	glColor3ub(42, 196, 170);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(14, 14, 0);
	glColor3ub(42, 196, 170);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(15, 15, 0);
	glColor3ub(13, 62, 52);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(7, 6, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(8, 7, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(9, 8, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(10, 9, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(11, 10, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(12, 11, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(13, 12, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(14, 13, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(6, 7, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(7, 8, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(8, 9, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(9, 10, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(10, 11, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(11, 12, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(12, 13, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(13, 14, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(8, 6, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(9, 7, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(10, 8, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(11, 9, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(12, 10, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(13, 11, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(14, 12, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(15, 13, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(15, 14, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(6, 8, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(7, 9, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(8, 10, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(9, 11, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(10, 12, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(11, 13, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(12, 14, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(13, 15, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(14, 15, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(5, 4, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(6, 3, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(7, 3, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(8, 2, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(9, 2, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(9, 3, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(8, 4, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(7, 5, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(6, 5, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(5, 6, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(5, 7, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(4, 8, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 9, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(2, 9, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(2, 8, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 7, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 6, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(4, 5, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(6, 4, 0);
	glColor3ub(28, 136, 117);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(7, 4, 0);
	glColor3ub(28, 136, 117);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(8, 3, 0);
	glColor3ub(28, 136, 117);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(4, 6, 0);
	glColor3ub(28, 136, 117);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(4, 7, 0);
	glColor3ub(28, 136, 117);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 8, 0);
	glColor3ub(28, 136, 117);
	glutSolidCube(1);
	glPopMatrix();
}

void steve_cara()
{
	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(255, 255, 255);
	glBegin(GL_QUADS);
	glVertex3d(-3, 28, -4);
	glVertex3d(-2, 28, -4);
	glVertex3d(-2, 27, -4);
	glVertex3d(-3, 27, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(82, 61, 137);
	glBegin(GL_QUADS);
	glVertex3d(-2, 28, -4);
	glVertex3d(-1, 28, -4);
	glVertex3d(-1, 27, -4);
	glVertex3d(-2, 27, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(255, 255, 255);
	glBegin(GL_QUADS);
	glVertex3d(3, 28, -4);
	glVertex3d(2, 28, -4);
	glVertex3d(2, 27, -4);
	glVertex3d(3, 27, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(82, 61, 137);
	glBegin(GL_QUADS);
	glVertex3d(2, 28, -4);
	glVertex3d(1, 28, -4);
	glVertex3d(1, 27, -4);
	glVertex3d(2, 27, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(164, 92, 55);
	glBegin(GL_QUADS);
	glVertex3d(-1, 27, -4);
	glVertex3d(1, 27, -4);
	glVertex3d(1, 26, -4);
	glVertex3d(-1, 26, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(96, 62, 34);
	glBegin(GL_QUADS);
	glVertex3d(-2, 25, -4);
	glVertex3d(2, 25, -4);
	glVertex3d(2, 24, -4);
	glVertex3d(-2, 24, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(96, 62, 34);
	glBegin(GL_QUADS);
	glVertex3d(-2, 26, -4);
	glVertex3d(-1, 26, -4);
	glVertex3d(-1, 25, -4);
	glVertex3d(-2, 25, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(96, 62, 34);
	glBegin(GL_QUADS);
	glVertex3d(2, 26, -4);
	glVertex3d(1, 26, -4);
	glVertex3d(1, 25, -4);
	glVertex3d(2, 25, -4);
	glEnd();
	glPopMatrix();
}

void steve_cabeza()
{
	steve_cara();

	//Cabeza
	glPushMatrix();
	glTranslated(-3, 25, -1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, 25, -1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, 25, -1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(3, 25, -1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-3, 25, -3);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, 25, -3);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, 25, -3);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(3, 25, -3);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-3, 25, 1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, 25, 1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, 25, 1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(3, 25, 1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-3, 25, 3);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, 25, 3);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, 25, 3);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(3, 25, 3);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	//2
	glPushMatrix();
	glTranslated(-3, 27, -1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, 27, -1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, 27, -1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(3, 27, -1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-3, 27, -3);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, 27, -3);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, 27, -3);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(3, 27, -3);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-3, 27, 1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, 27, 1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, 27, 1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(3, 27, 1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-3, 27, 3);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, 27, 3);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, 27, 3);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(3, 27, 3);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	//3
	glPushMatrix();
	glTranslated(-3, 29, -1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, 29, -1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, 29, -1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(3, 29, -1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-3, 29, -3);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, 29, -3);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, 29, -3);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(3, 29, -3);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-3, 29, 1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, 29, 1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, 29, 1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(3, 29, 1);
	glColor3ub(218, 152, 102);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-3, 29, 3);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, 29, 3);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, 29, 3);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(3, 29, 3);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	//4
	glPushMatrix();
	glTranslated(-3, 31, -1);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, 31, -1);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, 31, -1);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(3, 31, -1);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-3, 31, -3);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, 31, -3);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, 31, -3);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(3, 31, -3);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-3, 31, 1);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, 31, 1);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, 31, 1);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(3, 31, 1);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-3, 31, 3);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, 31, 3);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, 31, 3);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(3, 31, 3);
	glColor3ub(93, 59, 32);
	glutSolidCube(2);
	glPopMatrix();

	//Cabello atras
	glPushMatrix();
	glTranslated(0, 0, 0.01);
	glColor3ub(93, 59, 32);
	glBegin(GL_QUADS);
	glVertex3d(-4, 32, 4);
	glVertex3d(4, 32, 4);
	glVertex3d(4, 25, 4);
	glVertex3d(-4, 25, 4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, 0.01);
	glColor3ub(93, 59, 32);
	glBegin(GL_QUADS);
	glVertex3d(-2, 25.01, 4);
	glVertex3d(2, 25.01, 4);
	glVertex3d(2, 24, 4);
	glVertex3d(-2, 24, 4);
	glEnd();
	glPopMatrix();

	//Cabello
	glPushMatrix();
	glTranslated(0.01, 0, 0);
	glColor3ub(93, 59, 32);
	glBegin(GL_QUADS);
	glVertex3d(4, 32, -4);
	glVertex3d(4, 32, 4);
	glVertex3d(4, 28, 4);
	glVertex3d(4, 28, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0.01, 0, 0);
	glColor3ub(93, 59, 32);
	glBegin(GL_QUADS);
	glVertex3d(4, 28, -4);
	glVertex3d(4, 28, -3);
	glVertex3d(4, 27, -3);
	glVertex3d(4, 27, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0.01, 0, 0);
	glColor3ub(93, 59, 32);
	glBegin(GL_QUADS);
	glVertex3d(4, 28, -1);
	glVertex3d(4, 28, 4);
	glVertex3d(4, 26, 4);
	glVertex3d(4, 26, -1);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0.01, 0, 0);
	glColor3ub(93, 59, 32);
	glBegin(GL_QUADS);
	glVertex3d(4, 26, 1);
	glVertex3d(4, 26, 4);
	glVertex3d(4, 25, 4);
	glVertex3d(4, 25, 1);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-0.01, 0, 0);
	glColor3ub(93, 59, 32);
	glBegin(GL_QUADS);
	glVertex3d(-4, 32, -4);
	glVertex3d(-4, 32, 4);
	glVertex3d(-4, 28, 4);
	glVertex3d(-4, 28, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-0.01, 0, 0);
	glColor3ub(93, 59, 32);
	glBegin(GL_QUADS);
	glVertex3d(-4, 28, -4);
	glVertex3d(-4, 28, -3);
	glVertex3d(-4, 27, -3);
	glVertex3d(-4, 27, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-0.01, 0, 0);
	glColor3ub(93, 59, 32);
	glBegin(GL_QUADS);
	glVertex3d(-4, 28, -1);
	glVertex3d(-4, 28, 4);
	glVertex3d(-4, 26, 4);
	glVertex3d(-4, 26, -1);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-0.01, 0, 0);
	glColor3ub(93, 59, 32);
	glBegin(GL_QUADS);
	glVertex3d(-4, 26, 1);
	glVertex3d(-4, 26, 4);
	glVertex3d(-4, 25, 4);
	glVertex3d(-4, 25, 1);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0.01, 0);
	glColor3ub(93, 59, 32);
	glBegin(GL_QUADS);
	glVertex3d(-4, 32, -4);
	glVertex3d(-4, 32, 4);
	glVertex3d(4, 32, 4);
	glVertex3d(4, 32, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(93, 59, 32);
	glBegin(GL_QUADS);
	glVertex3d(-4, 32, -4);
	glVertex3d(4, 32, -4);
	glVertex3d(4, 30, -4);
	glVertex3d(-4, 30, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(93, 59, 32);
	glBegin(GL_QUADS);
	glVertex3d(-4, 30.01, -4);
	glVertex3d(-3, 30.01, -4);
	glVertex3d(-3, 29, -4);
	glVertex3d(-4, 29, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(93, 59, 32);
	glBegin(GL_QUADS);
	glVertex3d(4, 30.01, -4);
	glVertex3d(3, 30.01, -4);
	glVertex3d(3, 29, -4);
	glVertex3d(4, 29, -4);
	glEnd();
	glPopMatrix();
}

void steve_cuerpo()
{
	//Cuerpo
	glPushMatrix();
	glTranslated(-2, 22, 0);
	glColor3ub(22, 191, 186);
	glutSolidCube(4);
	glPopMatrix();

	glPushMatrix();
	glTranslated(2, 22, 0);
	glColor3ub(22, 191, 186);
	glutSolidCube(4);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-2, 18, 0);
	glColor3ub(22, 191, 186);
	glutSolidCube(4);
	glPopMatrix();

	glPushMatrix();
	glTranslated(2, 18, 0);
	glColor3ub(22, 191, 186);
	glutSolidCube(4);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-2, 16, 0);
	glColor3ub(22, 191, 186);
	glutSolidCube(4);
	glPopMatrix();

	glPushMatrix();
	glTranslated(2, 16, 0);
	glColor3ub(22, 191, 186);
	glutSolidCube(4);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(218, 152, 102);
	glBegin(GL_QUADS);
	glVertex3d(-2, 24, -2);
	glVertex3d(2, 24, -2);
	glVertex3d(2, 23, -2);
	glVertex3d(-2, 23, -2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(218, 152, 102);
	glBegin(GL_QUADS);
	glVertex3d(-1, 24, -2);
	glVertex3d(1, 24, -2);
	glVertex3d(1, 22, -2);
	glVertex3d(-1, 22, -2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, 13, 1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-3, 13, 1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-1, 13, -1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-3, 13, -1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, 13, 1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 13, 1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(1, 13, -1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 13, -1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
}

void steve_brazo_izquierdo()
{
	glPushMatrix();
	glTranslated(-6, 22, 0);
	glColor3ub(22, 191, 186);
	glutSolidCube(4);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-6, 18, 0);
	glColor3ub(218, 152, 102);
	glutSolidCube(4);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-6, 14, 0);
	glColor3ub(218, 152, 102);
	glutSolidCube(4);
	glPopMatrix();
}

void steve_brazo_derecho()
{
	glPushMatrix();
	glTranslated(6, 22, 0);
	glColor3ub(22, 191, 186);
	glutSolidCube(4);
	glPopMatrix();
	glPushMatrix();
	glTranslated(6, 18, 0);
	glColor3ub(218, 152, 102);
	glutSolidCube(4);
	glPopMatrix();
	glPushMatrix();
	glTranslated(6, 14, 0);
	glColor3ub(218, 152, 102);
	glutSolidCube(4);
	glPopMatrix();
}

void steve_pierna_izquierda()
{
	glPushMatrix();
	glTranslated(-1, 12, 1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-3, 12, 1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-1, 12, -1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-3, 12, -1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-2, 10, 0);
	glColor3ub(13, 113, 173);
	glutSolidCube(4);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-2, 8, 0);
	glColor3ub(13, 113, 173);
	glutSolidCube(4);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-2, 4, 0);
	glColor3ub(13, 113, 173);
	glutSolidCube(4);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, 1, 1);
	glColor3ub(107, 107, 107);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-3, 1, 1);
	glColor3ub(107, 107, 107);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-1, 1, -1);
	glColor3ub(107, 107, 107);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-3, 1, -1);
	glColor3ub(107, 107, 107);
	glutSolidCube(2);
	glPopMatrix();
}

void steve_pierna_derecha()
{
	glPushMatrix();
	glTranslated(1, 12, 1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 12, 1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(1, 12, -1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 12, -1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(2, 10, 0);
	glColor3ub(13, 113, 173);
	glutSolidCube(4);
	glPopMatrix();

	glPushMatrix();
	glTranslated(2, 8, 0);
	glColor3ub(13, 113, 173);
	glutSolidCube(4);
	glPopMatrix();
	glPushMatrix();
	glTranslated(2, 4, 0);
	glColor3ub(13, 113, 173);
	glutSolidCube(4);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, 1, 1);
	glColor3ub(107, 107, 107);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 1, 1);
	glColor3ub(107, 107, 107);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(1, 1, -1);
	glColor3ub(107, 107, 107);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 1, -1);
	glColor3ub(107, 107, 107);
	glutSolidCube(2);
	glPopMatrix();
}

void steve_brazo_derecho_con_espada()
{
	steve_brazo_derecho();
	//espada
	glPushMatrix();
	glTranslated(6, 14, 4);
	glRotated(-45, 1, 0, 0);
	glPushMatrix();
	glRotated(90, 0, 1, 0);
	espada();
	glPopMatrix();
	glPopMatrix();
}

void steve_en_pose()
{
	glPushMatrix();
	glRotated(15, 0, 1, 0);
	steve_cabeza();
	glPopMatrix();

	steve_cuerpo();

	glPushMatrix();
	glTranslated(0, 6, 15.5);
	glRotated(-45, 1, 0, 0);
	steve_brazo_izquierdo();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 6, -15.5);
	glRotated(45, 1, 0, 0);
	steve_brazo_derecho_con_espada();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 3.5, -7);
	glRotated(45, 1, 0, 0);
	steve_pierna_izquierda();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 3.5, 7);
	glRotated(-45, 1, 0, 0);
	steve_pierna_derecha();
	glPopMatrix();
}

void zombie_cara()
{
	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(16, 18, 18);
	glBegin(GL_QUADS);
	glVertex3d(-3, 28, -4);
	glVertex3d(-2, 28, -4);
	glVertex3d(-2, 27, -4);
	glVertex3d(-3, 27, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(16, 18, 18);
	glBegin(GL_QUADS);
	glVertex3d(-2, 28, -4);
	glVertex3d(-1, 28, -4);
	glVertex3d(-1, 27, -4);
	glVertex3d(-2, 27, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(16, 18, 18);
	glBegin(GL_QUADS);
	glVertex3d(3, 28, -4);
	glVertex3d(2, 28, -4);
	glVertex3d(2, 27, -4);
	glVertex3d(3, 27, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(0,0,0);
	glBegin(GL_QUADS);
	glVertex3d(2, 28, -4);
	glVertex3d(1, 28, -4);
	glVertex3d(1, 27, -4);
	glVertex3d(2, 27, -4);
	glEnd();
	glPopMatrix();



	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(53, 87, 43);
	glBegin(GL_QUADS);
	glVertex3d(-1, 27, -4);
	glVertex3d(1, 27, -4);
	glVertex3d(1, 26, -4);
	glVertex3d(-1, 26, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(53, 87, 43);
	glBegin(GL_QUADS);
	glVertex3d(-2, 25, -4);
	glVertex3d(2, 25, -4);
	glVertex3d(2, 24, -4);
	glVertex3d(-2, 24, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(53, 87, 43);
	glBegin(GL_QUADS);
	glVertex3d(-2, 26, -4);
	glVertex3d(-1, 26, -4);
	glVertex3d(-1, 25, -4);
	glVertex3d(-2, 25, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(53, 87, 43);
	glBegin(GL_QUADS);
	glVertex3d(2, 26, -4);
	glVertex3d(1, 26, -4);
	glVertex3d(1, 25, -4);
	glVertex3d(2, 25, -4);
	glEnd();
	glPopMatrix();
}

void zombie_cabeza()
{
	zombie_cara();

	glPushMatrix();
	glTranslated(0, 28, 0);
	glColor3ub(80, 109, 62);
	glutSolidCube(8);
	glPopMatrix();

	//Cabello atras
	glPushMatrix();
	glTranslated(0, 0, 0.01);
	glColor3ub(53, 87, 43);
	glBegin(GL_QUADS);
	glVertex3d(-4, 32, 4);
	glVertex3d(4, 32, 4);
	glVertex3d(4, 25, 4);
	glVertex3d(-4, 25, 4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, 0.01);
	glColor3ub(53, 87, 43);
	glBegin(GL_QUADS);
	glVertex3d(-2, 25.01, 4);
	glVertex3d(2, 25.01, 4);
	glVertex3d(2, 24, 4);
	glVertex3d(-2, 24, 4);
	glEnd();
	glPopMatrix();

	//Cabello
	glPushMatrix();
	glTranslated(0.01, 0, 0);
	glColor3ub(53, 87, 43);
	glBegin(GL_QUADS);
	glVertex3d(4, 32, -4);
	glVertex3d(4, 32, 4);
	glVertex3d(4, 28, 4);
	glVertex3d(4, 28, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0.01, 0, 0);
	glColor3ub(53, 87, 43);
	glBegin(GL_QUADS);
	glVertex3d(4, 28, -4);
	glVertex3d(4, 28, -3);
	glVertex3d(4, 27, -3);
	glVertex3d(4, 27, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0.01, 0, 0);
	glColor3ub(53, 87, 43);
	glBegin(GL_QUADS);
	glVertex3d(4, 28, -1);
	glVertex3d(4, 28, 4);
	glVertex3d(4, 26, 4);
	glVertex3d(4, 26, -1);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0.01, 0, 0);
	glColor3ub(53, 87, 43);
	glBegin(GL_QUADS);
	glVertex3d(4, 26, 1);
	glVertex3d(4, 26, 4);
	glVertex3d(4, 25, 4);
	glVertex3d(4, 25, 1);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-0.01, 0, 0);
	glColor3ub(53, 87, 43);
	glBegin(GL_QUADS);
	glVertex3d(-4, 32, -4);
	glVertex3d(-4, 32, 4);
	glVertex3d(-4, 28, 4);
	glVertex3d(-4, 28, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-0.01, 0, 0);
	glColor3ub(53, 87, 43);
	glBegin(GL_QUADS);
	glVertex3d(-4, 28, -4);
	glVertex3d(-4, 28, -3);
	glVertex3d(-4, 27, -3);
	glVertex3d(-4, 27, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-0.01, 0, 0);
	glColor3ub(53, 87, 43);
	glBegin(GL_QUADS);
	glVertex3d(-4, 28, -1);
	glVertex3d(-4, 28, 4);
	glVertex3d(-4, 26, 4);
	glVertex3d(-4, 26, -1);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-0.01, 0, 0);
	glColor3ub(53, 87, 43);
	glBegin(GL_QUADS);
	glVertex3d(-4, 26, 1);
	glVertex3d(-4, 26, 4);
	glVertex3d(-4, 25, 4);
	glVertex3d(-4, 25, 1);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0.01, 0);
	glColor3ub(53, 87, 43);
	glBegin(GL_QUADS);
	glVertex3d(-4, 32, -4);
	glVertex3d(-4, 32, 4);
	glVertex3d(4, 32, 4);
	glVertex3d(4, 32, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(53, 87, 43);
	glBegin(GL_QUADS);
	glVertex3d(-4, 32, -4);
	glVertex3d(4, 32, -4);
	glVertex3d(4, 30, -4);
	glVertex3d(-4, 30, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(53, 87, 43);
	glBegin(GL_QUADS);
	glVertex3d(-4, 30.01, -4);
	glVertex3d(-3, 30.01, -4);
	glVertex3d(-3, 29, -4);
	glVertex3d(-4, 29, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(53, 87, 43);
	glBegin(GL_QUADS);
	glVertex3d(4, 30.01, -4);
	glVertex3d(3, 30.01, -4);
	glVertex3d(3, 29, -4);
	glVertex3d(4, 29, -4);
	glEnd();
	glPopMatrix();
}

void zombie_cuerpo()
{
	//Cuerpo
	glPushMatrix();
	glTranslated(-2, 22, 0);
	glColor3ub(22, 191, 186);
	glutSolidCube(4);
	glPopMatrix();

	glPushMatrix();
	glTranslated(2, 22, 0);
	glColor3ub(22, 191, 186);
	glutSolidCube(4);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-2, 18, 0);
	glColor3ub(22, 191, 186);
	glutSolidCube(4);
	glPopMatrix();

	glPushMatrix();
	glTranslated(2, 18, 0);
	glColor3ub(22, 191, 186);
	glutSolidCube(4);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-2, 16, 0);
	glColor3ub(22, 191, 186);
	glutSolidCube(4);
	glPopMatrix();

	glPushMatrix();
	glTranslated(2, 16, 0);
	glColor3ub(22, 191, 186);
	glutSolidCube(4);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(80, 109, 62);
	glBegin(GL_QUADS);
	glVertex3d(-2, 24, -2);
	glVertex3d(2, 24, -2);
	glVertex3d(2, 23, -2);
	glVertex3d(-2, 23, -2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(80, 109, 62);
	glBegin(GL_QUADS);
	glVertex3d(-1, 24, -2);
	glVertex3d(1, 24, -2);
	glVertex3d(1, 22, -2);
	glVertex3d(-1, 22, -2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, 13, 1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-3, 13, 1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-1, 13, -1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-3, 13, -1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, 13, 1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 13, 1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(1, 13, -1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 13, -1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
}

void zombie_brazo_izquierdo()
{
	glPushMatrix();
	glTranslated(-6, 22, 0);
	glColor3ub(22, 191, 186);
	glutSolidCube(4);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-6, 18, 0);
	glColor3ub(80, 109, 62);
	glutSolidCube(4);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-6, 14, 0);
	glColor3ub(80, 109, 62);
	glutSolidCube(4);
	glPopMatrix();
}

void zombie_brazo_derecho()
{
	glPushMatrix();
	glTranslated(6, 22, 0);
	glColor3ub(22, 191, 186);
	glutSolidCube(4);
	glPopMatrix();
	glPushMatrix();
	glTranslated(6, 18, 0);
	glColor3ub(80, 109, 62);
	glutSolidCube(4);
	glPopMatrix();
	glPushMatrix();
	glTranslated(6, 14, 0);
	glColor3ub(80, 109, 62);
	glutSolidCube(4);
	glPopMatrix();
}

void zombie_pierna_izquierda()
{
	glPushMatrix();
	glTranslated(-1, 12, 1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-3, 12, 1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-1, 12, -1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-3, 12, -1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-2, 10, 0);
	glColor3ub(13, 113, 173);
	glutSolidCube(4);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-2, 8, 0);
	glColor3ub(13, 113, 173);
	glutSolidCube(4);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-2, 4, 0);
	glColor3ub(13, 113, 173);
	glutSolidCube(4);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, 1, 1);
	glColor3ub(107, 107, 107);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-3, 1, 1);
	glColor3ub(107, 107, 107);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-1, 1, -1);
	glColor3ub(107, 107, 107);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-3, 1, -1);
	glColor3ub(107, 107, 107);
	glutSolidCube(2);
	glPopMatrix();
}

void zombie_pierna_derecha()
{
	glPushMatrix();
	glTranslated(1, 12, 1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 12, 1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(1, 12, -1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 12, -1);
	glColor3ub(13, 113, 173);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(2, 10, 0);
	glColor3ub(13, 113, 173);
	glutSolidCube(4);
	glPopMatrix();

	glPushMatrix();
	glTranslated(2, 8, 0);
	glColor3ub(13, 113, 173);
	glutSolidCube(4);
	glPopMatrix();
	glPushMatrix();
	glTranslated(2, 4, 0);
	glColor3ub(13, 113, 173);
	glutSolidCube(4);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, 1, 1);
	glColor3ub(107, 107, 107);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 1, 1);
	glColor3ub(107, 107, 107);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(1, 1, -1);
	glColor3ub(107, 107, 107);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 1, -1);
	glColor3ub(107, 107, 107);
	glutSolidCube(2);
	glPopMatrix();
}

//ANIMACIONES---------------------------------------------------------------------
void steve(float velocity)
{
	glPushMatrix();
	glRotated(180, 0, 1, 0);

	steve_cabeza();

	steve_cuerpo();

	steve_brazo_izquierdo();

	steve_brazo_derecho();

	steve_pierna_izquierda();

	steve_pierna_derecha();
	glPopMatrix();
}

void steve_caminando(float velocity)
{
	glPushMatrix();
	glRotated(180, 0, 1, 0);

	glPushMatrix();
	glTranslated(0, 22, 0);
	glRotated(-45 * std::sin(tiempo * velocity), 1, 0, 0);
	glTranslated(0, -22, 0);
	steve_brazo_izquierdo();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 22, 0);
	glRotated(45 * std::sin(tiempo * velocity), 1, 0, 0);
	glTranslated(0, -22, 0);
	steve_brazo_derecho();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 12, 0);
	glRotated(45 * std::sin(tiempo * velocity), 1, 0, 0);
	glTranslated(0, -12, 0);
	steve_pierna_izquierda();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 12, 0);
	glRotated(-45 * std::sin(tiempo * velocity), 1, 0, 0);
	glTranslated(0, -12, 0);
	steve_pierna_derecha();
	glPopMatrix();

	steve_cuerpo();

	steve_cabeza();
	glPopMatrix();
}

void steve_caminando_con_espada(float velocity)
{
	glPushMatrix();
	glRotated(180, 0, 1, 0);

	glPushMatrix();
	glTranslated(0, 22, 0);
	glRotated(-45 * std::sin(tiempo * velocity), 1, 0, 0);
	glTranslated(0, -22, 0);
	steve_brazo_izquierdo();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 22, 0);
	glRotated(45 * std::sin(tiempo * velocity), 1, 0, 0);
	glTranslated(0, -22, 0);
	steve_brazo_derecho_con_espada();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 12, 0);
	glRotated(45 * std::sin(tiempo * velocity), 1, 0, 0);
	glTranslated(0, -12, 0);
	steve_pierna_izquierda();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 12, 0);
	glRotated(-45 * std::sin(tiempo * velocity), 1, 0, 0);
	glTranslated(0, -12, 0);
	steve_pierna_derecha();
	glPopMatrix();

	steve_cuerpo();

	steve_cabeza();
	glPopMatrix();
}

void steve_picando(float velocity)
{
	glPushMatrix();
	glRotated(180,0, 1, 0);

	glPushMatrix();
	glTranslated(0, 22, 0);
	glRotated(45 * abs(std::sin(tiempo * velocity)), 1, 0, 0);
	glTranslated(0, -22, 0);
	steve_brazo_derecho_con_espada();
	glPopMatrix();

	steve_brazo_izquierdo();

	steve_pierna_izquierda();

	steve_pierna_derecha();

	steve_cuerpo();

	steve_cabeza();

	glPopMatrix();
}

void enderman(float velocity)
{
	glPushMatrix();
	glRotated(180, 0, 1, 0);

	enderman_cabeza();
	enderman_cuerpo();
	enderman_pierna_izquierda();
	enderman_pierna_derecha();

	enderman_brazo_izquierdo();
	enderman_brazo_derecho();
	/*enderman_pita_globo();
	enderman_globo(10);*/
	glPopMatrix();
}

void enderman_caminando(float velocity)
{
	glPushMatrix();
	glRotated(180, 0, 1, 0);

	glPushMatrix();
	glTranslated(0, 29, 0);
	glRotated(-30 * std::sin(tiempo * velocity), 1, 0, 0);
	glTranslated(0, -29, 0);
	enderman_brazo_izquierdo();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 29, 0);
	glRotated(30 * std::sin(tiempo * velocity), 1, 0, 0);
	glTranslated(0, -29, 0);
	enderman_brazo_derecho();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 17, 0);
	glRotated(20 * std::sin(tiempo * velocity), 1, 0, 0);
	glTranslated(0, -17, 0);
	enderman_pierna_izquierda();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 17, 0);
	glRotated(-20 * std::sin(tiempo * velocity), 1, 0, 0);
	glTranslated(0, -17, 0);
	enderman_pierna_derecha();
	glPopMatrix();

	enderman_cabeza();
	enderman_cuerpo();

	glPopMatrix();
}

void cerdo(float velocity)
{
	cerdo_patas();
	cerdo_cuerpo();
	cerdo_cara();
	cerdo_nariz();
	cerdo_ojo();
}

void cerdo_caminando(float velocity)
{
	glPushMatrix();
	glTranslated(2.5, 6, 5);
	glRotated(-30 * std::sin(tiempo * velocity), 1, 0, 0);
	glTranslated(0, -6, 0);
	cerdo_pata();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-2.5, 6, 5);
	glRotated(30 * std::sin(tiempo * velocity), 1, 0, 0);
	glTranslated(0, -6, 0);
	cerdo_pata();
	glPopMatrix();

	glPushMatrix();
	glTranslated(2.5, 6, -7);
	glRotated(-30 * std::sin(tiempo * velocity), 1, 0, 0);
	glTranslated(0, -6, 0);
	cerdo_pata();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-2.5, 6, -7);
	glRotated(30 * std::sin(tiempo * velocity), 1, 0, 0);
	glTranslated(0, -6, 0);
	cerdo_pata();
	glPopMatrix();


	cerdo_cuerpo();
	cerdo_cara();
	cerdo_nariz();
	cerdo_ojo();
}

void zombie(float velocity)
{
	glPushMatrix();
	glRotated(180, 0, 1, 0);

	zombie_cabeza();

	zombie_cuerpo();

	zombie_brazo_izquierdo();

	zombie_brazo_derecho();

	zombie_pierna_izquierda();

	zombie_pierna_derecha();
	glPopMatrix();
}

void zombie_caminando(float velocity)
{
	glPushMatrix();
	glRotated(180, 0, 1, 0);

	glPushMatrix();
	glTranslated(0, 22, 0);
	glRotated(80 - 5 * std::sin(tiempo * velocity), 1, 0, 0);
	glTranslated(0, -22, 0);
	zombie_brazo_izquierdo();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 22, 0);
	glRotated(80 + 5 * std::sin(tiempo * velocity), 1, 0, 0);
	glTranslated(0, -22, 0);
	zombie_brazo_derecho();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 12, 0);
	glRotated(45 * std::sin(tiempo * velocity), 1, 0, 0);
	glTranslated(0, -12, 0);
	zombie_pierna_izquierda();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 12, 0);
	glRotated(-45 * std::sin(tiempo * velocity), 1, 0, 0);
	glTranslated(0, -12, 0);
	zombie_pierna_derecha();
	glPopMatrix();

	zombie_cuerpo();

	zombie_cabeza();
	glPopMatrix();
}

void salto(void (* animacion)(float), float velocity, float altura)
{
	glPushMatrix();
	glTranslated(0, altura * abs(std::sin(tiempo * velocity)), 0);
	animacion(velocity);
	glPopMatrix();
}

void dibujar() {
	inicializarLuces(tiempoAnochese);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(camaraX, camaraY, camaraZ, 0, 24, 0, 0, 1, 0);
	glPushMatrix();
	glRotated(angulo, 0, 1, 0);

	piso(tiempoAnochese);
	pared(tiempoAnochese);
	sol(tiempoAnochese);
	luna(tiempoAnochese);
	estrellas(tiempoAnochese);
	nubes(tiempoAnochese);

	//steve(0);
	//steve_caminando(4.5);
	//steve_caminando_con_espada(4.5);
	//steve_picando(9);

	//enderman(0);
	//enderman_caminando(4.5);

	//cerdo(0);
	//cerdo_caminando(4.5);

	//zombie(0);
	//zombie_caminando(4.5);

	salto(steve_caminando_con_espada, 4.5, 16);

	ejes();

	glPopMatrix();
	glutSwapBuffers();
}

void timer(int t) {
	glutPostRedisplay();
	glutTimerFunc(20, timer, 0);
}

void teclado(int tecla, int x, int y) {
	switch (tecla) {
	case 101:
		camaraY += 0.5;
		break;
	case 103:
		camaraY -= 0.5;
		break;
	case 100:
		angulo -= 2;
		break;
	case 102:
		angulo += 2;
		break;
	}
}

void update(int value)
{
	tiempo += 0.1;
	glutPostRedisplay();
	glutTimerFunc(100, update, 0);//Cada segundo
}

int main(int argc, char* argv[]) {
	//PlaySound(TEXT("Cerdo.mp3"), NULL, SND_SYNC);
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
	glutInitWindowSize(1009, 711);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Grupo 3 - Gráficos en Computación");
	glutReshapeFunc(iniciarVentana);
	glutDisplayFunc(dibujar);
	glutSpecialFunc(teclado);
	glutTimerFunc(0, timer, 0);
	glutTimerFunc(tiempo, update, 0);
	glutMainLoop();
	return 0;
}