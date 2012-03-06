#ifndef AssetBitmapTexture_H
#define AssetBitmapTexture_H

#include <jni.h>
#include "src/org/andengine/opengl/texture/Texture.h"
#include "src/org/andengine/opengl/texture/TextureManager.h"

extern "C" {
	// ===========================================================
	// org.andengine.extension.scripting.opengl.texture.bitmap.AssetBitmapTextureProxy
	// ===========================================================

	JNIEXPORT void JNICALL Java_org_andengine_extension_scripting_opengl_texture_bitmap_AssetBitmapTextureProxy_nativeInitClass(JNIEnv*, jclass);
}

class AssetBitmapTexture : public Texture {
	public:
		/* Constructors */
		AssetBitmapTexture(TextureManager*, jobject, jstring);
};

#endif