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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum FaceFX.EFaceFXTargetPlatform
	 */
	enum class EFaceFXTargetPlatform : uint8_t
	{
		PC      = 0,
		PS4     = 1,
		XBoxOne = 2,
		GGP     = 3,
		MAX     = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct FaceFX.FaceFXIdData
	 * Size -> 0x0010
	 */
	struct FFaceFXIdData
	{
	public:
		uint64_t                                                   ID;                                                      // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FaceFX.FaceFXActorData
	 * Size -> 0x0030
	 */
	struct FFaceFXActorData
	{
	public:
		TArray<unsigned char>                                      ActorRawData;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      BonesRawData;                                            // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FFaceFXIdData>                               Ids;                                                     // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FaceFX.FaceFXAnimData
	 * Size -> 0x0010
	 */
	struct FFaceFXAnimData
	{
	public:
		TArray<unsigned char>                                      RawData;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FaceFX.FaceFXAnimId
	 * Size -> 0x0010
	 */
	struct FFaceFXAnimId
	{
	public:
		class FName                                                Group;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FaceFX.FaceFXAudioAsset
	 * Size -> 0x0018
	 */
	struct FFaceFXAudioAsset
	{
	public:
		unsigned char                                              UnknownData_EEAF[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   WwiseID;                                                 // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MC0C[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FaceFX.FaceFXSkelMeshComponentId
	 * Size -> 0x0010
	 */
	struct FFaceFXSkelMeshComponentId
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E372[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FaceFX.GbxFaceFXAnimData
	 * Size -> 0x0038
	 */
	struct FGbxFaceFXAnimData
	{
	public:
		struct FFaceFXAnimId                                       FaceFXAnimId;                                            // 0x0000(0x0010) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FFaceFXAudioAsset                                   Audio;                                                   // 0x0010(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		TArray<struct FFaceFXAnimData>                             AnimationRawData;                                        // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FaceFX.GbxFaceFXAnimSetData
	 * Size -> 0x0010
	 */
	struct FGbxFaceFXAnimSetData
	{
	public:
		TArray<struct FGbxFaceFXAnimData>                          FaceFXAnimDataList;                                      // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FaceFX.FaceFXEntry
	 * Size -> 0x0048
	 */
	struct FFaceFXEntry
	{
	public:
		class USkeletalMeshComponent*                              SkelMeshComp;                                            // 0x0000(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFaceFXAudioComponent*                               AudioComp;                                               // 0x0008(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Asset[0x28];                                             // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FaceFX.FaceFXEntry.Asset
		class UFaceFXCharacter*                                    Character;                                               // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsAutoPlaySound : 1;                                    // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsDisableMorphTargets : 1;                              // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHasBonesFromMultipleSkeletons : 1;                      // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KAG4[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FaceFX.FaceFXTrackKey
	 * Size -> 0x0058
	 */
	struct FFaceFXTrackKey
	{
	public:
		struct FFaceFXSkelMeshComponentId                          SkelMeshComponentId;                                     // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FFaceFXAnimId                                       AnimationId;                                             // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              Animation[0x28];                                         // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FaceFX.FaceFXTrackKey.Animation
		float                                                      Time;                                                    // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLoop : 1;                                               // 0x004C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsAnimationDurationLoaded : 1;                          // 0x004C(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KLPU[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimationDuration;                                       // 0x0050(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9XHB[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FaceFX.FaceFXLocalizationData
	 * Size -> 0x0020
	 */
	struct FFaceFXLocalizationData
	{
	public:
		class FString                                              GroupName;                                               // 0x0000(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExportLanguage;                                          // 0x0010(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FaceFX.FaceFXDLCPathSettings
	 * Size -> 0x0050
	 */
	struct FFaceFXDLCPathSettings
	{
	public:
		class FString                                              PatchContentPath;                                        // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PluginContentPath;                                       // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProductionFolderExtension;                               // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              WwiseFolderExtension;                                    // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      AdditionalWwiseFolderExtensions;                         // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FaceFX.AnimNode_BlendFaceFXAnimation
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	struct FAnimNode_BlendFaceFXAnimation : public FAnimNode_Base
	{
	public:
		struct FComponentSpacePoseLink                             ComponentPose;                                           // 0x0030(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneModificationMode                                      TranslationMode;                                         // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneModificationMode                                      RotationMode;                                            // 0x004D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneModificationMode                                      ScaleMode;                                               // 0x004E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5YXD[0x29];                                  // 0x004F(0x0029) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        BoneNamesToExclude;                                      // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FaceFX.FaceFXAnimComponentSet
	 * Size -> 0x0048
	 */
	struct FFaceFXAnimComponentSet
	{
	public:
		struct FFaceFXSkelMeshComponentId                          SkelMeshComponentId;                                     // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FFaceFXAnimId                                       AnimationId;                                             // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              Animation[0x28];                                         // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FaceFX.FaceFXAnimComponentSet.Animation
	};

	/**
	 * ScriptStruct FaceFX.FaceFXAnimationSectionData
	 * Size -> 0x0078
	 */
	struct FFaceFXAnimationSectionData
	{
	public:
		struct FGuid                                               TrackId;                                                 // 0x0000(0x0010) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RowIndex;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R2JS[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFaceFXAnimId                                       AnimationId;                                             // 0x0018(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              Animation[0x28];                                         // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FaceFX.FaceFXAnimationSectionData.Animation
		struct FFaceFXSkelMeshComponentId                          ComponentId;                                             // 0x0050(0x0010) NoDestructor, NativeAccessSpecifierPublic
		float                                                      AnimDuration;                                            // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartOffset;                                             // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndOffset;                                               // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        StartTime;                                               // 0x006C(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        EndTime;                                                 // 0x0070(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCachedAnimDuration;                                     // 0x0074(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SLI8[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FaceFX.FaceFXAnimationSectionTemplate
	 * Size -> 0x0078 (FullSize[0x0098] - InheritedSize[0x0020])
	 */
	struct FFaceFXAnimationSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FFaceFXAnimationSectionData                         SectionData;                                             // 0x0020(0x0078) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct FaceFX.FaceFXAnimSetData
	 * Size -> 0x0010
	 */
	struct FFaceFXAnimSetData
	{
	public:
		TArray<struct FFaceFXAnimData>                             Animations;                                              // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
