#
# File			Makefile
# Title			Demo makefile
#
# Copyright		Copyright Imagination Technologies Limited.
#

.PHONY: clean

SDKDIR  = ../../../../..
OUTNAME = OGLES2ShadowMapping

OBJECTS +=	\
           Scene.o	\
           Mask.o	\
           TableCover.o	\
           Torus.o	\
           FragShader.o	\
           VertShader.o	\
           ShadowFragShader.o	\
           ShadowVertShader.o

include $(SDKDIR)/Builds/OGLES2/LinuxGeneric/make_demo.mak

../../Content/Scene.cpp ../../Content/Mask.cpp ../../Content/TableCover.cpp ../../Content/Torus.cpp ../../Content/FragShader.cpp ../../Content/VertShader.cpp ../../Content/ShadowFragShader.cpp ../../Content/ShadowVertShader.cpp: build_textures_and_shaders 

%.o: ../../Content/%.cpp
	$(CC) -c $(COMMON_INCLUDES) $(PLAT_INCLUDES) $(INCLUDES) $(COMMON_CFLAGS) $(PLAT_CFLAGS) $(CFLAGS) $^ -o$@

clean:
	-rm -rf $(PLAT_OBJPATH)/*.o
	make -C ../.. -f content.mak clean
