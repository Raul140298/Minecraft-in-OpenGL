#ifndef ENDERMAN
#define ENDERMAN

void enderman_globo(int cubo) {
	/* GLOBO MORADO */
	glPushMatrix();
	glTranslated(15, 38, 15);
	glColor3ub(82, 67, 154);
	glutSolidCube(cubo);

	glPopMatrix();

	glPushMatrix();
	glTranslated(15, 36, 15);
	glColor3ub(73, 60, 142);
	glutSolidCube(cubo - 2);
	glPopMatrix();

	glPushMatrix();
	glColor3ub(101, 87, 174);
	glTranslated(0, 0, -0.001);
	glBegin(GL_QUADS);
	glVertex3d(10, 33, 10);
	glVertex3d(20, 33, 10);
	glVertex3d(20, 43, 10);
	glVertex3d(10, 43, 10);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(148, 138, 199);
	glBegin(GL_QUADS);
	glVertex3d(10, 42, 10);
	glVertex3d(11, 42, 10);
	glVertex3d(11, 36, 10);
	glVertex3d(10, 36, 10);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(11, 39, 10);
	glVertex3d(11, 40, 10);
	glVertex3d(12, 40, 10);
	glVertex3d(12, 39, 10);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(12, 34, 10);
	glVertex3d(12, 36, 10);
	glVertex3d(13, 36, 10);
	glVertex3d(13, 34, 10);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(12, 41, 10);
	glVertex3d(12, 42, 10);
	glVertex3d(13, 42, 10);
	glVertex3d(13, 41, 10);
	glEnd();


	glBegin(GL_QUADS);
	glVertex3d(15, 39, 10);
	glVertex3d(15, 42, 10);
	glVertex3d(17, 42, 10);
	glVertex3d(17, 39, 10);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(16, 42, 10);
	glVertex3d(16, 43, 10);
	glVertex3d(17, 43, 10);
	glVertex3d(17, 42, 10);
	glEnd();


	glBegin(GL_QUADS);
	glVertex3d(15, 37, 10);
	glVertex3d(15, 39, 10);
	glVertex3d(19, 39, 10);
	glVertex3d(19, 37, 10);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(14, 37, 10);
	glVertex3d(14, 38, 10);
	glVertex3d(15, 38, 10);
	glVertex3d(15, 37, 10);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(16, 35, 10);
	glVertex3d(16, 37, 10);
	glVertex3d(18, 37, 10);
	glVertex3d(18, 35, 10);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(15, 34, 10);
	glVertex3d(15, 35, 10);
	glVertex3d(20, 35, 10);
	glVertex3d(20, 34, 10);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(18, 33, 10);
	glVertex3d(18, 34, 10);
	glVertex3d(19, 34, 10);
	glVertex3d(19, 33, 10);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(19, 35, 10);
	glVertex3d(19, 37, 10);
	glVertex3d(20, 37, 10);
	glVertex3d(20, 35, 10);
	glEnd();
	glPopMatrix();

	/* GLOBO ROSADO */
	glPushMatrix();
	glTranslated(15, 42, 25);
	glColor3ub(255, 136, 254);
	glutSolidCube(cubo);

	glPopMatrix();

	glPushMatrix();
	glTranslated(15, 40, 25);
	glColor3ub(255, 136, 254);
	glutSolidCube(cubo - 2);
	glPopMatrix();


	glPushMatrix();
	glColor3ub(255, 156, 255);
	glTranslated(0, 0, -0.001);
	glBegin(GL_QUADS);
	glVertex3d(10, 47, 20);
	glVertex3d(20, 47, 20);
	glVertex3d(20, 37, 20);
	glVertex3d(10, 37, 20);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslated(0, 0, -0.01);

	glColor3ub(254, 186, 255);
	glBegin(GL_QUADS);
	glVertex3d(10, 46, 20);
	glVertex3d(11, 46, 20);
	glVertex3d(11, 40, 20);
	glVertex3d(10, 40, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(11, 43, 20);
	glVertex3d(11, 44, 20);
	glVertex3d(12, 44, 20);
	glVertex3d(12, 43, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(12, 38, 20);
	glVertex3d(12, 40, 20);
	glVertex3d(13, 40, 20);
	glVertex3d(13, 38, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(12, 45, 20);
	glVertex3d(12, 47, 20);
	glVertex3d(13, 47, 20);
	glVertex3d(13, 45, 20);
	glEnd();


	glBegin(GL_QUADS);
	glVertex3d(15, 43, 20);
	glVertex3d(15, 46, 20);
	glVertex3d(17, 46, 20);
	glVertex3d(17, 43, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(16, 46, 20);
	glVertex3d(16, 47, 20);
	glVertex3d(17, 47, 20);
	glVertex3d(17, 46, 20);
	glEnd();


	glBegin(GL_QUADS);
	glVertex3d(15, 41, 20);
	glVertex3d(15, 43, 20);
	glVertex3d(19, 43, 20);
	glVertex3d(19, 41, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(14, 41, 20);
	glVertex3d(14, 42, 20);
	glVertex3d(15, 42, 20);
	glVertex3d(15, 41, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(16, 39, 20);
	glVertex3d(16, 41, 20);
	glVertex3d(18, 41, 20);
	glVertex3d(18, 39, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(15, 38, 20);
	glVertex3d(15, 39, 20);
	glVertex3d(20, 39, 20);
	glVertex3d(20, 38, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(18, 37, 20);
	glVertex3d(18, 38, 20);
	glVertex3d(19, 38, 20);
	glVertex3d(19, 37, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(19, 39, 20);
	glVertex3d(19, 41, 20);
	glVertex3d(20, 41, 20);
	glVertex3d(20, 39, 20);
	glEnd();
	glPopMatrix();


	/* GLOBO BARNI */
	glPushMatrix();
	glTranslated(4, 47, 25);
	glColor3ub(100, 29, 128);
	glutSolidCube(cubo);

	glPopMatrix();

	glPushMatrix();
	glTranslated(4, 45, 25);
	glColor3ub(100, 29, 128);
	glutSolidCube(cubo - 2);
	glPopMatrix();


	glPushMatrix();
	glColor3ub(121, 51, 150);
	glTranslated(0, 0, -0.001);
	glBegin(GL_QUADS);
	glVertex3d(9, 52, 20);
	glVertex3d(-1, 52, 20);
	glVertex3d(-1, 42, 20);
	glVertex3d(9, 42, 20);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslated(0, 0, -0.01);

	glColor3ub(162, 112, 182);
	glBegin(GL_QUADS);
	glVertex3d(10 - 11, 51, 20);
	glVertex3d(11 - 11, 51, 20);
	glVertex3d(11 - 11, 45, 20);
	glVertex3d(10 - 11, 45, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(11 - 11, 48, 20);
	glVertex3d(11 - 11, 49, 20);
	glVertex3d(12 - 11, 49, 20);
	glVertex3d(12 - 11, 48, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(12 - 11, 43, 20);
	glVertex3d(12 - 11, 45, 20);
	glVertex3d(13 - 11, 45, 20);
	glVertex3d(13 - 11, 43, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(12 - 11, 50, 20);
	glVertex3d(12 - 11, 52, 20);
	glVertex3d(13 - 11, 52, 20);
	glVertex3d(13 - 11, 50, 20);
	glEnd();


	glBegin(GL_QUADS);
	glVertex3d(15 - 11, 48, 20);
	glVertex3d(15 - 11, 51, 20);
	glVertex3d(17 - 11, 51, 20);
	glVertex3d(17 - 11, 48, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(16 - 11, 51, 20);
	glVertex3d(16 - 11, 52, 20);
	glVertex3d(17 - 11, 52, 20);
	glVertex3d(17 - 11, 51, 20);
	glEnd();


	glBegin(GL_QUADS);
	glVertex3d(15 - 11, 46, 20);
	glVertex3d(15 - 11, 48, 20);
	glVertex3d(19 - 11, 48, 20);
	glVertex3d(19 - 11, 46, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(14 - 11, 46, 20);
	glVertex3d(14 - 11, 47, 20);
	glVertex3d(15 - 11, 47, 20);
	glVertex3d(15 - 11, 46, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(16 - 11, 44, 20);
	glVertex3d(16 - 11, 46, 20);
	glVertex3d(18 - 11, 46, 20);
	glVertex3d(18 - 11, 44, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(15 - 11, 43, 20);
	glVertex3d(15 - 11, 44, 20);
	glVertex3d(20 - 11, 44, 20);
	glVertex3d(20 - 11, 43, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(18 - 11, 42, 20);
	glVertex3d(18 - 11, 43, 20);
	glVertex3d(19 - 11, 43, 20);
	glVertex3d(19 - 11, 42, 20);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(19 - 11, 44, 20);
	glVertex3d(19 - 11, 46, 20);
	glVertex3d(20 - 11, 46, 20);
	glVertex3d(20 - 11, 44, 20);
	glEnd();
	glPopMatrix();
}

void enderman_pita_globo() {

	glPushMatrix();
	glTranslated(0, 5, -3);
	glRotated(40, 0, 1, 0);
	glPushMatrix();
	glRotated(34, 1, 0, 0);
	glTranslated(0, 25, 0);
	glScaled(1, 150, 1);
	glutSolidCube(0.2);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 5, -3);
	glRotated(40, 0, 1, 0);
	glPushMatrix();
	glRotated(40, 1, 0, 0);
	glTranslated(0, 25, 0);
	glScaled(1, 180, 1);
	glutSolidCube(0.2);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glRotated(355, 0, 1, 0);
	glTranslated(5, 5, -3);
	glPushMatrix();
	glRotated(35, 1, 0, 0);
	glTranslated(0, 25, 0);
	glScaled(1, 200, 1);
	glutSolidCube(0.2);
	glPopMatrix();
	glPopMatrix();
}

void enderman_sombra_cabeza() {
	/* Pelo Lado Derecho (Al costado cabeza)*/
	glPushMatrix();
	glTranslated(0.01, 0, 0);

	color_enderman_sombra_secundario();
	glBegin(GL_QUADS);
	glVertex3d(4.01, 30, -3);
	glVertex3d(4.01, 31, -3);
	glVertex3d(4.01, 31, -1);
	glVertex3d(4.01, 30, -1);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(4.01, 27, -2);
	glVertex3d(4.01, 28, -2);
	glVertex3d(4.01, 28, 1);
	glVertex3d(4.01, 27, 1);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(4.01, 29, 1);
	glVertex3d(4.01, 31, 1);
	glVertex3d(4.01, 31, 2);
	glVertex3d(4.01, 29, 2);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(4.01, 25, -1);
	glVertex3d(4.01, 26, -1);
	glVertex3d(4.01, 26, 2);
	glVertex3d(4.01, 25, 2);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(4.01, 26, 3);
	glVertex3d(4.01, 30, 3);
	glVertex3d(4.01, 30, 4);
	glVertex3d(4.01, 26, 4);
	glEnd();

	color_enderman_sombra_primario();
	glBegin(GL_QUADS);
	glVertex3d(4, 32, -4);
	glVertex3d(4, 32, 4);
	glVertex3d(4, 24, 4);
	glVertex3d(4, 24, -4);
	glEnd();

	glPopMatrix();

	/* Pelo Lado Izquierdo (Al costado cabeza)*/
	glPushMatrix();
	glTranslated(-0.01, 0, 0);

	color_enderman_sombra_secundario();
	glBegin(GL_QUADS);
	glVertex3d(-4.01, 30, -3);
	glVertex3d(-4.01, 31, -3);
	glVertex3d(-4.01, 31, -1);
	glVertex3d(-4.01, 30, -1);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(-4.01, 27, -2);
	glVertex3d(-4.01, 28, -2);
	glVertex3d(-4.01, 28, 1);
	glVertex3d(-4.01, 27, 1);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(-4.01, 29, 1);
	glVertex3d(-4.01, 31, 1);
	glVertex3d(-4.01, 31, 2);
	glVertex3d(-4.01, 29, 2);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(-4.01, 25, -1);
	glVertex3d(-4.01, 26, -1);
	glVertex3d(-4.01, 26, 2);
	glVertex3d(-4.01, 25, 2);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(-4.01, 26, 3);
	glVertex3d(-4.01, 30, 3);
	glVertex3d(-4.01, 30, 4);
	glVertex3d(-4.01, 26, 4);
	glEnd();

	color_enderman_sombra_primario();
	glBegin(GL_QUADS);
	glVertex3d(-4, 32, -4);
	glVertex3d(-4, 32, 4);
	glVertex3d(-4, 24, 4);
	glVertex3d(-4, 24, -4);
	glEnd();

	glPopMatrix();

}

void enderman_cara() {
	/*Ojo Blanco y Morado*/
	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(238, 144, 255);
	glBegin(GL_QUADS);
	glVertex3d(-4, 28, -4);
	glVertex3d(-1, 28, -4);
	glVertex3d(-1, 27, -4);
	glVertex3d(-4, 27, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.025);
	glColor3ub(221, 45, 246);
	glBegin(GL_QUADS);
	glVertex3d(-3, 28, -4);
	glVertex3d(-2, 28, -4);
	glVertex3d(-2, 27, -4);
	glVertex3d(-3, 27, -4);
	glEnd();
	glPopMatrix();
	/*--------------------*/

	/*Ojo Blanco y Morado*/
	glPushMatrix();
	glTranslated(0, 0, -0.01);
	glColor3ub(238, 144, 255);
	glBegin(GL_QUADS);
	glVertex3d(4, 28, -4);
	glVertex3d(1, 28, -4);
	glVertex3d(1, 27, -4);
	glVertex3d(4, 27, -4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, -0.025);
	glColor3ub(221, 45, 246);
	glBegin(GL_QUADS);
	glVertex3d(3, 28, -4);
	glVertex3d(2, 28, -4);
	glVertex3d(2, 27, -4);
	glVertex3d(3, 27, -4);
	glEnd();
	glPopMatrix();
	/*--------------------*/
}

void enderman_cabeza() {
	/* Cabeza (Cubo: ahi se superponen diseños faciales[rectangulos, circulos, etc])*/
	glPushMatrix();
	glTranslated(0, 34, 0);
	color_enderman_principal();
	glutSolidCube(8);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 6, 0);
	enderman_cara();
	enderman_sombra_cabeza();
	glPopMatrix();
}

void enderman_cuerpo() {
	color_enderman_principal();
	/* Cuerpo */
	glPushMatrix();
	glTranslated(0, 23.5, 0);
	glScaled(8, 13, 4);
	glutSolidCube(1);
	glPopMatrix();
}

void enderman_pierna_izquierda() {
	color_enderman_principal();
	glPushMatrix();
	glTranslated(-2, 9, 0);
	glScaled(1, 9, 1);
	glutSolidCube(2);
	glPopMatrix();

}

void enderman_pierna_derecha() {
	color_enderman_principal();
	glPushMatrix();
	glTranslated(2, 9, 0);
	glScaled(1, 9, 1);
	glutSolidCube(2);
	glPopMatrix();
}

void enderman_sombra_brazo_izquierdo() {
	/* Sombra Brazo Izquierdo*/
	glPushMatrix();
	glTranslated(-0.001, 0, -2.9);
	glRotated(15.5, 1, 0, 0);

	color_enderman_sombra_secundario();
	glBegin(GL_QUADS);
	glVertex3d(4, 9, -3);
	glVertex3d(4, 14, -3);
	glVertex3d(4, 14, -2);
	glVertex3d(4, 9, -2);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(4, 15, -3);
	glVertex3d(4, 16, -3);
	glVertex3d(4, 16, -2);
	glVertex3d(4, 15, -2);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(4, 9, -2);
	glVertex3d(4, 11, -2);
	glVertex3d(4, 11, -1);
	glVertex3d(4, 9, -1);
	glEnd();

	color_enderman_sombra_primario();
	glBegin(GL_QUADS);
	glVertex3d(4, 9, -3);
	glVertex3d(4, 24.5, -3);
	glVertex3d(4, 24.5, -1);
	glVertex3d(4, 9, -1);
	glEnd();
	glPopMatrix();
}

void enderman_sombra_brazo_derecho()
{
	/* Sombra Brazo Derecho*/
	glPushMatrix();
	glTranslated(+0.001, 0, 7);
	glRotated(360 - 15.5, 1, 0, 0);

	color_enderman_sombra_secundario();
	glBegin(GL_QUADS);
	glVertex3d(-4, 9.5, -3);
	glVertex3d(-4, 14, -3);
	glVertex3d(-4, 14, -2);
	glVertex3d(-4, 9.5, -2);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(-4, 15, -3);
	glVertex3d(-4, 16, -3);
	glVertex3d(-4, 16, -2);
	glVertex3d(-4, 15, -2);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(-4, 9.5, -2);
	glVertex3d(-4, 11, -2);
	glVertex3d(-4, 11, -1);
	glVertex3d(-4, 9.5, -1);
	glEnd();

	color_enderman_sombra_primario();
	glBegin(GL_QUADS);
	glVertex3d(-4, 9.5, -3);
	glVertex3d(-4, 24.5, -3);
	glVertex3d(-4, 24.5, -1);
	glVertex3d(-4, 9.5, -1);
	glEnd();
	glPopMatrix();
}

void enderman_brazo_izquierdo() {
	color_enderman_principal();
	glPushMatrix();
	glTranslated(-5, 18.5, 0);
	glScaled(1, 11.5, 1);
	glutSolidCube(2);
	glPopMatrix();
}

void enderman_brazo_derecho() {
	color_enderman_principal();
	glPushMatrix();
	glTranslated(5, 18.5, 0);
	glScaled(1, 11.5, 1);
	glutSolidCube(2);
	glPopMatrix();
}




#endif