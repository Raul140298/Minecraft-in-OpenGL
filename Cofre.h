#ifndef COFRE
#define COFRE

void paredBase() {
	glPushMatrix();
	glTranslated(0, 1, 1);
	glColor3ub(164, 98, 40);
	for (int i = 0; i <= 14; i++) {
		for (int j = 0; j <= 14; j++) {
			glPushMatrix();
			glTranslated(0, i, j);
			glutSolidCube(1);
			glPopMatrix();
		}
	}
	glPopMatrix();
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
	glPushMatrix();
	glTranslated(0, 1, 1);
	glColor3ub(164, 98, 40);
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 14; j++) {
			glPushMatrix();
			glTranslated(0, i, j);
			glutSolidCube(1);
			glPopMatrix();
		}
	}
	glPopMatrix();
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
	glRotated(0, 0, 0, 1);
	tapa();
	glPopMatrix();
}

void ubicaCofre() {
	glPushMatrix();
		glTranslated(-135, -6, -590);
		glScaled(0.9, 0.9, 0.9);
		glRotated(-90, 0, 1, 0);
		cofre();
	glPopMatrix();
}

void cofreAnimacion(float tiempoActual, float tiempoInicial, float tiempoFinal)
{
	base();

	if (tiempoActual < tiempoInicial)
	{
		glPushMatrix();
		glTranslated(0, 17, 0);
		tapa();
		glPopMatrix();
	}

	if (tiempoActual >= tiempoInicial && tiempoActual<tiempoFinal)
	{
		float aux = 2 * (tiempoActual - tiempoInicial) / (tiempoFinal - tiempoInicial);
		glPushMatrix();
		glTranslated(0, 17, 0);
		glRotated((aux < 1 ? aux : 1) * 40, 0, 0, 1);
		tapa();
		glPopMatrix();
	}

	float auxtFinal = (3 * tiempoFinal - tiempoInicial) / 2;

	if (tiempoActual >= tiempoFinal && tiempoActual< auxtFinal)
	{
		glPushMatrix();
		glTranslated(0, 17, 0);
		glRotated(40 - (tiempoActual - tiempoFinal) / (auxtFinal - tiempoFinal) * 40, 0, 0, 1);
		tapa();
		glPopMatrix();
	}

	if (tiempoActual >= auxtFinal)
	{
		glPushMatrix();
		glTranslated(0, 17, 0);
		tapa();
		glPopMatrix();
	}
}

void cofreAbriendose(float tiempoActual, float tiempoInicial, float tiempoFinal)
{
	glPushMatrix();
	glTranslated(-135, -6, -590);
	glScaled(0.9, 0.9, 0.9);
	glRotated(-90, 0, 1, 0);
	cofreAnimacion(tiempoActual, tiempoInicial, tiempoFinal);
	glPopMatrix();
}



#endif