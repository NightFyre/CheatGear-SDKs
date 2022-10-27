#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheParams
	 * Size -> 0x0028
	 */
	struct FMovieSceneGeometryCacheParams
	{
	public:
		struct FSoftObjectPath                                     GeometryCache;                                           // 0x0000(0x0018) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartOffset;                                             // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndOffset;                                               // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bReverse : 1;                                            // 0x0024(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EGQ0[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FMovieSceneGeometryCacheSectionTemplateParameters : public FMovieSceneGeometryCacheParams
	{
	public:
		unsigned char                                              UnknownData_9TVH[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFrameNumber                                        SectionStartTime;                                        // 0x0030(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        SectionEndTime;                                          // 0x0034(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
	 * Size -> 0x0038 (FullSize[0x0058] - InheritedSize[0x0020])
	 */
	struct FMovieSceneGeometryCacheSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieSceneGeometryCacheSectionTemplateParameters   Params;                                                  // 0x0020(0x0038) NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
