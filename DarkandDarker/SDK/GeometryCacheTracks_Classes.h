﻿#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class GeometryCacheTracks.MovieSceneGeometryCacheSection
	 * Size -> 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
	 */
	class UMovieSceneGeometryCacheSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneGeometryCacheParams                      Params;                                                  // 0x00E8(0x0040) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_6IPH[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          AnimationSections;                                       // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
