#ifndef SYSGL_GL_H_
#define SYSGL_GL_H_

#ifdef DAEDALUS_VITA
#include <SDL2/SDL.h>
#include <vitaGL.h>
#include <vita2d.h>
#include <stdlib.h>
#else
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#endif

#include "Utility/DaedalusTypes.h"

//extern GLFWwindow * gWindow;

// FIXME: burn all of this with fire.

void sceGuFog(float mn, float mx, u32 col);

enum EGuTextureWrapMode
{
	GU_CLAMP			= GL_CLAMP_TO_EDGE,
	GU_REPEAT			= GL_REPEAT,
};

enum EGuMatrixType
{
	GU_PROJECTION		= GL_PROJECTION,
};

struct ScePspFMatrix4
{
	float m[16];
};

void sceGuSetMatrix(EGuMatrixType type, const ScePspFMatrix4 * mtx);


#endif // SYSGL_GL_H_
