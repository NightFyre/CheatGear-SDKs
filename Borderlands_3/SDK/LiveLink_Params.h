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
	 * Function LiveLink.LiveLinkBlueprintLibrary.TransformNames
	 */
	struct ULiveLinkBlueprintLibrary_TransformNames_Params
	{
	public:
		struct FSubjectFrameHandle                                 SubjectFrameHandle;                                      // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FName>                                        TransformNames;                                          // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.TransformName
	 */
	struct ULiveLinkBlueprintLibrary_TransformName_Params
	{
	public:
		struct FLiveLinkTransform                                  LiveLinkTransform;                                       // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                Name;                                                    // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.RequestShutdown
	 */
	struct ULiveLinkBlueprintLibrary_RequestShutdown_Params
	{
	public:
		struct FLiveLinkSourceHandle                               SourceHandle;                                            // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
	 */
	struct ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Params
	{
	public:
		struct FLiveLinkTransform                                  LiveLinkTransform;                                       // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTransform                                          Transform;                                               // 0x0020(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
	 */
	struct ULiveLinkBlueprintLibrary_NumberOfTransforms_Params
	{
	public:
		struct FSubjectFrameHandle                                 SubjectFrameHandle;                                      // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
	 */
	struct ULiveLinkBlueprintLibrary_IsSourceStillValid_Params
	{
	public:
		struct FLiveLinkSourceHandle                               SourceHandle;                                            // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.HasParent
	 */
	struct ULiveLinkBlueprintLibrary_HasParent_Params
	{
	public:
		struct FLiveLinkTransform                                  LiveLinkTransform;                                       // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
	 */
	struct ULiveLinkBlueprintLibrary_GetTransformByName_Params
	{
	public:
		struct FSubjectFrameHandle                                 SubjectFrameHandle;                                      // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                TransformName;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLiveLinkTransform                                  LiveLinkTransform;                                       // 0x0020(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
	 */
	struct ULiveLinkBlueprintLibrary_GetTransformByIndex_Params
	{
	public:
		struct FSubjectFrameHandle                                 SubjectFrameHandle;                                      // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    TransformIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3S1E[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLiveLinkTransform                                  LiveLinkTransform;                                       // 0x0020(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
	 */
	struct ULiveLinkBlueprintLibrary_GetSourceType_Params
	{
	public:
		struct FLiveLinkSourceHandle                               SourceHandle;                                            // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
	 */
	struct ULiveLinkBlueprintLibrary_GetSourceStatus_Params
	{
	public:
		struct FLiveLinkSourceHandle                               SourceHandle;                                            // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
	 */
	struct ULiveLinkBlueprintLibrary_GetSourceMachineName_Params
	{
	public:
		struct FLiveLinkSourceHandle                               SourceHandle;                                            // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
	 */
	struct ULiveLinkBlueprintLibrary_GetRootTransform_Params
	{
	public:
		struct FSubjectFrameHandle                                 SubjectFrameHandle;                                      // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLiveLinkTransform                                  LiveLinkTransform;                                       // 0x0018(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetParent
	 */
	struct ULiveLinkBlueprintLibrary_GetParent_Params
	{
	public:
		struct FLiveLinkTransform                                  LiveLinkTransform;                                       // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLiveLinkTransform                                  Parent;                                                  // 0x0020(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
	 */
	struct ULiveLinkBlueprintLibrary_GetMetadata_Params
	{
	public:
		struct FSubjectFrameHandle                                 SubjectFrameHandle;                                      // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FSubjectMetadata                                    MetaData;                                                // 0x0018(0x0070)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
	 */
	struct ULiveLinkBlueprintLibrary_GetCurves_Params
	{
	public:
		struct FSubjectFrameHandle                                 SubjectFrameHandle;                                      // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FName, float>                                   Curves;                                                  // 0x0018(0x0050)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
	 */
	struct ULiveLinkBlueprintLibrary_GetChildren_Params
	{
	public:
		struct FLiveLinkTransform                                  LiveLinkTransform;                                       // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FLiveLinkTransform>                          Children;                                                // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
	 */
	struct ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Params
	{
	public:
		struct FLiveLinkTransform                                  LiveLinkTransform;                                       // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTransform                                          Transform;                                               // 0x0020(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
	 */
	struct ULiveLinkBlueprintLibrary_ChildCount_Params
	{
	public:
		struct FLiveLinkTransform                                  LiveLinkTransform;                                       // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkComponent.GetSubjectData
	 */
	struct ULiveLinkComponent_GetSubjectData_Params
	{
	public:
		class FName                                                SubjectName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9UPO[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSubjectFrameHandle                                 SubjectFrameHandle;                                      // 0x0010(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
	 */
	struct ULiveLinkComponent_GetAvailableSubjectNames_Params
	{
	public:
		TArray<class FName>                                        SubjectNames;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
	 */
	struct ULiveLinkMessageBusFinder_GetAvailableProviders_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9OC2[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FProviderPollResult>                         AvailableProviders;                                      // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
	 */
	struct ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Params
	{
	public:
		class ULiveLinkMessageBusFinder*                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
	 */
	struct ULiveLinkMessageBusFinder_ConnectToProvider_Params
	{
	public:
		struct FProviderPollResult                                 Provider;                                                // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLiveLinkSourceHandle                               SourceHandle;                                            // 0x0030(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkRemapAsset.RemapCurveElements
	 */
	struct ULiveLinkRemapAsset_RemapCurveElements_Params
	{
	public:
		TMap<class FName, float>                                   CurveItems;                                              // 0x0000(0x0050)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
	 */
	struct ULiveLinkRemapAsset_GetRemappedCurveName_Params
	{
	public:
		class FName                                                CurveName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
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
