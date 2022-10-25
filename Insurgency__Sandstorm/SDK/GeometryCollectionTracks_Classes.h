#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Size -> 0x0030 (FullSize[0x0110] - InheritedSize[0x00E0])
	 */
	class UMovieSceneGeometryCollectionSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneGeometryCollectionParams                 Params;                                                  // 0x00E0(0x0030) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          AnimationSections;                                       // 0x0058(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
