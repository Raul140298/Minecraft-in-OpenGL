#ifndef STEVE
#define STEVE

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

void steve_brazo_derecho_con_hacha()
{
	steve_brazo_derecho();
	//espada
	glPushMatrix();
	glTranslated(6, 14, 4);
	glRotated(-45, 1, 0, 0);
	glPushMatrix();
	glRotated(90, 0, 1, 0);
	hacha_completa();
	glPopMatrix();
	glPopMatrix();
}

void steve_brazo_derecho_con_pico()
{
	steve_brazo_derecho();
	//espada
	glPushMatrix();
	glTranslated(6, 14, 4);
	glRotated(-45, 1, 0, 0);
	glPushMatrix();
	glRotated(90, 0, 1, 0);
	pico_completa();
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


#endif