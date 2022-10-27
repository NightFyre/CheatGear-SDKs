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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class LiveLink.LiveLinkBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_TransformNames(struct FSubjectFrameHandle* SubjectFrameHandle, TArray<class FName>* TransformNames);
		void STATIC_TransformName(struct FLiveLinkTransform* LiveLinkTransform, class FName* Name);
		bool STATIC_RequestShutdown(struct FLiveLinkSourceHandle* SourceHandle);
		void STATIC_ParentBoneSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform);
		int32_t STATIC_NumberOfTransforms(struct FSubjectFrameHandle* SubjectFrameHandle);
		bool STATIC_IsSourceStillValid(struct FLiveLinkSourceHandle* SourceHandle);
		bool STATIC_HasParent(struct FLiveLinkTransform* LiveLinkTransform);
		void STATIC_GetTransformByName(struct FSubjectFrameHandle* SubjectFrameHandle, const class FName& TransformName, struct FLiveLinkTransform* LiveLinkTransform);
		void STATIC_GetTransformByIndex(struct FSubjectFrameHandle* SubjectFrameHandle, int32_t TransformIndex, struct FLiveLinkTransform* LiveLinkTransform);
		class FText STATIC_GetSourceType(struct FLiveLinkSourceHandle* SourceHandle);
		class FText STATIC_GetSourceStatus(struct FLiveLinkSourceHandle* SourceHandle);
		class FText STATIC_GetSourceMachineName(struct FLiveLinkSourceHandle* SourceHandle);
		void STATIC_GetRootTransform(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
		void STATIC_GetParent(struct FLiveLinkTransform* LiveLinkTransform, struct FLiveLinkTransform* Parent);
		void STATIC_GetMetadata(struct FSubjectFrameHandle* SubjectFrameHandle, struct FSubjectMetadata* MetaData);
		void STATIC_GetCurves(struct FSubjectFrameHandle* SubjectFrameHandle, TMap<class FName, float>* Curves);
		void STATIC_GetChildren(struct FLiveLinkTransform* LiveLinkTransform, TArray<struct FLiveLinkTransform>* Children);
		void STATIC_ComponentSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform);
		int32_t STATIC_ChildCount(struct FLiveLinkTransform* LiveLinkTransform);
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkComponent
	 * Size -> 0x0020 (FullSize[0x0198] - InheritedSize[0x0178])
	 */
	class ULiveLinkComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnLiveLinkUpdated;                                       // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L5JS[0x10];                                  // 0x0188(0x0010) MISSED OFFSET (PADDING)

	public:
		void GetSubjectData(const class FName& SubjectName, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
		void GetAvailableSubjectNames(TArray<class FName>* SubjectNames);
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkDrivenComponent
	 * Size -> 0x0020 (FullSize[0x0198] - InheritedSize[0x0178])
	 */
	class ULiveLinkDrivenComponent : public UActorComponent
	{
	public:
		struct FLiveLinkSubjectName                                SubjectName;                                             // 0x0178(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ActorTransformBone;                                      // 0x0180(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bModifyActorTransform;                                   // 0x0188(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetRelativeLocation;                                    // 0x0189(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_014Y[0xE];                                   // 0x018A(0x000E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkInstance
	 * Size -> 0x0000 (FullSize[0x0440] - InheritedSize[0x0440])
	 */
	class ULiveLinkInstance : public UAnimInstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkMessageBusFinder
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class ULiveLinkMessageBusFinder : public UObject
	{
	public:
		unsigned char                                              UnknownData_73LL[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (PADDING)

	public:
		void GetAvailableProviders(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float Duration, TArray<struct FProviderPollResult>* AvailableProviders);
		class ULiveLinkMessageBusFinder* STATIC_ConstructMessageBusFinder();
		void STATIC_ConnectToProvider(struct FProviderPollResult* Provider, struct FLiveLinkSourceHandle* SourceHandle);
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkRetargetAsset
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULiveLinkRetargetAsset : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkRemapAsset
	 * Size -> 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
	 */
	class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
	{
	public:
		unsigned char                                              UnknownData_24KA[0xA8];                                  // 0x0028(0x00A8) MISSED OFFSET (PADDING)

	public:
		void RemapCurveElements(TMap<class FName, float>* CurveItems);
		class FName GetRemappedCurveName(const class FName& CurveName);
		class FName GetRemappedBoneName(const class FName& BoneName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
