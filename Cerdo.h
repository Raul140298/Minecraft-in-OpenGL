#ifndef CERDO
#define CERDO

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


#endif