#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
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
	 * Function LiveLinkAnimationCore.LiveLinkInstance.SetSubject
	 */
	struct ULiveLinkInstance_SetSubject_Params
	{
	public:
		struct FLiveLinkSubjectName                                SubjectName;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLinkAnimationCore.LiveLinkInstance.SetRetargetAsset
	 */
	struct ULiveLinkInstance_SetRetargetAsset_Params
	{
	public:
		class UClass*                                              RetargetAsset;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLinkAnimationCore.LiveLinkRemapAsset.RemapCurveElements
	 */
	struct ULiveLinkRemapAsset_RemapCurveElements_Params
	{
	public:
		TMap<class FName, float>                                   CurveItems;                                              // 0x0000(0x0050)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLinkAnimationCore.LiveLinkRemapAsset.GetRemappedCurveName
	 */
	struct ULiveLinkRemapAsset_GetRemappedCurveName_Params
	{
	public:
		class FName                                                CurveName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLinkAnimationCore.LiveLinkRemapAsset.GetRemappedBoneName
	 */
	struct ULiveLinkRemapAsset_GetRemappedBoneName_Params
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
