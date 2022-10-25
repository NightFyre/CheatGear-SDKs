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
	 * Class LiveLink.LiveLinkBasicFrameInterpolationProcessor
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
	{
	public:
		bool                                                       bInterpolatePropertyValues;                              // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQYC[0x17];                                  // 0x0029(0x0017) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
	{
	public:
		unsigned char                                              UnknownData_XB0X[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkAnimationRoleToTransform
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
	{
	public:
		class FName                                                BoneName;                                                // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RLEJ[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkAnimationVirtualSubject
	 * Size -> 0x0008 (FullSize[0x0168] - InheritedSize[0x0160])
	 */
	class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
	{
	public:
		unsigned char                                              UnknownData_NJA1[0x1];                                   // 0x0160(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAppendSubjectNameToBones;                               // 0x0161(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O3XZ[0x6];                                   // 0x0162(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
	{
	public:
		ELiveLinkAxis                                              FrontAxis;                                               // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ELiveLinkAxis                                              RightAxis;                                               // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ELiveLinkAxis                                              UpAxis;                                                  // 0x002A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseOffsetPosition;                                      // 0x002B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseOffsetOrientation;                                   // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B59J[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OffsetPosition;                                          // 0x0030(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            OffsetOrientation;                                       // 0x0048(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MFQW[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_TransformNames(struct FSubjectFrameHandle* SubjectFrameHandle, TArray<class FName>* TransformNames);
		void STATIC_TransformName(struct FLiveLinkTransform* LiveLinkTransform, class FName* Name);
		void STATIC_SetLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bEnabled);
		bool STATIC_RemoveSource(struct FLiveLinkSourceHandle* SourceHandle);
		void STATIC_ParentBoneSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform);
		int32_t STATIC_NumberOfTransforms(struct FSubjectFrameHandle* SubjectFrameHandle);
		bool STATIC_IsSpecificLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bForThisFrame);
		bool STATIC_IsSourceStillValid(struct FLiveLinkSourceHandle* SourceHandle);
		bool STATIC_IsLiveLinkSubjectEnabled(const struct FLiveLinkSubjectName& SubjectName);
		bool STATIC_HasParent(struct FLiveLinkTransform* LiveLinkTransform);
		void STATIC_GetTransformByName(struct FSubjectFrameHandle* SubjectFrameHandle, const class FName& TransformName, struct FLiveLinkTransform* LiveLinkTransform);
		void STATIC_GetTransformByIndex(struct FSubjectFrameHandle* SubjectFrameHandle, int32_t TransformIndex, struct FLiveLinkTransform* LiveLinkTransform);
		class UClass* STATIC_GetSpecificLiveLinkSubjectRole(const struct FLiveLinkSubjectKey& SubjectKey);
		class FText STATIC_GetSourceType(struct FLiveLinkSourceHandle* SourceHandle);
		class FText STATIC_GetSourceStatus(struct FLiveLinkSourceHandle* SourceHandle);
		class FText STATIC_GetSourceMachineName(struct FLiveLinkSourceHandle* SourceHandle);
		void STATIC_GetRootTransform(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
		bool STATIC_GetPropertyValue(struct FLiveLinkBasicBlueprintData* BasicData, const class FName& PropertyName, float* Value);
		void STATIC_GetParent(struct FLiveLinkTransform* LiveLinkTransform, struct FLiveLinkTransform* Parent);
		void STATIC_GetMetadata(struct FSubjectFrameHandle* SubjectFrameHandle, struct FSubjectMetadata* MetaData);
		TArray<struct FLiveLinkSubjectKey> STATIC_GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject);
		class UClass* STATIC_GetLiveLinkSubjectRole(const struct FLiveLinkSubjectName& SubjectName);
		TArray<struct FLiveLinkSubjectName> STATIC_GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject);
		void STATIC_GetCurves(struct FSubjectFrameHandle* SubjectFrameHandle, TMap<class FName, float>* Curves);
		void STATIC_GetChildren(struct FLiveLinkTransform* LiveLinkTransform, TArray<struct FLiveLinkTransform>* Children);
		void STATIC_GetBasicData(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkBasicBlueprintData* BasicBlueprintData);
		bool STATIC_GetAnimationStaticData(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkSkeletonStaticData* AnimationStaticData);
		bool STATIC_GetAnimationFrameData(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkAnimationFrameData* AnimationFrameData);
		bool STATIC_EvaluateLiveLinkFrameWithSpecificRole(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
		bool STATIC_EvaluateLiveLinkFrameAtWorldTimeOffset(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, float WorldTimeOffset, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
		bool STATIC_EvaluateLiveLinkFrameAtSceneTime(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, const struct FTimecode& SceneTime, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
		bool STATIC_EvaluateLiveLinkFrame(const struct FLiveLinkSubjectRepresentation& SubjectRepresentation, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
		void STATIC_ComponentSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform);
		int32_t STATIC_ChildCount(struct FLiveLinkTransform* LiveLinkTransform);
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkBlueprintVirtualSubject
	 * Size -> 0x0028 (FullSize[0x0188] - InheritedSize[0x0160])
	 */
	class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject
	{
	public:
		unsigned char                                              UnknownData_UJN1[0x28];                                  // 0x0160(0x0028) MISSED OFFSET (PADDING)

	public:
		bool UpdateVirtualSubjectStaticData_Internal(const struct FLiveLinkBaseStaticData& InStruct);
		bool UpdateVirtualSubjectFrameData_Internal(const struct FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime);
		void OnUpdate();
		void OnInitialize();
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkComponent
	 * Size -> 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
	 */
	class ULiveLinkComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnLiveLinkUpdated;                                       // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PPOM[0x10];                                  // 0x00C0(0x0010) MISSED OFFSET (PADDING)

	public:
		void GetSubjectDataAtWorldTime(const class FName& SubjectName, float WorldTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
		void GetSubjectDataAtSceneTime(const class FName& SubjectName, const struct FTimecode& SceneTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
		void GetSubjectData(const class FName& SubjectName, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
		void GetAvailableSubjectNames(TArray<class FName>* SubjectNames);
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkDrivenComponent
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	class ULiveLinkDrivenComponent : public UActorComponent
	{
	public:
		struct FLiveLinkSubjectName                                SubjectName;                                             // 0x00B0(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ActorTransformBone;                                      // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bModifyActorTransform;                                   // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetRelativeLocation;                                    // 0x00C1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NE0Z[0x6];                                   // 0x00C2(0x0006) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_ZGK7[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (PADDING)

	public:
		void GetAvailableProviders(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float Duration, TArray<struct FProviderPollResult>* AvailableProviders);
		class ULiveLinkMessageBusFinder* STATIC_ConstructMessageBusFinder();
		void STATIC_ConnectToProvider(struct FProviderPollResult* Provider, struct FLiveLinkSourceHandle* SourceHandle);
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkMessageBusSourceFactory
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkMessageBusSourceSettings
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkPreset
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class ULiveLinkPreset : public UObject
	{
	public:
		TArray<struct FLiveLinkSourcePreset>                       Sources;                                                 // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
		TArray<struct FLiveLinkSubjectPreset>                      Subjects;                                                // 0x0038(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WLN5[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		void BuildFromClient();
		void ApplyToClientLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
		bool ApplyToClient();
		bool AddToClient(bool bRecreatePresets);
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkSettings
	 * Size -> 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
	 */
	class ULiveLinkSettings : public UObject
	{
	public:
		TArray<struct FLiveLinkRoleProjectSetting>                 DefaultRoleSettings;                                     // 0x0028(0x0010) Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		class UClass*                                              FrameInterpolationProcessor;                             // 0x0038(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DefaultLiveLinkPreset[0x28];                             // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FDirectoryPath                                      PresetSaveDir;                                           // 0x0068(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClockOffsetCorrectionStep;                               // 0x0078(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELiveLinkSourceMode                                        DefaultMessageBusSourceMode;                             // 0x007C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NLGI[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MessageBusPingRequestFrequency;                          // 0x0080(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     MessageBusHeartbeatFrequency;                            // 0x0088(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     MessageBusHeartbeatTimeout;                              // 0x0090(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     MessageBusTimeBeforeRemovingInactiveSource;              // 0x0098(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     TimeWithoutFrameToBeConsiderAsInvalid;                   // 0x00A0(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ValidColor;                                              // 0x00A8(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        InvalidColor;                                            // 0x00B8(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TextSizeSource;                                          // 0x00C8(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TextSizeSubject;                                         // 0x00C9(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EB25[0x6];                                   // 0x00CA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkTimecodeProvider
	 * Size -> 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
	 */
	class ULiveLinkTimecodeProvider : public UTimecodeProvider
	{
	public:
		struct FLiveLinkSubjectKey                                 SubjectKey;                                              // 0x0030(0x0018) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ELiveLinkTimecodeProviderEvaluationType                    Evaluation;                                              // 0x0048(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6FBR[0x3];                                   // 0x0049(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bOverrideFrameRate;                                      // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V29C[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFrameRate                                          OverrideFrameRate;                                       // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    BufferSize;                                              // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8BNI[0x64];                                  // 0x005C(0x0064) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkTimeSynchronizationSource
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
	{
	public:
		struct FLiveLinkSubjectName                                SubjectName;                                             // 0x0030(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W846[0x48];                                  // 0x0038(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkVirtualSubjectSourceSettings
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings
	{
	public:
		class FName                                                SourceName;                                              // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
