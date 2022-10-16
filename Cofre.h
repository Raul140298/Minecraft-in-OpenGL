#ifndef COFRE
#define COFRE

void paredBase() {
	glColor3ub(164, 98, 40);
	for (int i = 0; i <= 15; i++) {
		for (int j = 0; j <= 15; j++) {
			glPushMatrix();
			glTranslated(0, i, j);
			glutSolidCube(1);
			glPopMatrix();
		}
	}
}
void base() {
	glColor3ub(72, 54, 49);
	for (int i = 0; i <= 16; i++) {
		glPushMatrix();
		glTranslated(0, 0, i);
		glutSolidCube(1);
		glPopMatrix();

		glPushMatrix();
		glTranslated(0, i, 0);
		glutSolidCube(1);
		glPopMatrix();

		glPushMatrix();
		glTranslated(i, 0, 0);
		glutSolidCube(1);
		glPopMatrix();

		glPushMatrix();
		glTranslated(i, 0, 16);
		glutSolidCube(1);
		glPopMatrix();

		glPushMatrix();
		glTranslated(16, 0, i);
		glutSolidCube(1);
		glPopMatrix();
	
		glPushMatrix();
		glTranslated(0, 16, i);
		glutSolidCube(1);
		glPopMatrix();

		glPushMatrix();
		glTranslated(i, 16, 0);
		glutSolidCube(1);
		glPopMatrix();

		glPushMatrix();
		glTranslated(16, 16, i);
		glutSolidCube(1);
		glPopMatrix();

		glPushMatrix();
		glTranslated(i, 16, 16);
		glutSolidCube(1);
		glPopMatrix();

		glPushMatrix();
		glTranslated(16, i, 16);
		glutSolidCube(1);
		glPopMatrix();

		glPushMatrix();
		glTranslated(0, i, 16);
		glutSolidCube(1);
		glPopMatrix();

		glPushMatrix();
		glTranslated(16, i, 0);
		glutSolidCube(1);
		glPopMatrix();
	}
	paredBase();

	glPushMatrix();
	glTranslated(16,0,0);
	paredBase();
	glPopMatrix();

	glPushMatrix();
	glRotated(90, 0, 1, 0);
	glTranslated(0, 0, 0);
	paredBase();
	glPopMatrix();

	glPushMatrix();
	glRotated(90, 0, 1, 0);
	glTranslated(-16, 0, 0);
	paredBase();
	glPopMatrix();
}
void paredTapa() {
	glColor3ub(164, 98, 40);
	for (int i = 0; i <= 3; i++) {
		for (int j = 0; j <= 15; j++) {
			glPushMatrix();
			glTranslated(0, i, j);
			glutSolidCube(1);
			glPopMatrix();
		}
	}
}
void chapa() {
	glColor3ub(110, 110, 109);
	glPushMatrix();
	glTranslated(16.5, -1, 8);
	glutSolidCube(1);
	glPopMatrix();
	glColor3ub(110, 110, 109);
	glPushMatrix();
	glTranslated(16.5, 0, 8);
	glutSolidCube(1);
	glPopMatrix();
	glColor3ub(110, 110, 109);
	glPushMatrix();
	glTranslated(16.5, 1, 8);
	glutSolidCube(1);
	glPopMatrix();
}
void tapa() {
	glColor3ub(72, 54, 49);
	for (int i = 0; i <= 16; i++) {
		glPushMatrix();
		glTranslated(i,0,0);
		glutSolidCube(1);
		glPopMatrix();

		glPushMatrix();
		glTranslated(0,0,i);
		glutSolidCube(1);
		glPopMatrix();

		glPushMatrix();
		glTranslated(16, 0, i);
		glutSolidCube(1);
		glPopMatrix();

		glPushMatrix();
		glTranslated(i, 0, 16);
		glutSolidCube(1);
		glPopMatrix();

		////////////////////
		glPushMatrix();
		glTranslated(i, 4, 0);
		glutSolidCube(1);
		glPopMatrix();

		glPushMatrix();
		glTranslated(0, 4, i);
		glutSolidCube(1);
		glPopMatrix();

		glPushMatrix();
		glTranslated(16, 4, i);
		glutSolidCube(1);
		glPopMatrix();

		glPushMatrix();
		glTranslated(i, 4, 16);
		glutSolidCube(1);
		glPopMatrix();
		/////////////////////////

	}
	for (int i = 0; i <= 4; i++) {
		glPushMatrix();
		glTranslated(0, i, 0);
		glutSolidCube(1);
		glPopMatrix();

		glPushMatrix();
		glTranslated(0, i, 16);
		glutSolidCube(1);
		glPopMatrix();

		glPushMatrix();
		glTranslated(16, i, 0);
		glutSolidCube(1);
		glPopMatrix();

		glPushMatrix();
		glTranslated(16, i, 16);
		glutSolidCube(1);
		glPopMatrix();
	}
	paredTapa();
	glPushMatrix();
	glTranslated(16, 0, 0);
	paredTapa();
	glPopMatrix();

	glPushMatrix();
	glRotated(90, 0, 1, 0);
	glTranslated(0, 0, 0);
	paredTapa();
	glPopMatrix();

	glPushMatrix();
	glRotated(90, 0, 1, 0);
	glTranslated(-16, 0, 0);
	paredTapa();
	glPopMatrix();

	glPushMatrix();
	glRotated(90, 0, 0, 1);
	glTranslated(4, -16, 0);
	paredBase();
	glPopMatrix();

	chapa();
}
void cofre() {
	base();
	glPushMatrix();
	glTranslated(0, 17, 0);
	glRotated(40, 0, 0, 1);
	tapa();
	glPopMatrix();

}

void ubicaCofre() {
	glPushMatrix();
		glTranslated(-135, 0, -590);
		glScaled(1.4, 1.4, 1.4);
		glRotated(-90, 0, 1, 0);
		cofre();
	glPopMatrix();
}



#endif