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
	 * Class ControlRig.ControlRig
	 * Size -> 0x0338 (FullSize[0x0360] - InheritedSize[0x0028])
	 */
	class UControlRig : public UObject
	{
	public:
		unsigned char                                              UnknownData_N13I[0x4C];                                  // 0x0028(0x004C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ERigExecutionType                                          ExecutionType;                                           // 0x0074(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I6MG[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URigVM*                                              VM;                                                      // 0x0078(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FRigHierarchyContainer                              Hierarchy;                                               // 0x0080(0x01B0) Edit, DisableEditOnInstance, EditConst, NativeAccessSpecifierPrivate
		unsigned char                                              GizmoLibrary[0x28];                                      // 0x0230(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UnknownData_JP9D[0x10];                                  // 0x0258(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, struct FCachedPropertyPath>              InputProperties;                                         // 0x0268(0x0050) Deprecated, NativeAccessSpecifierPrivate
		TMap<class FName, struct FCachedPropertyPath>              OutputProperties;                                        // 0x02B8(0x0050) Deprecated, NativeAccessSpecifierPrivate
		struct FControlRigDrawContainer                            DrawContainer;                                           // 0x0308(0x0010) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FEHP[0x8];                                   // 0x0318(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimationDataSourceRegistry*                        DataSourceRegistry;                                      // 0x0320(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1ZAZ[0x38];                                  // 0x0328(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.AdditiveControlRig
	 * Size -> 0x0010 (FullSize[0x0370] - InheritedSize[0x0360])
	 */
	class UAdditiveControlRig : public UControlRig
	{
	public:
		unsigned char                                              UnknownData_WWAF[0x10];                                  // 0x0360(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigBindingTrack
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UControlRigBindingTrack : public UMovieSceneSpawnTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigBlueprintGeneratedClass
	 * Size -> 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
	 */
	class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigComponent
	 * Size -> 0x0048 (FullSize[0x00F8] - InheritedSize[0x00B0])
	 */
	class UControlRigComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnPreInitializeDelegate;                                 // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPostInitializeDelegate;                                // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPreEvaluateDelegate;                                   // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPostEvaluateDelegate;                                  // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UControlRig*                                         ControlRig;                                              // 0x00F0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnPreInitialize();
		void OnPreEvaluate();
		void OnPostInitialize();
		void OnPostEvaluate();
		class UControlRig* BP_GetControlRig();
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigGizmoLibrary
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UControlRigGizmoLibrary : public UObject
	{
	public:
		unsigned char                                              UnknownData_2NKH[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigGizmoDefinition                          DefaultGizmo;                                            // 0x0030(0x0060) Edit, NativeAccessSpecifierPublic
		unsigned char                                              DefaultMaterial[0x28];                                   // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                MaterialColorParameter;                                  // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FControlRigGizmoDefinition>                  Gizmos;                                                  // 0x00C0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IOS5[0x10];                                  // 0x00D0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigLayerInstance
	 * Size -> 0x0008 (FullSize[0x0270] - InheritedSize[0x0268])
	 */
	class UControlRigLayerInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_PWC4[0x8];                                   // 0x0268(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigObjectHolder
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UControlRigObjectHolder : public UObject
	{
	public:
		TArray<class UObject*>                                     Objects;                                                 // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigSequence
	 * Size -> 0x0058 (FullSize[0x04F0] - InheritedSize[0x0498])
	 */
	class UControlRigSequence : public ULevelSequence
	{
	public:
		unsigned char                                              LastExportedToAnimationSequence[0x28];                   // 0x0498(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LastExportedUsingSkeletalMesh[0x28];                     // 0x04C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      LastExportedFrameRate;                                   // 0x04E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QHE7[0x4];                                   // 0x04EC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigSequencerAnimInstance
	 * Size -> 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
	 */
	class UControlRigSequencerAnimInstance : public UAnimSequencerInstance
	{
	public:
		unsigned char                                              UnknownData_Z8VO[0x10];                                  // 0x0270(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigSettings
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UControlRigSettings : public UDeveloperSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigManipulatable
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UControlRigManipulatable : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.MovieSceneControlRigParameterSection
	 * Size -> 0x0138 (FullSize[0x0278] - InheritedSize[0x0140])
	 */
	class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
	{
	public:
		class UControlRig*                                         ControlRig;                                              // 0x0140(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<bool>                                               ControlsMask;                                            // 0x0148(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneTransformMask                            TransformMask;                                           // 0x0158(0x0004) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAdditive;                                               // 0x015C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyBoneFilter;                                        // 0x015D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8XAZ[0x2];                                   // 0x015E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputBlendPose                                     BoneFilter;                                              // 0x0160(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             Weight;                                                  // 0x0170(0x00A0) NativeAccessSpecifierPublic
		TMap<class FName, struct FChannelMapInfo>                  ControlChannelMap;                                       // 0x0210(0x0050) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZBZ[0x18];                                  // 0x0260(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.MovieSceneControlRigParameterTrack
	 * Size -> 0x0028 (FullSize[0x0080] - InheritedSize[0x0058])
	 */
	class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
	{
	public:
		class UControlRig*                                         ControlRig;                                              // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMovieSceneSection*                                  SectionToKey;                                            // 0x0060(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0068(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                TrackName;                                               // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.MovieSceneControlRigSection
	 * Size -> 0x00B8 (FullSize[0x0210] - InheritedSize[0x0158])
	 */
	class UMovieSceneControlRigSection : public UMovieSceneSubSection
	{
	public:
		bool                                                       bAdditive;                                               // 0x0158(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyBoneFilter;                                        // 0x0159(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NQ04[0x6];                                   // 0x015A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputBlendPose                                     BoneFilter;                                              // 0x0160(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             Weight;                                                  // 0x0170(0x00A0) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.MovieSceneControlRigTrack
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UMovieSceneControlRigTrack : public UMovieSceneSubTrack
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
