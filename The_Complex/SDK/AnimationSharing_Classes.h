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
	 * Class AnimationSharing.AnimSharingStateInstance
	 * Size -> 0x0028 (FullSize[0x0370] - InheritedSize[0x0348])
	 */
	class UAnimSharingStateInstance : public UAnimInstance
	{
	public:
		class UAnimSequence*                                       AnimationToPlay;                                         // 0x0348(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PermutationTimeOffset;                                   // 0x0350(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PlayRate;                                                // 0x0354(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bStateBool;                                              // 0x0358(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NEF6[0x7];                                   // 0x0359(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSharingInstance*                                Instance;                                                // 0x0360(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KKH8[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (PADDING)

	public:
		void GetInstancedActors(TArray<class AActor*>* Actors);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationSharing.AnimSharingTransitionInstance
	 * Size -> 0x0018 (FullSize[0x0360] - InheritedSize[0x0348])
	 */
	class UAnimSharingTransitionInstance : public UAnimInstance
	{
	public:
		TWeakObjectPtr<class USkeletalMeshComponent>               FromComponent;                                           // 0x0348(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class USkeletalMeshComponent>               ToComponent;                                             // 0x0350(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BlendTime;                                               // 0x0358(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bBlendBool;                                              // 0x035C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_16CA[0x3];                                   // 0x035D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationSharing.AnimSharingAdditiveInstance
	 * Size -> 0x0018 (FullSize[0x0360] - InheritedSize[0x0348])
	 */
	class UAnimSharingAdditiveInstance : public UAnimInstance
	{
	public:
		TWeakObjectPtr<class USkeletalMeshComponent>               BaseComponent;                                           // 0x0348(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UAnimSequence>                        AdditiveAnimation;                                       // 0x0350(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Alpha;                                                   // 0x0358(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bStateBool;                                              // 0x035C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HX55[0x3];                                   // 0x035D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationSharing.AnimSharingInstance
	 * Size -> 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
	 */
	class UAnimSharingInstance : public UObject
	{
	public:
		TArray<class AActor*>                                      RegisteredActors;                                        // 0x0028(0x0010) Edit, ZeroConstructor, Transient, EditConst, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M48L[0x50];                                  // 0x0038(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimationSharingStateProcessor*                     StateProcessor;                                          // 0x0088(0x0008) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LU2G[0x38];                                  // 0x0090(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimSequence*>                               UsedAnimationSequences;                                  // 0x00C8(0x0010) Edit, ZeroConstructor, Transient, EditConst, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ATP[0x10];                                  // 0x00D8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnum*                                               StateEnum;                                               // 0x00E8(0x0008) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              SharingActor;                                            // 0x00F0(0x0008) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LYI7[0x28];                                  // 0x00F8(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationSharing.AnimationSharingManager
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UAnimationSharingManager : public UObject
	{
	public:
		TArray<class USkeleton*>                                   Skeletons;                                               // 0x0028(0x0010) ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UAnimSharingInstance*>                        PerSkeletonData;                                         // 0x0038(0x0010) Edit, ZeroConstructor, Transient, EditConst, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S3CH[0x40];                                  // 0x0048(0x0040) MISSED OFFSET (PADDING)

	public:
		void RegisterActorWithSkeletonBP(class AActor* InActor, class USkeleton* SharingSkeleton);
		class UAnimationSharingManager* STATIC_GetAnimationSharingManager(class UObject* WorldContextObject);
		bool STATIC_CreateAnimationSharingManager(class UObject* WorldContextObject, class UAnimationSharingSetup* Setup);
		bool STATIC_AnimationSharingEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationSharing.AnimationSharingSetup
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UAnimationSharingSetup : public UObject
	{
	public:
		TArray<struct FPerSkeletonAnimationSharingSetup>           SkeletonSetups;                                          // 0x0028(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		struct FAnimationSharingScalability                        ScalabilitySettings;                                     // 0x0038(0x0010) Edit, Config, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationSharing.AnimationSharingStateProcessor
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UAnimationSharingStateProcessor : public UObject
	{
	public:
		unsigned char                                              AnimationStateEnum[0x28];                                // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void ProcessActorState(int32_t* OutState, class AActor* InActor, unsigned char CurrentState, unsigned char OnDemandState, bool* bShouldProcess);
		class UEnum* GetAnimationStateEnum();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
