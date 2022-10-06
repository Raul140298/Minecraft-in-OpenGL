#ifndef CUBOSTERRENO
#define CUBOSTERRENO

void cubo_piedra() {
	glPushMatrix();
	glTranslated(0, 0, 0);
	colorMadera1();
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0.5, 0);
	colorArbol1();
	glScaled(4, 1, 4);
	glutSolidCube(0.2501);
	glPopMatrix();

}

#endif