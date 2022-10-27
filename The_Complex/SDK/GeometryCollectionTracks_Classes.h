#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
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
	 * Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
	 * Size -> 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
	 */
	class UMovieSceneGeometryCollectionSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneGeometryCollectionParams                 Params;                                                  // 0x00E8(0x0030) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_RUGQ[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          AnimationSections;                                       // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
