#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
	 */
	struct UMovieSceneTransformOrigin_BP_GetTransformOrigin_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneSkeletalAnimationSection.GetAvailableSlotNames
	 */
	struct UMovieSceneSkeletalAnimationSection_GetAvailableSlotNames_Params
	{
	public:
		TArray<class FName>                                        OutSlotNames;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
