#include <GL/glut.h>
#include <math.h>
#include <time.h>
#include <iostream>
using namespace std;

float camaraX = -20;//ROJO
float camaraY = 30;//VERDE
float camaraZ = -40;//AZUL

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

	float amb = (0.2 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (0.35 - 0.2));
	float dif = (0.3 + (animationTime - (tiempo <= animationTime ? tiempo : animationTime)) / animationTime * (0.5 - 0.3));

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

//2. creamos el piso
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
	glTranslated(0, -700 / animationTime * (tiempo <= animationTime ? tiempo : animationTime), 0);

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

//4. dibujamos los ejes
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

//DIBUJAR 
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

void steve_caminando(float velocity)
{
	steve_cabeza();

	steve_cuerpo();

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

void dibujar() {
	inicializarLuces(tiempoAnochese);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(camaraX, camaraY, camaraZ, 0, 24, 0, 0, 1, 0);
	glPushMatrix();
	glRotated(angulo, 0, 1, 0);

	piso(tiempoAnochese);
	pared(tiempoAnochese);
	sol(tiempoAnochese);

	//steve_en_pose();
	steve_caminando(4.5);
	//steve_caminando_con_espada();

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