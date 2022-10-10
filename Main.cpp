#include <GL/glut.h>
#include <math.h>
#include <time.h>
#include <iostream>
#include <cstdlib>      // std::rand, std::srand
#include <algorithm>    // std::random_shuffle
#include <windows.h>
#include <mmsystem.h>

/* Hoja de Colores Personalizados*/
#include "ColoresPersonalizados.h"

/* Cubos Terreno personalizados */
#include "CubosTerreno.h"

/* Funci�n de generaci�n de terreno*/
#include "Terreno.h"

/* Arreglo 2x2 de organizaci�n terreno*/
#include "MatrizElevacion.h"

/* Herramientas (Pico, Hacha, Espada) */
#include "Herramientas.h"

/* Enderman */
#include "Enderman.h"

/* Cerdo */
#include "Cerdo.h"

/* Steve*/
#include "Steve.h"

/* Zombie */
#include "Zombie.h"

/* Arboles */
#include "Arboles.h"

/* Rocas */
#include "Rocas.h"

/* Casa */
#include "Casa.h"

/*Cama y Sillon*/
#include "CamaSillon.h"

using namespace std;

float camaraX = -100;//ROJO
float camaraY = 80;//VERDE
float camaraZ = -340;//AZUL

float angulo = 0;

float tiempo = 75;

float tiempoAnochese = 45;

float targetX = -196, targetY = 64, targetZ = -480;

//float tama�o_cubo_arbol = 16;
float tama�o_cubo_piso = 16;
float tama�o_maxima_monta�a = 20;
float porcentaje_terrano = 0.8;


void iniciarVentana(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(70, (float)w / (float)h, 1, 4000);
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
	colorArbol1();
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
	float posX[38] = { 850, 950, -100, 500, 600, 700, 800 , -250, -350, -450 , 350, 450, 100, 900, 50, 150, 250, -200, -600, -700, -800, -900, -50, -150, 200, 300, 400, -500, 550, 650, 750, -300, -400, -550, -650, -750, -850, -950 };

	float posZ[38] = { -700, -800, -900, -50, -150, -250, -350, 600, 700, 800, -200, -300,100, 200, 900, -850, -950, 350, -450,  400, 500,  50, 150, 250, -400 , 650, 550, -550, -650, -750, 450, 300, 850, 950, -100, 750, -500, -600 };

	for (int i = 0; i < 38; i++)
	{
		glPushMatrix();
		glColor4ub(255, 255, 255, 255 * (tiempo <= animationTime ? tiempo : animationTime) / animationTime);
		glTranslated(posX[i], 900, posZ[i] + tiempo / animationTime * 1000);
		//glTranslated(posX[i], 900, posZ[i] + (tiempo <= animationTime ? tiempo : animationTime) /animationTime * 1000);
		glutSolidCube(3);
		glPopMatrix();
	}

	for (int i = 0; i < 38; i++)
	{
		glPushMatrix();
		glColor4ub(255, 255, 255, 255 * (tiempo <= animationTime ? tiempo : animationTime) / animationTime);
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
		glScaled(1 * i, 1 * i / 2, 1.5 * i);
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
		glScaled(1 * i, 1 * i / 2, 1.5 * i);
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
		glScaled(1 * i, 1 * i / 2, 1.5 * i);
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

void steve_con_hacha(float velocity)
{
	glPushMatrix();
	glRotated(180, 0, 1, 0);

	steve_cabeza();

	steve_cuerpo();

	steve_brazo_izquierdo();

	steve_brazo_derecho_con_hacha();

	steve_pierna_izquierda();

	steve_pierna_derecha();
	glPopMatrix();
}

void steve_con_pico(float velocity)
{
	glPushMatrix();
	glRotated(180, 0, 1, 0);

	steve_cabeza();

	steve_cuerpo();

	steve_brazo_izquierdo();

	steve_brazo_derecho_con_pico();

	steve_pierna_izquierda();

	steve_pierna_derecha();
	glPopMatrix();
}

void steve_con_espada(float velocity)
{
	glPushMatrix();
	glRotated(180, 0, 1, 0);

	steve_cabeza();

	steve_cuerpo();

	steve_brazo_izquierdo();

	steve_brazo_derecho_con_espada();

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

void steve_caminando_con_pico(float velocity)
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
	steve_brazo_derecho_con_pico();
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

void steve_caminando_con_hacha(float velocity)
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
	steve_brazo_derecho_con_hacha();
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
	glRotated(180, 0, 1, 0);

	glPushMatrix();
	glTranslated(0, 22, 0);
	glRotated(45 * abs(std::sin(tiempo * velocity)), 1, 0, 0);
	glTranslated(0, -22, 0);
	steve_brazo_derecho_con_pico();
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

void salto(void (*animacion)(float),float time, float velocity, float altura)
{
	glPushMatrix();
	glTranslated(0, altura * abs(std::sin(time * velocity)), 0);
	animacion(velocity);
	glPopMatrix();
}

void monta�a(float animation)
{
	glPushMatrix();
	glTranslated(-500, (-16 * 21.5) - 2.5, -240);
	glScaled(16, 16, 16);
	ambiente_terreno();
	glPopMatrix();
}

void steve_gira_cabeza_derecha(float animation)
{
	glPushMatrix();
	glRotated(180, 0, 1, 0);

	glPushMatrix();
	glRotated(-90 * animation, 0, 1, 0);
	steve_cabeza();
	glPopMatrix();

	steve_cuerpo();

	steve_brazo_izquierdo();

	steve_brazo_derecho_con_pico();

	steve_pierna_izquierda();

	steve_pierna_derecha();
	glPopMatrix();
}

void rocas_terreno(float animation)
{
	glPushMatrix();

	glTranslated(-612, -42.15, -192);
	glRotated(90, 0, 1, 0);
	glScaled(16, 16, 16);
	generar_rocas();
	glPopMatrix();
}

void movimiento(float tInicial, float tFinal, void (*animacion)(float), float velocity, float angle, float x1, float z1, float x2, float z2, float y)
{
	if (tiempo >= tInicial && tiempo <= tFinal)
	{
		glPushMatrix();
		glTranslated(
			x1 + (x2 - x1) * (tiempo - tInicial) / (tFinal - tInicial),
			y,
			z1 + (z2 - z1) * (tiempo - tInicial) / (tFinal - tInicial));
		glRotated(angle + atan2(z1 - z2, x1 - x2) * 180 / 3.14159265359, 0, 1, 0);
		animacion(velocity);
		glPopMatrix();
	}
}

void piso_casa()
{
	glPushMatrix();
	glTranslated(-196, -15.95, -596);

	glPushMatrix();
	glTranslated(0, 0, 0);
	glRotated(90, 0, 0, 1);
	pisoCasa();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, 16);
	glRotated(90, 0, 0, 1);
	pisoCasa();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, 32);
	glRotated(90, 0, 0, 1);
	pisoCasa();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, 48);
	glRotated(90, 0, 0, 1);
	pisoCasa();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, 64);
	glRotated(90, 0, 0, 1);
	pisoCasa();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, 80);
	glRotated(90, 0, 0, 1);
	pisoCasa();
	glPopMatrix();

	glPopMatrix();
}

void dibujar() {
	inicializarLuces(tiempoAnochese);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(camaraX, camaraY, camaraZ, targetX, targetY, targetZ, 0, 1, 0);
	glPushMatrix();
	glRotated(angulo, 0, 1, 0);

	piso(tiempoAnochese);
	piso_casa();
	pared(tiempoAnochese);
	sol(tiempoAnochese);
	luna(tiempoAnochese);
	estrellas(tiempoAnochese);
	nubes(tiempoAnochese);
	monta�a(tiempoAnochese);

	plantar_Arbol();
	rocas_terreno(tiempoAnochese);
	ubica_Casa();
	ubicaCama();
	ubicaSillon();

	//ANIMACIONES----------------------------------------------------------------------------------------------------

	//steve(0);
	//steve_con_hacha(0);
	//steve_con_pico(0);
	//steve_caminando(4.5);
	//steve_caminando_con_espada(4.5);
	//steve_picando(9);

	//enderman(0);
	//enderman_caminando(4.5);

	//cerdo(0);
	//cerdo_caminando(4.5);

	//zombie(0);
	//zombie_caminando(4.5);

	//salto(steve_caminando_con_espada, 4.5, 16);
	//salto(steve_caminando_con_hacha, 4.5, 16);
	//salto(steve_caminando_con_pico, 4.5, 16);

	//TIME LINE----------------------------------------------------------------------------------------------------------
	
	//Steve sale de la casa y su cerdo lo sigue
	if (tiempo >= 0 && tiempo < 10)
	{
		camaraX = -(100 + tiempo*4);//ROJO
		camaraY = 80;//VERDE
		camaraZ = -340;//AZUL

		targetX = -196;
		targetY = 64;
		targetZ = -480;

		movimiento(0, 3, steve_caminando, 4.5, 90, -196, -544, -196, -416, 0);
		movimiento(3, 3.5, steve, 0, 0, -196, -416, -196, -416, 0);
		movimiento(3.5, 4, steve, 0, 180, -196, -416, -196, -416, 0);
		
		if (tiempo >= 4 && tiempo < 6)
		{
			glPushMatrix();
			glTranslated(-196, 0, -416);
			glRotated(180, 0, 1, 0);
			salto(steve,tiempo-4 , 8, 16);
			glPopMatrix();
		}

		movimiento(6, 6.5, steve, 0, 180, -196, -416, -196, -416, 0);
		movimiento(6.5, 7, steve, 0, 0, -196, -416, -196, -416, 0);
		

		movimiento(7, 10, steve_caminando, 4.5, 90, -196, -416, -196, -288, 0);

		movimiento(0, 5, cerdo, 0, 90, -196, -572, -196, -572, 0);
		movimiento(5, 10, cerdo_caminando, 4.5, 90, -196, -572, -196, -288, 0);
	}

	if (tiempo >= 10 && tiempo < 30)
	{
		camaraX = -(100 + (tiempo - 50) * 4);//ROJO
		camaraY = 160;//VERDE
		camaraZ = -340;//AZUL

		targetX = 0;
		targetY = 40;
		targetZ = 0;
	}

	if (tiempo >= 30 && tiempo < 50)
	{
		camaraX = -(200 + (tiempo-30) * 1);//ROJO
		camaraY = 70;//VERDE
		camaraZ = -250;

		targetX = 0;
		targetY = 64;
		targetZ = -320;

		movimiento(30, 31, steve_caminando, 4.5, 0, -132, -268, -100, -300, 0);
		movimiento(31, 31.5, steve, 4.5, 90, -100, -300, -100, -300, 0);

		if (tiempo >= 31.5 && tiempo < 34.5)
		{
			float y = 0;

			if (tiempo >= 32.1)
			{
				y = 16 * abs(std::sin((tiempo - 32.1) * 8));
			}
			if (tiempo >= 32.4)
			{
				y = 16;
			}
			glPushMatrix();
			glTranslated(0, y, 0);
			movimiento(31.5, 34.5, steve_caminando, 4.5, -90, -100, -300, -20, -300, 0);
			glPopMatrix();
		}
		
		movimiento(34.5, 35, steve, 9, 90, -20, -300, -20, -300, 16);
		movimiento(35, 37, steve_picando, 9, 90, -20, -300, -20, -300, 16);

		movimiento(37, 37.5, steve_con_pico, 4.5, 180, -20, -300, -20, -300, 16);
		movimiento(37.5, 38.5, steve_caminando_con_pico, 4.5, 90, -20, -300, -20, -332, 16);
		movimiento(38.5, 39, steve_con_pico, 4.5, 180, -20, -332, -20, -332, 16);
		movimiento(39, 40, steve_caminando_con_pico, 4.5, -90, -20, -332, 8, -332, 16);
		movimiento(40, 42, steve_picando, 9, 90, 8, -332, 8, -332, 16);
		movimiento(42, 42.5, steve_con_pico, 9, -90, 8, -332, 8, -332, 16);
		if (tiempo >= 42.5 && tiempo < 44.5)
		{
			glPushMatrix();
			glTranslated(8, 16, -332);
			glRotated(-90, 0, 1, 0);
			salto(steve_picando, tiempo - 42.5, 8, 16);
			glPopMatrix();
		}
		movimiento(44.5, 45, steve_con_pico, 9, 90, 8, -332, 8, -332, 16);
		movimiento(45, 48, steve_picando, 9, 90, 8, -332, 8, -332, 16);
		movimiento(48, 48.5, steve_con_pico, 9, 90, 8, -332, 8, -332, 16);

		movimiento(48.5, 50, steve_gira_cabeza_derecha, tiempo<=49 ? ((tiempo - 48.5) / 0.5) : 1, 90, 8, -332, 8, -332, 16);


		movimiento(30, 36.5, cerdo_caminando, 4.5, -245, -100, -180, -140, -370, 0);
		movimiento(36.5, 37, cerdo, 4.5, -167.5, -140, -370, -140, -370, 0);

		movimiento(37, 38.5, cerdo_caminando, 4.5, -40, -140, -370, -100, -390, 0);
		movimiento(38.5, 39, cerdo, 4.5, -245, -100, -390, -100, -390, 0);

		movimiento(39, 42.5, cerdo_caminando, 4.5, 90, -100, -390, -100, -340, 0);

		movimiento(42.5, 43, cerdo, 4.5, 90, -100, -340, -100, -340, 0);
		if (tiempo >= 43 && tiempo < 45)
		{
			glPushMatrix();
			glTranslated(-100, 0, -340);
			glRotated(70, 0, 1, 0);
			salto(cerdo, tiempo - 43, 8, 16);
			glPopMatrix();
		}
		movimiento(45, 48, cerdo_caminando, 4.5, 90, -100, -340, -100, -240, 0);
		movimiento(48, 50, cerdo, 4.5, 0, -100, -240, -100, -240, 0);
	}

	//Steve debe hacer hora con su cerdo. Picar o cualquier cosa hasta que se haga de noche.
	
	//Se muestra como los zombies fueron instanciados una vez se hizo de noche
	if (tiempo >= 50 && tiempo < 60)
	{
		camaraX = -(100 + (tiempo-50) * 4);//ROJO
		camaraY = 160;//VERDE
		camaraZ = -340;//AZUL

		targetX = 0;
		targetY = 40;
		targetZ = 0;

		movimiento(50, 80, zombie_caminando, 4.5, 135, 128, 192, 128, 192, 0);
		movimiento(50, 80, zombie_caminando, 4.5, 180, -80, 40, -80, 40, 0);
		movimiento(50, 80, zombie_caminando, 4.5, 180, -208, 96, -208, 96, 16);
		movimiento(50, 80, zombie_caminando, 4.5, 180, -240, 528, -240, 528, 96);
		movimiento(50, 80, zombie_caminando, 4.5, 180, -128, 704, -128, 704, 144);
	}

	//Los zombies deben perseguir a steve y este debe pelear con alguno
	if (tiempo >= 60 && tiempo < 75)
	{
		camaraX = -(100 + (tiempo - 50) * 4);//ROJO
		camaraY = 160;//VERDE
		camaraZ = -340;//AZUL

		targetX = 0;
		targetY = 40;
		targetZ = 0;


	}

	//Steve decide esconderse en su casa, pero un Enderman lo encuentra
	if (tiempo >= 75 && tiempo < 95)
	{
		camaraX = -275;//ROJO
		camaraY = (48 - (tiempo - 80) * 1/4);//ROJO//VERDE
		camaraZ = -570;//AZUL

		targetX = -196;
		targetY = 48;
		targetZ = -544;

		movimiento(80, 83, steve_con_espada, 4.5, 0, -150, -538, -150, -538, 0);
		movimiento(83, 84, steve_caminando_con_espada, 4.5, 90, -150, -538, -150, -570, 0);
		movimiento(84, 84.5, steve_con_espada, 4.5, 180, -150, -570, -150, -570, 0);
		movimiento(84.5, 85.5, steve_caminando_con_espada, 4.5, 90, -150, -570, -150, -538, 0);
		movimiento(85.5, 95, steve_con_espada, 4.5, 0, -150, -538, -150, -538, 0);

		if (tiempo >= 80 && tiempo < 84)
		{
			glPushMatrix();
			glTranslated(-196, 8, -570);
			glRotated(90, 0, 1, 0);
			salto(cerdo, tiempo-90, 8, 8);
			glPopMatrix();
		}

		if (tiempo >= 84 && tiempo < 86)
		{
			glPushMatrix();
			glTranslated(-196, 8, -570);
			glRotated(90, 0, 1, 0);
			salto(cerdo, tiempo - 94, 8, 8);
			glPopMatrix();
		}

		if (tiempo >= 86 && tiempo < 88)
		{
			glPushMatrix();
			glTranslated(-196, 8, -570);
			glRotated(-90, 0, 1, 0);
			salto(cerdo, tiempo - 96, 8, 8);
			glPopMatrix();
		}

		if (tiempo >= 88 && tiempo < 90)
		{
			glPushMatrix();
			glTranslated(-196, 8, -570);
			glRotated(90, 0, 1, 0);
			salto(cerdo, tiempo - 98, 8, 8);
			glPopMatrix();
		}

		if (tiempo >= 90 && tiempo < 92)
		{
			glPushMatrix();
			glTranslated(-196, 8, -570);
			glRotated(-90, 0, 1, 0);
			salto(cerdo, tiempo - 100, 8, 8);
			glPopMatrix();
		}

		if (tiempo >= 92 && tiempo < 95)
		{
			glPushMatrix();
			glTranslated(-196, 8, -570);
			glRotated(90, 0, 1, 0);
			salto(cerdo, tiempo - 102, 8, 8);
			glPopMatrix();
		}

		movimiento(83.5, 84.5, enderman_caminando, 4.5, 235, -80, -240, -132, -272, 0);
		movimiento(86.5, 87.5, enderman, 0, -90, -96, -560, -96, -560, 1);
		movimiento(90, 91, enderman, 0, 0, -150, -570, -150, -570, 0);
		movimiento(93, 95, enderman, 0, -99, -262 + std::sin(tiempo * 100)/2, -566 + std::sin(tiempo * 100)/2, -262 + std::sin(tiempo * 100)/2, -566 + std::sin(tiempo * 100)/2, 10);
	}


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
		camaraY += 1;
		break;
	case 103:
		camaraY -= 1;
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
	glutCreateWindow("Grupo 3 - Gr�ficos en Computaci�n");
	glutReshapeFunc(iniciarVentana);
	glutDisplayFunc(dibujar);
	glutSpecialFunc(teclado);
	glutTimerFunc(0, timer, 0);
	glutTimerFunc(tiempo, update, 0);
	glutMainLoop();
	return 0;
}