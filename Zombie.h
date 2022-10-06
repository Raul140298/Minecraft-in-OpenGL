#ifndef ZOMBIE
#define ZOMBIE


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
	glColor3ub(0, 0, 0);
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

#endif
