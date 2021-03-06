#pragma once
#include "Global.h"
#include "TextureScriptReader\TextStructs.h"

using namespace ScriptReaderStore;

////Define path
//#if TARGET_OS_MAC
//	const string intermediateFilePath = "\\Plug-Ins\\muSee\\Data\\"; //May Need Rewriting
//#else
//	const string intermediateFilePath = "\\Plug-Ins\\muSee\\Data\\";
//#endif
//
//enum LoadingOption{X_Clamp, X_Repeat};
//enum TextureType {AnimationTexture, BackgroundTexture, VerticalAnimationTexture, FlyingAnimationTexture, TotalTextureTypes};
//enum EntranceEffect{NoEffect, Diagonal, Vertical, fading, MaxEntranceEffect};
//enum DrawUnitShape{rect_dia, rect_ver, triangle, circle, polygon};
//enum ReadingStatus{fileFinishedFailure,fileNotOpenFailure,successRead}; 
//
////Read Struct: generic return struct
//struct TexParameter {
//	//basic parameters
//	unsigned int max_frame;
//	unsigned int animationColumns;
//
//	bool usingTexture;
//	bool collidable;
//	bool initialStationary;
//
//	float xBound;
//	float yBound;
//	
//	DrawUnitShape texShape;
//	EntranceEffect entranceEffectID;
//	
//	//spawning parameters
//	float minLength;
//	float maxLength;
//
//	//spawning
//	float minTimeInS;
//	float maxTimeInS;
//
//	//Entrance effect
//	float minEntranceTime;
//	float maxEntranceTime;
//
//	//time in seconds
//	float minExitTime;
//	float maxExitTime;
//
//	//constraints
//	float max_AngleChangeInRad;
//
//	//Orientation is unnecessary because there are only 2 possible orientation
//
//	//advanced parameters
//	//orientational parameters
//	//unsigned int maxAnimationOrientation;
//	//deque<float> * diagonalRadianScale;
//	//deque<float> * diagonalRadianOffset;
//};
//
////Define the struct to store openGL texture
//struct TextureImage                             // Create A Structure
//{
//	string texName;								//name of the struct
//
//    GLuint  bpp;                                // Image Color Depth In Bits Per Pixel.
//    GLuint  width;                              // Image Width
//    GLuint  height;                             // Image Height
//    GLuint  texID;                              // Texture ID Used To Select A Texture
//	
//	// enum attribute
//	TextureType texTypeID;						
//	LoadingOption texRepeatOpt;	
//
//	//other loading attributes (generic attributes)
//	TexParameter texParameter;
//
//} ;                                 // Structure Name
//
