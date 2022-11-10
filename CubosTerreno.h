#ifndef CUBOSTERRENO
#define CUBOSTERRENO

void cubo_piedra() {
	//glPushMatrix();
	//glTranslated(0, 0, 0);
	//colorMadera1();
	//glutSolidCube(1);
	//glPopMatrix();
	
	/* Textura Parte superior*/
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texturas[5]);
	glColor3ub(255, 255, 255);
	glPushMatrix();
	glTranslated(-0.5, 0.50, -0.5);
	glBegin(GL_POLYGON);
	glTexCoord2f(0, 1); glVertex3d(0, 0, 1);
	glTexCoord2f(1, 1); glVertex3d(1, 0, 1);
	glTexCoord2f(1, 0); glVertex3d(1, 0, 0);
	glTexCoord2f(0, 0); glVertex3d(0, 0, 0);
	glEnd();
	glPopMatrix();
	glDisable(GL_TEXTURE_2D);

	/* Textura Parte delantera */
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texturas[1]);
	glColor3ub(255, 255, 255);
	glPushMatrix();
		glTranslated(-0.50, -0.5 ,0.50);
		glBegin(GL_POLYGON);
			glTexCoord2f(0, 1); glVertex3d(0, 1, 0);
			glTexCoord2f(1, 1); glVertex3d(1 ,1, 0);
			glTexCoord2f(1, 0); glVertex3d(1, 0, 0);
			glTexCoord2f(0, 0); glVertex3d(0, 0 ,0);
		glEnd();
	glPopMatrix();
	glDisable(GL_TEXTURE_2D);

	/* Textura Parte trasera */
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texturas[1]);
	glColor3ub(255, 255, 255);
	glPushMatrix();
		glTranslated(-0.50, -0.5 , - 1 + 0.5);
		glBegin(GL_POLYGON);
			glTexCoord2f(0, 1); glVertex3d(0, 1, 0);
			glTexCoord2f(1, 1); glVertex3d(1 ,1, 0);
			glTexCoord2f(1, 0); glVertex3d(1, 0, 0);
			glTexCoord2f(0, 0); glVertex3d(0, 0 ,0);
		glEnd();
	glPopMatrix();
	glDisable(GL_TEXTURE_2D);


	/* Textura Parte lateral izq. */
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texturas[1]);
	glColor3ub(255, 255, 255);
	glPushMatrix();
	glTranslated(0.50, -0.5, -1 + 0.5);
		glBegin(GL_POLYGON);
			glTexCoord2f(0, 1); glVertex3d(0, 1, 0);
			glTexCoord2f(1, 1); glVertex3d(0, 1, 1);
			glTexCoord2f(1, 0); glVertex3d(0, 0, 1);
			glTexCoord2f(0, 0); glVertex3d(0, 0 ,0);
		glEnd();
	glPopMatrix();
	glDisable(GL_TEXTURE_2D);

	/* Textura Parte lateral der. */
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texturas[1]);
	glColor3ub(255, 255, 255);
	glPushMatrix();
	glTranslated(-1 + 0.5, -0.5, -1 + 0.5);
	glBegin(GL_POLYGON);
			glTexCoord2f(0, 1); glVertex3d(0, 1, 0);
			glTexCoord2f(1, 1); glVertex3d(0 ,1, 1);
			glTexCoord2f(1, 0); glVertex3d(0, 0, 1);
			glTexCoord2f(0, 0); glVertex3d(0, 0 ,0);
		glEnd();
	glPopMatrix();
	glDisable(GL_TEXTURE_2D);

	//
	//glPushMatrix();
	//glTranslated(0, 0.5, 0);
	//colorPiso();
	////glColor3ub(87, 133, 60);
	//glScaled(4, 1, 4);
	//glutSolidCube(0.251);
	//glPopMatrix();
	//
}

void cubo_roca() {
	//glPushMatrix();
	//glTranslated(0, 0, 0);
	//colorPiedra1();
	//glutSolidCube(1);
	//glPopMatrix();

	/* Textura Parte superior*/
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texturas[2]);
	glColor3ub(255, 255, 255);
	glPushMatrix();
	glTranslated(-0.5, 0.5, -0.5);
	glBegin(GL_POLYGON);
	glTexCoord2f(0, 1); glVertex3d(0, 0, 1);
	glTexCoord2f(1, 1); glVertex3d(1, 0, 1);
	glTexCoord2f(1, 0); glVertex3d(1, 0, 0);
	glTexCoord2f(0, 0); glVertex3d(0, 0, 0);
	glEnd();
	glPopMatrix();
	glDisable(GL_TEXTURE_2D);

	/* Textura Parte delantera */
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texturas[2]);
	glColor3ub(255, 255, 255);
	glPushMatrix();
	glTranslated(-0.50, -0.5, 0.50);
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
	glBindTexture(GL_TEXTURE_2D, texturas[2]);
	glColor3ub(255, 255, 255);
	glPushMatrix();
	glTranslated(-0.50, -0.5, -1 + 0.5);
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
	glBindTexture(GL_TEXTURE_2D, texturas[2]);
	glColor3ub(255, 255, 255);
	glPushMatrix();
	glTranslated(0.5, -0.5, -1 + 0.5);
	glBegin(GL_POLYGON);
	glTexCoord2f(0, 1); glVertex3d(0, 1, 0);
	glTexCoord2f(1, 1); glVertex3d(0, 1, 1);
	glTexCoord2f(1, 0); glVertex3d(0, 0, 1);
	glTexCoord2f(0, 0); glVertex3d(0, 0, 0);
	glEnd();
	glPopMatrix();
	glDisable(GL_TEXTURE_2D);

	/* Textura Parte lateral der. */
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texturas[2]);
	glColor3ub(255, 255, 255);
	glPushMatrix();
	glTranslated(-1 + 0.5, -0.5, -1 + 0.5);
	glBegin(GL_POLYGON);
	glTexCoord2f(0, 1); glVertex3d(0, 1, 0);
	glTexCoord2f(1, 1); glVertex3d(0, 1, 1);
	glTexCoord2f(1, 0); glVertex3d(0, 0, 1);
	glTexCoord2f(0, 0); glVertex3d(0, 0, 0);
	glEnd();
	glPopMatrix();
	glDisable(GL_TEXTURE_2D);
}

#endif