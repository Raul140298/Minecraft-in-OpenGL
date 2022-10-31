#ifndef ARBOLES
#define ARBOLES
#include "Casa.h"

float tamaño_cubo_arbol = 16;

void cubo_madera() {
	glPushMatrix();
	glTranslated(0, 0, 0);
	colorMadera2();
	glutSolidCube(1);
	glPopMatrix();

	/* Textura Parte delantera */
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texturas[3]);
	glColor3ub(255, 255, 255);
	glPushMatrix();
	glTranslated(-0.50, -0.5, 0.51);
	glBegin(GL_POLYGON);
	glTexCoord2f(0, 1); glVertex3d(0, 1, 0);
	glTexCoord2f(1, 1); glVertex3d(1, 1, 0);
	glTexCoord2f(1, 0); glVertex3d(1, 0, 0);
	glTexCoord2f(0, 0); glVertex3d(0, 0, 0);
	glEnd();
	glPopMatrix();
	glDisable(GL_TEXTURE_2D);

	/* Textura Parte trasera */
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texturas[3]);
	glColor3ub(255, 255, 255);
	glPushMatrix();
	glTranslated(-0.50, -0.5, -1 + 0.49);
	glBegin(GL_POLYGON);
	glTexCoord2f(0, 1); glVertex3d(0, 1, 0);
	glTexCoord2f(1, 1); glVertex3d(1, 1, 0);
	glTexCoord2f(1, 0); glVertex3d(1, 0, 0);
	glTexCoord2f(0, 0); glVertex3d(0, 0, 0);
	glEnd();
	glPopMatrix();
	glDisable(GL_TEXTURE_2D);


	/* Textura Parte lateral izq. */
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texturas[3]);
	glColor3ub(255, 255, 255);
	glPushMatrix();
	glTranslated(0.51, -0.5, -1 + 0.5);
	glBegin(GL_POLYGON);
	glTexCoord2f(0, 1); glVertex3d(0, 1, 0);
	glTexCoord2f(1, 1); glVertex3d(0, 1, 1);
	glTexCoord2f(1, 0); glVertex3d(0, 0, 1);
	glTexCoord2f(0, 0); glVertex3d(0, 0, 0);
	glEnd();
	glPopMatrix();
	glDisable(GL_TEXTURE_2D);


	/* Textura Parte lateral derecha. */
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texturas[3]);
	glColor3ub(255, 255, 255);
	glPushMatrix();
	glTranslated(-0.51, -0.5, -1 + 0.5);
	glBegin(GL_POLYGON);
	glTexCoord2f(0, 1); glVertex3d(0, 1, 0);
	glTexCoord2f(1, 1); glVertex3d(0, 1, 1);
	glTexCoord2f(1, 0); glVertex3d(0, 0, 1);
	glTexCoord2f(0, 0); glVertex3d(0, 0, 0);
	glEnd();
	glPopMatrix();
	glDisable(GL_TEXTURE_2D);
}
void arbol1() {

	colorArbol1();
	glPushMatrix();
	glTranslated(0, 3 * tamaño_cubo_arbol, 0);
	glutSolidCube(tamaño_cubo_arbol * 3);
	glPopMatrix();

	//colorMadera2();

	/*
	glPushMatrix();
	glTranslated(0, 2 * (tamaño_cubo_arbol), 0);
	glScaled(1, 4, 1);
	glutSolidCube(tamaño_cubo_arbol);
	glPopMatrix();*/
	glPushMatrix();
	glScaled(16,16,16);
		glPushMatrix();
		glTranslated(0, 0.5, 0);
		cubo_madera();
		glPopMatrix();

		glPushMatrix();
		glTranslated(0, 1.5, 0);
		cubo_madera();
		glPopMatrix();

		glPushMatrix();
		glTranslated(0, 2.5, 0);
		cubo_madera();
		glPopMatrix();

		glPushMatrix();
		glTranslated(0, 3.5, 0);
		cubo_madera();
		glPopMatrix();
	glPopMatrix();

}

void arbol2() {
	colorArbol1();
	glPushMatrix();
	glTranslated(tamaño_cubo_arbol, 4 * tamaño_cubo_arbol, tamaño_cubo_arbol);
	glutSolidCube(tamaño_cubo_arbol);

	glPopMatrix();

	glPushMatrix();
	glTranslated(tamaño_cubo_arbol, 4 * tamaño_cubo_arbol, 0);
	glutSolidCube(tamaño_cubo_arbol);
	glPopMatrix();

	glPushMatrix();
	glTranslated(tamaño_cubo_arbol, 4 * tamaño_cubo_arbol, -tamaño_cubo_arbol);
	glutSolidCube(tamaño_cubo_arbol);

	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 4 * tamaño_cubo_arbol, tamaño_cubo_arbol);
	glutSolidCube(tamaño_cubo_arbol);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 4 * tamaño_cubo_arbol, 0);
	glutSolidCube(tamaño_cubo_arbol);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 4 * tamaño_cubo_arbol, -tamaño_cubo_arbol);
	glutSolidCube(tamaño_cubo_arbol);
	glPopMatrix();


	glPushMatrix();
	glTranslated(-tamaño_cubo_arbol, 4 * tamaño_cubo_arbol, tamaño_cubo_arbol);
	glutSolidCube(tamaño_cubo_arbol);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-tamaño_cubo_arbol, 4 * tamaño_cubo_arbol, 0);
	glutSolidCube(tamaño_cubo_arbol);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-tamaño_cubo_arbol, 4 * tamaño_cubo_arbol, -tamaño_cubo_arbol);
	glutSolidCube(tamaño_cubo_arbol);
	glPopMatrix();

	//Parte inferior

	for (int i = -2; i <= 2; i++) {

		for (int j = -2; j <= 2; j++) {
			glPushMatrix();
			glTranslated(i * tamaño_cubo_arbol, 3 * tamaño_cubo_arbol, j * tamaño_cubo_arbol);
			glutSolidCube(tamaño_cubo_arbol);
			glPopMatrix();
		}
	}

	glPushMatrix();
	glTranslated(tamaño_cubo_arbol / 2, 5 * tamaño_cubo_arbol, tamaño_cubo_arbol / 2);
	glutSolidCube(tamaño_cubo_arbol);

	glPopMatrix();


	colorMadera2();

	glPushMatrix();
	glTranslated(0, 0, -8);
	arma_arbol(4);

	glPopMatrix();
}


void plantar_Arbol() {
	srand(2);

	for (int i = 0; i <= 30; i++) {
		glPushMatrix();
		int posI = rand() % 65;
		int posJ = rand() % 65;
		glTranslated(posI * 16 - 507.9, MatrizTerreno[posI][posJ] * 16, (posJ) * 16 - 300 + 20 + 32);

		if (i % 2 == 0) {
			arbol1();
		}
		else {
			arbol2();
		}
		glPopMatrix();
	}

	glPushMatrix();
	glTranslated(-500, 0, -600);
	arbol2();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-580, 0, -500);
	arbol1();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-30, 0, -600);
	arbol1();
	glPopMatrix();
}
	
void arbol3(int x) {
	colorArbol1();
	glPushMatrix();
	glTranslated(tamaño_cubo_arbol, 5 * tamaño_cubo_arbol, tamaño_cubo_arbol);
	glutSolidCube(tamaño_cubo_arbol);

	glPopMatrix();

	glPushMatrix();
	glTranslated(tamaño_cubo_arbol, 5 * tamaño_cubo_arbol, 0);
	glutSolidCube(tamaño_cubo_arbol);
	glPopMatrix();

	glPushMatrix();
	glTranslated(tamaño_cubo_arbol, 5 * tamaño_cubo_arbol, -tamaño_cubo_arbol);
	glutSolidCube(tamaño_cubo_arbol);

	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 5 * tamaño_cubo_arbol, tamaño_cubo_arbol);
	glutSolidCube(tamaño_cubo_arbol);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 5 * tamaño_cubo_arbol, 0);
	glutSolidCube(tamaño_cubo_arbol);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 5 * tamaño_cubo_arbol, -tamaño_cubo_arbol);
	glutSolidCube(tamaño_cubo_arbol);
	glPopMatrix();


	glPushMatrix();
	glTranslated(-tamaño_cubo_arbol, 5 * tamaño_cubo_arbol, tamaño_cubo_arbol);
	glutSolidCube(tamaño_cubo_arbol);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-tamaño_cubo_arbol, 5 * tamaño_cubo_arbol, 0);
	glutSolidCube(tamaño_cubo_arbol);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-tamaño_cubo_arbol, 5 * tamaño_cubo_arbol, -tamaño_cubo_arbol);
	glutSolidCube(tamaño_cubo_arbol);
	glPopMatrix();

	//Parte inferior

	for (int i = -2; i <= 2; i++) {

		for (int j = -2; j <= 2; j++) {
			glPushMatrix();
			glTranslated(i * tamaño_cubo_arbol, 4 * tamaño_cubo_arbol, j * tamaño_cubo_arbol);
			glutSolidCube(tamaño_cubo_arbol);
			glPopMatrix();
		}
	}

	glPushMatrix();
	glTranslated(tamaño_cubo_arbol / 2, 6 * tamaño_cubo_arbol, tamaño_cubo_arbol / 2);
	glutSolidCube(tamaño_cubo_arbol);

	glPopMatrix();


	colorMadera2();

	glPushMatrix();
	glTranslated(0, 0, -8);
	arma_arbol(x);

	glPopMatrix();
}


void arbol_talar(int x) {
	glPushMatrix();
		glTranslated(-100, 0, 180);
		arbol3(x);
	glPopMatrix();
}


void arbol_talar2(int x) {
	glPushMatrix();
		glTranslated(0, 0, 140);
		arbol3(x);
	glPopMatrix();
}


#endif

