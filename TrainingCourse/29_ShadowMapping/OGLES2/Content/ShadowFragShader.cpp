// This file was created by Filewrap 1.1
// Little endian mode
// DO NOT EDIT

#include "../PVRTMemoryFileSystem.h"

// using 32 bit to guarantee alignment.
#ifndef A32BIT
 #define A32BIT static const unsigned int
#endif

// ******** Start: ShadowFragShader.fsh ********

// File data
static const char _ShadowFragShader_fsh[] = 
	"uniform highp sampler2D sShadow;\r\n"
	"uniform sampler2D sTexture;\r\n"
	"\r\n"
	"varying highp vec4 projCoord;\r\n"
	"varying mediump vec2 texCoord;\r\n"
	"varying lowp vec3 LightIntensity;\r\n"
	"\r\n"
	"void main ()\r\n"
	"{\t\r\n"
	"\t// Subtract a small magic number to account for floating-point error\r\n"
	"\thighp float comp = (projCoord.z / projCoord.w) - 0.03;\r\n"
	"\thighp float depth = texture2DProj(sShadow, projCoord).r;\r\n"
	"\t\r\n"
	"\tlowp float val = comp <= depth ? 1.0 : 0.4;\r\n"
	"\tlowp vec3 color = texture2D(sTexture, texCoord).rgb * LightIntensity * val;\r\n"
	"\t\r\n"
	"\tgl_FragColor = vec4(color, 1.0);\r\n"
	"}\r\n"
	"\r\n";

// Register ShadowFragShader.fsh in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_ShadowFragShader_fsh("ShadowFragShader.fsh", _ShadowFragShader_fsh, 540);

// ******** End: ShadowFragShader.fsh ********

