#ifndef ARBOLES
#define ARBOLES

float tamaño_cubo_arbol = 16;

void arbol1() {

	colorArbol1();
	glPushMatrix();
	glTranslated(0, 3 * tamaño_cubo_arbol, 0);
	glutSolidCube(tamaño_cubo_arbol * 3);

	glPopMatrix();

	colorMadera2();
	glPushMatrix();
	glTranslated(0, 2 * (tamaño_cubo_arbol), 0);
	glScaled(1, 4, 1);
	glutSolidCube(tamaño_cubo_arbol);

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
	glTranslated(tamaño_cubo_arbol / 2, 2 * (tamaño_cubo_arbol), tamaño_cubo_arbol / 2);
	glScaled(1, 4, 1);
	glutSolidCube(tamaño_cubo_arbol);

	glPopMatrix();
}


void plantar_Arbol() {
	srand(2);

	for (int i = 0; i <= 30; i++) {
		glPushMatrix();
			int posI = rand() % 65;
			int posJ = rand() % 65;
			glTranslated(posI * 16 - 500 - 8, MatrizTerreno[posI][posJ] * 16, (posJ) *16 - 300 - 8);
			
			if (i % 2 == 0) {
				arbol1();
			}
			else {
				arbol2();
			}
		glPopMatrix();
	}

	glPushMatrix();
	glTranslated(-500,1*16,-600);
	arbol2();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-580, 1 * 16, -500);
	arbol1();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-30, 1 * 16, -600);
	arbol1();
	glPopMatrix();
}

#endif

