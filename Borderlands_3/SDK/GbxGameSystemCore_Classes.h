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
	 * Class GbxGameSystemCore.StanceDataProvider
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UStanceDataProvider : public UGbxDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.StanceData
	 * Size -> 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
	 */
	class UStanceData : public UStanceDataProvider
	{
	public:
		struct FStanceFloatValue                                   MaxSpeed;                                                // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FStanceFloatValue                                   MaxRotation;                                             // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FStanceFloatValue                                   MaxAllowedAimOffset;                                     // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseMaxAllowedAimOffset;                                 // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YU2L[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStanceFloatValue                                   AimRotationRate;                                         // 0x004C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseAimRotationRate;                                     // 0x0054(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZL0[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStanceFloatValue                                   MaxIdleRotation;                                         // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseMaxIdleRotation;                                     // 0x0060(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A6W8[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStanceData*                                         StanceDataToShowAnimSystem;                              // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideSlowdownSpeed;                                  // 0x0070(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J7OA[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStanceFloatValue                                   SlowdownSpeed;                                           // 0x0074(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverrideMaxAcceleration;                                // 0x007C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TY1G[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxAcceleration;                                         // 0x0080(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockDodging;                                            // 0x0084(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLockTurns;                                              // 0x0085(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLockFootIK;                                             // 0x0086(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLockHandIK;                                             // 0x0087(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bThisStanceAllowsFidgetAnims;                            // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0HXW[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WaitTimeBeforeFirstFidgetAnim;                           // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPhysicalAnimationProfileAsset*                      PhysicalAnimation;                                       // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              HitReactionLayer;                                        // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHitReactionData*                                    HitReactionData;                                         // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAnimTable
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UGbxAnimTable : public UGbxDataAsset
	{
	public:
		struct FGbxTriggerProperty                                 TriggerAutofill;                                         // 0x0030(0x0001) Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AGON[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          DataTable;                                               // 0x0038(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bScaleRateByMeshScale;                                   // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A7ZU[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		void Autofill();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAction
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UGbxAction : public UObject
	{
	public:
		unsigned char                                              UnknownData_8QTO[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bCanUseCDO;                                              // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_39WG[0x17];                                  // 0x0031(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ActionSlotName;                                          // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxActionPriority                                         ActionPriority;                                          // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8017[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScriptStruct*                                       InstanceDataType;                                        // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void OnServerBegin(class AActor* Actor);
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void OnBegin(class AActor* Actor);
		bool K2_GetVectorRegisterValue(const class FName& InName, struct FVector* OutVector);
		float K2_GetTimeRemaining();
		bool K2_GetObjectRegisterValue(const class FName& InName, class UObject** OutObject);
		bool K2_GetNameRegisterValue(const class FName& InName, class FName* OutName);
		float K2_GetMaxCurrentTime();
		bool K2_GetIntRegisterValue(const class FName& InName, int32_t* OutInt);
		bool K2_GetFloatRegisterValue(const class FName& InName, float* OutFloat);
		float K2_GetCurrentTime();
		float K2_GetCurrentNormalizedTime();
		class AActor* K2_GetActor();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAction_SimpleAnim
	 * Size -> 0x0058 (FullSize[0x00B8] - InheritedSize[0x0060])
	 */
	class UGbxAction_SimpleAnim : public UGbxAction
	{
	public:
		unsigned char                                              UnknownData_TCV4[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bStopAI;                                                 // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAbortAI;                                                // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopMovement;                                           // 0x006A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableHitReactions;                                    // 0x006B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePhysNoneWithRootMotion;                              // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopLook;                                               // 0x006D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopAimRotation;                                        // 0x006E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopHeadLook;                                           // 0x006F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockHeadLook;                                           // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableAvoidance;                                       // 0x0071(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTickAndRefreshBones;                                    // 0x0072(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableCollision;                                       // 0x0073(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R0DB[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ECollisionChannel>                                  DisableCollisionChannels;                                // 0x0078(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bEnableLoopHelper;                                       // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanInterruptSameSlotAnims;                              // 0x0089(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetDynamicsOnBegin;                                   // 0x008A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUsePhysicalAnimationProfile;                            // 0x008B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1249[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalAnimationProfileAsset*                      PhysicalAnimationProfile;                                // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRestorePreviousPhysicalAnimationProfileOnEnd;           // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseNewBoneSetFilter;                                    // 0x0099(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DN1G[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxBoneSet*                                         NewBoneSetFilter;                                        // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRestorePreviousBoneSetFilterProfileOnEnd;               // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bResetBoneSetFilter;                                     // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JPSU[0x2];                                   // 0x00AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DefaultInterruptBlendOutTime;                            // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bReleaseResourceFlagsOnAnimEnd;                          // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEndActionOnBlendOut;                                    // 0x00B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2M8P[0x6];                                   // 0x00B2(0x0006) MISSED OFFSET (PADDING)

	public:
		void OnAnimEnd(class AActor* Actor);
		void K2_SetTickAndRefreshBones(bool bLockResource);
		void K2_SetPhysNoneWithRootMotion(bool bEnable);
		void K2_SetMovement(bool bDisable);
		void K2_SetLook(bool bDisable);
		void K2_SetHitReactions(bool bDisable);
		void K2_SetHeadLookLocked(bool bLock);
		void K2_SetHeadLook(bool bDisable);
		void K2_SetCollision(bool bEnable);
		void K2_SetAvoidance(bool bDisable);
		void K2_SetAIThinking(bool bDisable);
		void K2_SetAimRotation(bool bDisable);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAISystemBase
	 * Size -> 0x0008 (FullSize[0x0130] - InheritedSize[0x0128])
	 */
	class UGbxAISystemBase : public UAISystem
	{
	public:
		class UGbxQueryManager*                                    GbxQueryManager;                                         // 0x0128(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.PreviewComponent
	 * Size -> 0x00F8 (FullSize[0x07E8] - InheritedSize[0x06F0])
	 */
	class UPreviewComponent : public UPrimitiveComponent
	{
	public:
		bool                                                       bSpawnInPIE;                                             // 0x06F0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreviewEnabled;                                         // 0x06F1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y4NP[0x6];                                   // 0x06F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PreviewActor;                                            // 0x06F8(0x0008) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPreviewState                                       PreviewState;                                            // 0x0700(0x00D8) Transient, DuplicateTransient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		bool                                                       bEnabled;                                                // 0x07D8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OCVU[0x3];                                   // 0x07D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class USkinnedMeshComponent>                SkinnedMeshComponent;                                    // 0x07DC(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5TPS[0x4];                                   // 0x07E4(0x0004) Fix size for supers

	public:
		void OnBlueprintCompiled(class UBlueprint* BP);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAction_Anim
	 * Size -> 0x00F0 (FullSize[0x01A8] - InheritedSize[0x00B8])
	 */
	class UGbxAction_Anim : public UGbxAction_SimpleAnim
	{
	public:
		struct FAnimMeshList                                       DefaultAnims;                                            // 0x00B8(0x0078) Edit, NativeAccessSpecifierPublic
		EGbxActionEndCondition                                     DefaultEndCondition;                                     // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CED5[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AnimationSlot;                                           // 0x0138(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendInTime;                                             // 0x0140(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPushBlendInTime;                                        // 0x0144(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EBVH[0x3];                                   // 0x0145(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DefaultBlendOutTime;                                     // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPushBlendOutTime;                                       // 0x014C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2AFY[0x3];                                   // 0x014D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayRate;                                                // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScalePlayrateWithCharacterScale;                        // 0x0154(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5DUM[0x3];                                   // 0x0155(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SourceCameraAlpha;                                       // 0x0158(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MontageCameraAlpha;                                      // 0x015C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableFootIk;                                          // 0x0160(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBody1stControlsDuration;                                // 0x0161(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlay1stPersonAnimationsOnRemotePlayers;                 // 0x0162(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RVRX[0x5];                                   // 0x0163(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AnimSlot3rd;                                             // 0x0168(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AnimSlot1st;                                             // 0x0170(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasAnimSlot3rdValue;                                    // 0x0178(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasAnimSlot1stValue;                                    // 0x0179(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGodMode;                                                // 0x017A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDemigodMode;                                            // 0x017B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlockCrouching;                                         // 0x017C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlockMantling;                                          // 0x017D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableScaledRootMotion;                                 // 0x017E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainRootVelocity;                                   // 0x017F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideDuration;                                       // 0x0180(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SCF1[0x3];                                   // 0x0181(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverrideDuration;                                        // 0x0184(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideCount;                                          // 0x0188(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H5QB[0x3];                                   // 0x0189(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OverrideCount;                                           // 0x018C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverridePlayRate;                                       // 0x0190(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2UXM[0x3];                                   // 0x0191(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverridePlayRate;                                        // 0x0194(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BlendSpaceXRegisterName;                                 // 0x0198(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BlendSpaceYRegisterName;                                 // 0x01A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void K2_SetMantlingBlocked(bool bBlocked);
		void K2_SetGodMode(bool bEnable);
		void K2_SetFootIK(bool bDisable);
		void K2_SetDemigodMode(bool bEnable);
		void K2_SetCrouchBlocked(bool bBlocked);
		void K2_Resume();
		void K2_RepProceedToNextSection();
		void K2_RepJumpToNextSection();
		void K2_ProceedToNextSection();
		void K2_Pause();
		void K2_JumpToNextSection();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.TeamComponent
	 * Size -> 0x0040 (FullSize[0x01B8] - InheritedSize[0x0178])
	 */
	class UTeamComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_TYD2[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTeam*                                               Team;                                                    // 0x0180(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTeam*                                               TeamDefault;                                             // 0x0188(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CPT3[0x18];                                  // 0x0190(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSetTeamCollision;                                       // 0x01A8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIgnoreCollisionWithTeam;                                // 0x01A9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInheritSourceTeamFromInstigator;                        // 0x01AA(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SBZL[0x5];                                   // 0x01AB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTeamComponent*                                      SourceTeamComponent;                                     // 0x01B0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetTeamToDefault();
		void SetTeamCollision(bool bOn);
		void SetTeam(class UTeam* NewTeam);
		void SetSourceTeamComponent(class UTeamComponent* NewSourceTeamComponent);
		void SetCollidesWithTeam(bool bCollidesWithTeam);
		void OnRep_Team(class UTeam* OldTeam);
		void OnRep_bIgnoreCollisionWithTeam();
		bool IsNeutral(class AActor* Actor);
		bool IsHostile(class AActor* Actor);
		bool IsFriendly(class AActor* Actor);
		void InitializeTeam(class UTeam* NewTeam);
		ETeamCollisionChannel GetTeamCollisionChannel();
		ETeamAttitude GetTeamAttitudeTowardsTeam(class UTeam* OtherTeam);
		ETeamAttitude GetTeamAttitudeTowardsActor(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCharacter
	 * Size -> 0x04D0 (FullSize[0x0D80] - InheritedSize[0x08B0])
	 */
	class AGbxCharacter : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_V1N1[0x50];                                  // 0x08B0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCharacterMovementComponent*                      GbxCharacterMovement;                                    // 0x0900(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTargetableComponent*                                TargetableComponent;                                     // 0x0908(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDamageComponent*                                    DamageComponent;                                         // 0x0910(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDamageCauserComponent*                              DamageCauserComponent;                                   // 0x0918(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxActionComponent*                                 GbxAction;                                               // 0x0920(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameplayTagContainerComponent*                      GameplayTagContainerComponent;                           // 0x0928(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDynamicPhysicalAnimationComponent*                  DynamicPhysicalAnimationComponent;                       // 0x0930(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTargetingComponent*                                 TargetingComponent;                                      // 0x0938(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxPerceptionComponent*                             PerceptionComponent;                                     // 0x0940(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFirstPersonComponent*                               FirstPersonComponent;                                    // 0x0948(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2VPK[0x10];                                  // 0x0950(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULandingData*                                        LandingData;                                             // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImpactData*                                         JumpedImpact;                                            // 0x0968(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPlayJumpAndLandImpactsOnAllFeet;                        // 0x0970(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HBIF[0x7];                                   // 0x0971(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImpactData*                                         FootstepImpact;                                          // 0x0978(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImpactData*                                         GenericHandImpact;                                       // 0x0980(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImpactData*                                         LadderHandImpact;                                        // 0x0988(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class FName>                                        FootstepSockets;                                         // 0x0990(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class FName>                                        HandAccessoryTags;                                       // 0x09A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             LandingDataTriggeredDelegate;                            // 0x09B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class AGbxPlayerController*                                OwnerPlayerController;                                   // 0x09C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AAIController*                                       OwnerAIController;                                       // 0x09C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AGbxCharacter*                                       PlayerMaster;                                            // 0x09D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class AGbxCharacter*>                               Pets;                                                    // 0x09D8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		struct FMassSelection                                      CharacterMass;                                           // 0x09E8(0x0018) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FSpawnCostSelection                                 SpawnCostSelection;                                      // 0x0A00(0x0018) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		class UGbxSkeletalMeshComponent*                           GbxMesh;                                                 // 0x0A18(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOrientEyeHeight;                                        // 0x0A20(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WKRF[0x7];                                   // 0x0A21(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ViewSocket;                                              // 0x0A28(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     ViewSocketComponent;                                     // 0x0A30(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LFMV[0xB0];                                  // 0x0A38(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FReplicatedPawnAttachState                          ReplicatedPawnAttachState;                               // 0x0AE8(0x0010) Net, Transient, RepNotify, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FReplicatedPawnAttachState                          PawnAttachState;                                         // 0x0AF8(0x0010) Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8IAJ[0xA8];                                  // 0x0B08(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseAimHeight;                                           // 0x0BB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCustomBaseAimHeight;                                 // 0x0BB4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WX85[0x3];                                   // 0x0BB5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AimHeightFromGround;                                     // 0x0BB8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CrouchedAimHeight;                                       // 0x0BBC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCustomCrouchedAimHeight;                             // 0x0BC0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DT1I[0x3];                                   // 0x0BC1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AimEyeHeightPct;                                         // 0x0BC4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AimSocket;                                               // 0x0BC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     AimSocketComponent;                                      // 0x0BD0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EQDX[0x8];                                   // 0x0BD8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFacingController                                   FacingController;                                        // 0x0BE0(0x0110) Net, Transient, NativeAccessSpecifierPublic
		unsigned char                                              ClientTurnDelta;                                         // 0x0CF0(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LLWP[0x7];                                   // 0x0CF1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              InputComponentClass;                                     // 0x0CF8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFoleyAccessoryComponent*                            GestaltFoleyAccessory;                                   // 0x0D00(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFoleyMainComponent*                                 CachedFoleyMainComponent;                                // 0x0D08(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameplayTasksComponent*                             GameplayTasksComponent;                                  // 0x0D10(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ULevelSequencePlayer*                                LevelSequencePlayerController;                           // 0x0D18(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSavedCollision                                     LevelSequenceCollisionState;                             // 0x0D20(0x0020) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UGbxBoneSet*                                         AnimGraphBoneSetFilter;                                  // 0x0D40(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FAnimGraphBoneSet>                           ActiveAnimGraphBoneSetFilterList;                        // 0x0D48(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class UGbxBoneSet*                                         SmartObjectBoneSetFilter;                                // 0x0D58(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxBoneSet*                                         DefaultBoneSetFilter;                                    // 0x0D60(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxBoneSet*                                         ActionBoneSetFilter;                                     // 0x0D68(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPauseAIWhileFalling;                                    // 0x0D70(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D00Y[0xF];                                   // 0x0D71(0x000F) MISSED OFFSET (PADDING)

	public:
		void SetTeam(class UTeam* Team);
		void SetPlayerMaster(class AGbxCharacter* NewPlayerMaster);
		void SetCharacterUIName(class UGbxUIName* NewCharacterUIName);
		void SetCharacterNameFromString(const class FString& NewCharacterName);
		void SetCharacterName(const class FText& NewCharacterName);
		void RotateCharacterTo(const struct FRotator& TargetRotation, float Duration, EEasingFunc Easing);
		void ReceiveOwnerPlayerControllerChanged(class AGbxPlayerController* NewPlayerControllerOwner);
		void OnRep_ReplicatedPawnAttachState();
		void OnLandingDataTriggered(const struct FLandingInfo& LandingInfo, int32_t Index);
		void NetMulticast_TriggerHitReactionSound(class UCharacterSoundTag* Tag);
		void NetMulticast_PlayLanded(const struct FHitResult& Hit, float ImpactSpeed, bool bLandFromJump, class ULandingData* LandingDataOverride);
		void NetMulticast_PlayJumped();
		bool IsZoomed();
		class UTeamComponent* GetTeamComponent();
		class UTeam* GetTeam();
		class UTargetingComponent* GetTargetingComponent();
		class UTargetableComponent* GetTargetableComponent();
		class UGbxPerceptionComponent* GetPerceptionComponent();
		EPawnAttachStatus GetPawnAttachStatus();
		class UPawnAttachSlotComponent* GetPawnAttachComponent();
		class AActor* GetPawnAttachActor();
		struct FVector GetLookAtLocation(float* OutWeight);
		float GetLookAt(struct FVector* HeadLocation, struct FVector* EyeLocation, float* HeadWeight);
		class USkeletalMeshComponent* GetFirstPersonMesh();
		class UFirstPersonComponent* GetFirstPersonComponent();
		class UBlackboardComponent* GetBlackboardComponent();
		class UBlackboardData* GetBlackboardAsset();
		void GetAvailableSocketNames(TArray<class FName>* Array);
		struct FVector GetAimVectorStartLocation();
		struct FRotator GetAimOffset();
		class UFirstPersonComponent* FindFirstPersonComponent();
		void DetachCharacter(EDetachmentRule LocationRule);
		void ClientRotateCharacterTo(const struct FRotator& TargetRotation, float Duration, EEasingFunc Easing);
		void CauseEveryoneToForgetMe();
		void AttachCharacterToComponent(class USceneComponent* Parent, const class FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
		void AttachCharacterToActor(class AActor* ParentActor, const class FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.BalanceStateComponent
	 * Size -> 0x0060 (FullSize[0x01D8] - InheritedSize[0x0178])
	 */
	class UBalanceStateComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_S8FF[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 BalanceTableRowHandle;                                   // 0x0180(0x0010) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FDataTableRowHandle                                 InheritedBalanceTableRowHandle;                          // 0x0190(0x0010) Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NK7Z[0x4];                                   // 0x01A0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    GameStage;                                               // 0x01A4(0x0004) Edit, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ExperienceLevel;                                         // 0x01A8(0x0004) Edit, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BC0N[0x4];                                   // 0x01AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLevelChanged;                                          // 0x01B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WBO7[0x10];                                  // 0x01C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAutoRefreshInheritedBalanceWhenSourceChangesLevel;      // 0x01D0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X34B[0x7];                                   // 0x01D1(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetGameStage(int32_t NewGameStage);
		void SetExperienceLevel(int32_t NewExperienceLevel);
		void OnRep_ExperienceLevel(int32_t OldExperienceLevel);
		void OnInheritedBalanceSourceLevelChanged(class UBalanceStateComponent* InheritedBalanceStateSource, int32_t OldExperienceLevel, int32_t NewExperienceLevel);
		int32_t GetGameStage();
		int32_t GetExperienceLevel();
		struct FDataTableRowHandle GetBalanceTableRow();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxChildActorComponent
	 * Size -> 0x0020 (FullSize[0x0320] - InheritedSize[0x0300])
	 */
	class UGbxChildActorComponent : public UChildActorComponent
	{
	public:
		unsigned char                                              bAutoSpawnActor : 1;                                     // 0x0300(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAutoDestroyActor : 1;                                   // 0x0300(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bDestroyExistingChildActorOnSpawn : 1;                   // 0x0300(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bDeferChildActorClassUpdate : 1;                         // 0x0300(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bClearChildActorReferenceToMeWhenChildActorIsDetached : 1; // 0x0300(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OYCT[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnChildActorSpawned;                                     // 0x0308(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IQSA[0x8];                                   // 0x0318(0x0008) MISSED OFFSET (PADDING)

	public:
		void SpawnChildActor();
		void DespawnChildActor();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AnimNotify_PawnAttachSlotTransition
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimNotify_PawnAttachSlotTransition : public UAnimNotify
	{
	public:
		unsigned char                                              bTriggerOnFirstPersonMesh : 1;                           // 0x0038(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDetach : 1;                                             // 0x0038(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAttach : 1;                                             // 0x0038(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QRIM[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AttributeEffectMutatorData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAttributeEffectMutatorData : public UGbxDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAnimInstance
	 * Size -> 0x00F8 (FullSize[0x0538] - InheritedSize[0x0440])
	 */
	class UGbxAnimInstance : public UAnimInstance
	{
	public:
		class UGbxSkeletalMeshComponent*                           GbxSkeletalMeshComponent;                                // 0x0440(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UGbxAnimStateMachineDefinition*>              AnimStateMachineDefinitions;                             // 0x0448(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FRuntimeStateMachineData>                    RuntimeStateMachines;                                    // 0x0458(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TMap<class UGbxAnimTable*, struct FGbxAnimTableMapItem>    AnimTableMap;                                            // 0x0468(0x0050) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CROV[0x28];                                  // 0x04B8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxStateManagerRuntime                             ManagerRuntime;                                          // 0x04E0(0x0050) NativeAccessSpecifierPrivate
		bool                                                       bEarlyBindBoneSetDelegates;                              // 0x0530(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W1YH[0x7];                                   // 0x0531(0x0007) Fix size for supers

	public:
		class UAnimSequence* GetAnimTableSequence(class UGbxAnimTable* AnimTable);
		bool CanUseAnimTable(class UGbxAnimTable* AnimTable);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCustomizationData
	 * Size -> 0x0100 (FullSize[0x0130] - InheritedSize[0x0030])
	 */
	class UGbxCustomizationData : public UGbxDataAsset
	{
	public:
		class FText                                                CustomizationName;                                       // 0x0030(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                CustomizationDescription;                                // 0x0048(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FString                                              IconFrameName;                                           // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FUIStatPriorityData>                         UIStats;                                                 // 0x0070(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FString                                              ItemCardTypeFrameName;                                   // 0x0080(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PreviewImage[0x28];                                      // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxGameSystemCore.GbxCustomizationData.PreviewImage
		struct FAttributeInitializationData                        PurchasePrice;                                           // 0x00B8(0x0038) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class UGbxCustomizationTypeData*                           CustomizationType;                                       // 0x00F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCustomizationAssetEntry>                    CustomizationTargetAssets;                               // 0x00F8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bUnlockedByDefault;                                      // 0x0108(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEquippedByDefault;                                      // 0x0109(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZOWA[0x6];                                   // 0x010A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCustomizationData*                               DefaultSkin;                                             // 0x0110(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxCustomizationData*                               DependentBody;                                           // 0x0118(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VXU6[0x10];                                  // 0x0120(0x0010) MISSED OFFSET (PADDING)

	public:
		bool RemoveCustomizationFromActor(class AActor* TargetActor);
		void OnCustomizationAssetLoaded();
		class UGbxAction* K2_PlayAction(class AActor* TargetActor, const struct FActionState_Base& ActionData);
		bool IsLoading();
		bool IsLoaded(int32_t OptionalCustomizationId);
		void AsyncLoadCustomizationAssets(const class FScriptDelegate& LoadedDelegate);
		bool ApplyCustomizationToActor(class AActor* TargetActor, int32_t OptionalCustomizationId);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ActorPartSelectionData
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UActorPartSelectionData : public UGbxDataAsset
	{
	public:
		class UActorPartSelectionData*                             BaseSelectionData;                                       // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UActorPartSetData*                                   PartSetData;                                             // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               PartSetDataGuid;                                         // 0x0040(0x0010) IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRuntimeActorPartListData                           RuntimePartList;                                         // 0x0050(0x0028) Protected, NativeAccessSpecifierProtected
		struct FGuid                                               RuntimePartListGuid;                                     // 0x0078(0x0010) IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               InheritedRuntimePartListGuid;                            // 0x0088(0x0010) IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AttributeValueResolver
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAttributeValueResolver : public UObject
	{
	public:
		bool SetValueForAttribute(class UGbxAttributeData* Attribute, class UObject* Context, float Value);
		float GetValueForAttribute(class UGbxAttributeData* Attribute, class UObject* Context);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAreaComponent
	 * Size -> 0x0060 (FullSize[0x0750] - InheritedSize[0x06F0])
	 */
	class UGbxAreaComponent : public UPrimitiveComponent
	{
	public:
		TArray<class AVolume*>                                     DetectionVolumes;                                        // 0x06F0(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		bool                                                       bWorldAreaVolume;                                        // 0x0700(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L358[0x3];                                   // 0x0701(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DetectionRadius;                                         // 0x0704(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DetectionHalfHeight;                                     // 0x0708(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWorldAreaRadius;                                        // 0x070C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bManualTest;                                             // 0x070D(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0SBT[0x2];                                   // 0x070E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerEnteredArea;                                     // 0x0710(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerExitedArea;                                      // 0x0720(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EGbxAreaDrawStyle                                          DrawStyle;                                               // 0x0730(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VUMN[0x7];                                   // 0x0731(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<TWeakObjectPtr<class APlayerController>>            PlayersDetected;                                         // 0x0738(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LFST[0x8];                                   // 0x0748(0x0008) MISSED OFFSET (PADDING)

	public:
		void AreaTest();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EffectCollectionData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEffectCollectionData : public UObject
	{
	public:
		class UWwiseEvent* STATIC_StaticGetWwiseEvent(class UClass* Collection, class UObject* ContextObject);
		void STATIC_StaticGetParticleEffectAndWwiseEvent(class UClass* Collection, class UObject* ContextObject, class UParticleSystem** ParticleEffect, class UWwiseEvent** WwiseEvent);
		class UParticleSystem* STATIC_StaticGetParticleEffect(class UClass* Collection, class UObject* ContextObject);
		class UWwiseEvent* GetWwiseEvent(class UObject* ContextObject);
		void GetParticleEffectAndWwiseEvent(class UObject* ContextObject, class UParticleSystem** ParticleEffect, class UWwiseEvent** WwiseEvent);
		class UParticleSystem* GetParticleEffect(class UObject* ContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryGenerator_TargetableActors
	 * Size -> 0x00B0 (FullSize[0x0110] - InheritedSize[0x0060])
	 */
	class UEnvQueryGenerator_TargetableActors : public UEnvQueryGenerator
	{
	public:
		struct FAIDataProviderFloatValue                           DistanceMax;                                             // 0x0060(0x0030) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UGbxCondition*                                       TargetSkipDistanceCheckCondition;                        // 0x0090(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowNonTargetableActors;                               // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowDeadActors;                                        // 0x0099(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowQuerier;                                           // 0x009A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowHostiles;                                          // 0x009B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowFriendlies;                                        // 0x009C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowNeutrals;                                          // 0x009D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GGBP[0x2];                                   // 0x009E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCondition*                                       TargetCondition;                                         // 0x00A0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FActorTagCompositeQuery                             TagQuery;                                                // 0x00A8(0x0010) Edit, NativeAccessSpecifierPublic
		unsigned char                                              AllowedTypes[0x10];                                      // 0x00B8(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxGameSystemCore.EnvQueryGenerator_TargetableActors.AllowedTypes
		unsigned char                                              bUseAllowedTypes : 1;                                    // 0x00C8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8WG9[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DisallowedTypes[0x10];                                   // 0x00D0(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxGameSystemCore.EnvQueryGenerator_TargetableActors.DisallowedTypes
		unsigned char                                              bUseDisallowedTypes : 1;                                 // 0x00E0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_28G7[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      AllowedTypesCache;                                       // 0x00E8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      DisallowedTypesCache;                                    // 0x00F8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YJ0R[0x8];                                   // 0x0108(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.UsableComponent
	 * Size -> 0x0238 (FullSize[0x03B0] - InheritedSize[0x0178])
	 */
	class UUsableComponent : public UActorComponent
	{
	public:
		struct FHoldToUseSettings                                  HoldToUseSettings;                                       // 0x0178(0x0014) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5KH6[0x4];                                   // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUsabilityDataSelection*                             UsabilityData;                                           // 0x0190(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseEnabledCondition;                                    // 0x0198(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BOOJ[0x7];                                   // 0x0199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCondition*                                       EnabledCondition;                                        // 0x01A0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FUseDefSelection                                    PrimaryUseDefSelection;                                  // 0x01A8(0x0020) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FUseDefSelection                                    PrimaryHoldUseDefSelection;                              // 0x01C8(0x0020) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FUseDefSelection                                    SecondaryUseDefSelection;                                // 0x01E8(0x0020) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FUseDefSelection                                    SecondaryHoldUseDefSelection;                            // 0x0208(0x0020) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              bCanBeUsedFromVehicle : 1;                               // 0x0228(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanBeUsedFromMech : 1;                                  // 0x0228(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanOnlyBeUsedByOwner : 1;                               // 0x0228(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDefaultIsBackupPrimaryData : 1;                         // 0x0228(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LIDK[0x3];                                   // 0x0229(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UsablePriority;                                          // 0x022C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWantsMaxUseCount;                                       // 0x0230(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NXSA[0x3];                                   // 0x0231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxUseCount;                                             // 0x0234(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentUseCount;                                         // 0x0238(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GXKD[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        RequiredComponentNames;                                  // 0x0240(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bUseAngleRestriction;                                    // 0x0250(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OQT7[0x3];                                   // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUsableAngleRestriction                             AngleRestriction;                                        // 0x0254(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bRequiresNetAuthority;                                   // 0x025C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8W87[0x3];                                   // 0x025D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                HeaderName;                                              // 0x0260(0x0018) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7JMK[0xA0];                                  // 0x0278(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnUsed;                                                  // 0x0318(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUsedPrimary;                                           // 0x0328(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUsedPrimaryHold;                                       // 0x0338(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUsedSecondary;                                         // 0x0348(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUsedSecondaryHold;                                     // 0x0358(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLookedAt;                                              // 0x0368(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLookedAwayFrom;                                        // 0x0378(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IBHV[0x28];                                  // 0x0388(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetUsableLocked(bool bLocked, const class FName& Reason);
		void SetInteractionHeader(const class FText& NewHeaderName);
		void ResetUseCount();
		class FText K2_GetOptionalErrorText();
		bool K2_CanBeUsed(const struct FUsabilityQuery& Query);
		void GetValidPrimitiveComponentNames(TArray<class FName>* ComponentNames);
		class FText GetInteractionHeader();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxGameplayGlobals
	 * Size -> 0x01E8 (FullSize[0x0218] - InheritedSize[0x0030])
	 */
	class UGbxGameplayGlobals : public UGbxDataAsset
	{
	public:
		class UHealthTypeData*                                     ShieldHealthType;                                        // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEnvQuery*                                           ProjectileReflectionQuery;                               // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectileReflectionSpeedScale;                          // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectileHitRegionRicochetSpeedScale;                   // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        ProjectileReflectionInaccuracy;                          // 0x0048(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UImpactData*                                         ProjectileReflectionImpact;                              // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImpactData*                                         ProjectileSelfReflectionImpact;                          // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUsableTypeDefinition*                               DefaultUseDefinition;                                    // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        InventoryScoreValueInitializer;                          // 0x0098(0x0038) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class UGlobalAIData*                                       GlobalAIData;                                            // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExplosionWindRadiusModifier;                             // 0x00D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinExplosionRadiusToTriggerRadialBlur;                   // 0x00DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDefaultExplosionSettings>                   DefaultExplosionSettings;                                // 0x00E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         ShortDurationTinnitusEvent;                              // 0x00F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         MediumDurationTinnitusEvent;                             // 0x00F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         LongDurationTinnitusEvent;                               // 0x0100(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExplosionSoundStackingMaxDistanceSquared;                // 0x0108(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExplosionSoundStackingPreventionDelay;                   // 0x010C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          DefaultFeedbackTable;                                    // 0x0110(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, class UGameStatData*>            KillStatMap;                                             // 0x0118(0x0050) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<class UGameStatList*>                               GameStatLists;                                           // 0x0168(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<class UChallengeList*>                              GameChallengeLists;                                      // 0x0178(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FMantleGlobalData                                   MantleGlobals;                                           // 0x0188(0x0090) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxGameMode
	 * Size -> 0x0000 (FullSize[0x0548] - InheritedSize[0x0548])
	 */
	class AGbxGameMode : public AGameMode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxGameState
	 * Size -> 0x0058 (FullSize[0x0598] - InheritedSize[0x0540])
	 */
	class AGbxGameState : public AGameState
	{
	public:
		class AChallengeManager*                                   ChallengeManager;                                        // 0x0540(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AGameStatsManager*                                   StatsManager;                                            // 0x0548(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AGbxCustomizationManager*                            CustomizationManager;                                    // 0x0550(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APlayerState*                                        HostPlayerState;                                         // 0x0558(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AImpactDecalManager*                                 ImpactDecalManager;                                      // 0x0560(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               GameInstanceId;                                          // 0x0568(0x0010) Net, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      GameInstanceTime;                                        // 0x0578(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      GameInstanceTimeUpdateRate;                              // 0x057C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              CustomizationManagerClass;                               // 0x0580(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M8KB[0x8];                                   // 0x0588(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bRepPlayersOnly;                                         // 0x0590(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y15X[0x7];                                   // 0x0591(0x0007) MISSED OFFSET (PADDING)

	public:
		void SpawnEmitterAtLocationMulticastImpl(class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, class UObject* ParameterEvaluationContext);
		void STATIC_SpawnEmitterAtLocationMulticast(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, class UObject* ParameterEvaluationContext);
		void STATIC_SpawnEmitterAtComponentSocketMulticast(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, class USceneComponent* Component, const class FName& Socket, bool bAutoDestroy, class UObject* ParameterEvaluationContext);
		void STATIC_SpawnEmitterAtActorSocketMulticast(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, class AActor* Actor, const class FName& Socket, bool bAutoDestroy, class UObject* ParameterEvaluationContext);
		void PlayImpactMulticast(class UImpactData* ImpactData, class AActor* ImpactInstigator, const struct FReplicatedImpactHitResult& HitResult, const struct FImpactResponseParams& ResponseParams);
		void PlayHitRegionImpactMulticast(class UHitRegionData* HitRegion, class AActor* ImpactInstigator, const struct FReplicatedImpactHitResult& HitResult);
		void OnRep_StatsManager();
		void OnRep_HostPlayerState();
		void OnRep_GameInstanceTime();
		void OnRep_GameInstanceId();
		void OnRep_bPlayersOnly();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCharacterAnimInstance
	 * Size -> 0x0418 (FullSize[0x0950] - InheritedSize[0x0538])
	 */
	class UGbxCharacterAnimInstance : public UGbxAnimInstance
	{
	public:
		unsigned char                                              UnknownData_A5WX[0x8];                                   // 0x0538(0x0008) Fix Super Size
		struct FVector                                             HeadLookAtLocation;                                      // 0x0540(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EyeLookAtLocation;                                       // 0x054C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeadLookAtPercentage;                                    // 0x0558(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LookAtWeight;                                            // 0x055C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLookAtBlinkStarted;                                     // 0x0560(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I9MY[0x7];                                   // 0x0561(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ActiveStanceData;                                        // 0x0568(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ActiveStanceType;                                        // 0x0570(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStanceDataProvider*                                 CombatStance;                                            // 0x0578(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStanceDataProvider*                                 PassiveStance;                                           // 0x0580(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStanceData*                                         StanceData;                                              // 0x0588(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStanceType*                                         StanceType;                                              // 0x0590(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStanceComponent*                                    StanceComponent;                                         // 0x0598(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInCombatStance;                                         // 0x05A0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInPassiveStance;                                        // 0x05A1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInAir;                                                 // 0x05A2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCrouching;                                             // 0x05A3(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFlying;                                               // 0x05A4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFalling;                                              // 0x05A5(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasBeenLaunched;                                        // 0x05A6(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bJumped;                                                 // 0x05A7(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceFallingState;                                      // 0x05A8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AI8A[0x3];                                   // 0x05A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxWalkSpeed;                                            // 0x05AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSprintSpeed;                                          // 0x05B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWalkSpeedCrouched;                                    // 0x05B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed2D;                                                 // 0x05B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed2DRaw;                                              // 0x05BC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VelocityZ;                                               // 0x05C0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForwardDirection;                                        // 0x05C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RightDirection;                                          // 0x05C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpDirection;                                             // 0x05CC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Acceleration;                                            // 0x05D0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Direction;                                               // 0x05DC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BodyYaw;                                                 // 0x05E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReverseDirection;                                        // 0x05E4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotationalVelocity;                                      // 0x05E8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             GroundLocation;                                          // 0x05F4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0600(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WantsToTurn;                                             // 0x0604(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D1V0[0x3];                                   // 0x0605(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurnAmount;                                              // 0x0608(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TurnIsActive;                                            // 0x060C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QOZ1[0x3];                                   // 0x060D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxPredictedTurnDegrees;                                 // 0x0610(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPredictedTurnTime;                                    // 0x0614(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Pitch;                                                   // 0x0618(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Yaw;                                                     // 0x061C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimBlendWeight;                                          // 0x0620(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AimFacingLocation;                                       // 0x0624(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanAimInPassiveStance;                                  // 0x0630(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateFootIK;                                           // 0x0631(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateHandIK;                                           // 0x0632(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_72OT[0x1];                                   // 0x0633(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LeftHandIKWeight;                                        // 0x0634(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RightHandIKWeight;                                       // 0x0638(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeftHandGripWeight;                                      // 0x063C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RightHandGripWeight;                                     // 0x0640(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLegIkBaseClass;                                      // 0x0644(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3WBA[0xB];                                   // 0x0645(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LeftHandWeaponIKOffset;                                  // 0x0650(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          RightHandWeaponIKOffset;                                 // 0x0680(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          LeftHandWorldIKTarget;                                   // 0x06B0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHasLeftHandWorldIKTarget;                               // 0x06E0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlueprintForceLeftHandWorldIKTarget;                    // 0x06E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T50I[0x6];                                   // 0x06E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LeftHandIKTargetSocketName;                              // 0x06E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          RightHandWorldIKTarget;                                  // 0x06F0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHasRightHandWorldIKTarget;                              // 0x0720(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlueprintForceRightHandWorldIKTarget;                   // 0x0721(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7IVZ[0x6];                                   // 0x0722(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                RightHandIKTargetSocketName;                             // 0x0728(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LeftFootWorldIKTargetLocation;                           // 0x0730(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            LeftFootWorldIKTargetRotation;                           // 0x073C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             RightFootWorldIKTargetLocation;                          // 0x0748(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RightFootWorldIKTargetRotation;                          // 0x0754(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHasFootWorldIKTargets;                                  // 0x0760(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VR1D[0x3];                                   // 0x0761(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AINavYaw;                                                // 0x0764(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AINavTurnBlendDegrees;                                   // 0x0768(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AINavTransitionBlendDegrees;                             // 0x076C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           AINavHopDirection;                                       // 0x0770(0x0008) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AINavHopDistance;                                        // 0x0778(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SYHC[0x4];                                   // 0x077C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNavAnimServerData                                  AINavServerData;                                         // 0x0780(0x00A0) Transient, NoDestructor, NativeAccessSpecifierPublic
		struct FNavAnimClientData                                  AINavClientData;                                         // 0x0820(0x001C) Transient, NoDestructor, NativeAccessSpecifierPublic
		float                                                      AINavState_IdleAlphaTime;                                // 0x083C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AINavState_IdleAlpha;                                    // 0x0840(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAINavState_Idle;                                        // 0x0844(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAINavState_Move;                                        // 0x0845(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAINavState_Start;                                       // 0x0846(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAINavState_Stop;                                        // 0x0847(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAINavState_Turn;                                        // 0x0848(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxCharacterBlendPoints                                   BlendPoints;                                             // 0x0849(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAINavWantsForward;                                      // 0x084A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAINavWantsBackward;                                     // 0x084B(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAINavWantsLeft;                                         // 0x084C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAINavWantsRight;                                        // 0x084D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAINavIsMoving2D;                                        // 0x084E(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAINavIsStill2D;                                         // 0x084F(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AINavPreviewTableIndex;                                  // 0x0850(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENavAnimState                                              AINavPreviewDesiredState;                                // 0x0854(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAINav_UseDesired;                                       // 0x0855(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAINav_CanStretch;                                       // 0x0856(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O5E7[0x1];                                   // 0x0857(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MeshScale;                                               // 0x0858(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENavAnimState                                              AINavPreviewCurrentState;                                // 0x085C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6YV8[0x53];                                  // 0x085D(0x0053) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartTransitionTimeToEvaluate;                           // 0x08B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StopTransitionTimeToEvaluate;                            // 0x08B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurningRotationTimeToEvaluate;                           // 0x08B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1T8E[0x4];                                   // 0x08BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxBoneSet*                                         ActiveAnimBoneSetFilter;                                 // 0x08C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxBoneSet*                                         PrevAnimBoneSetFilter;                                   // 0x08C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L8WO[0x18];                                  // 0x08D0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGaitScalingSettings                                GaitScalingSettings;                                     // 0x08E8(0x0038) Edit, NativeAccessSpecifierPublic
		float                                                      FacialEmoteWeight;                                       // 0x0920(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DesiredFacialEmoteWeight;                                // 0x0924(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FacialEmoteWeightAlphaSpeed;                             // 0x0928(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DesiredActionWeight;                                     // 0x092C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneSetTransitionActionWeight;                           // 0x0930(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneSetBlendWeight;                                      // 0x0934(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneSetTransitionBlendType                                BoneSetTransitionBlendType;                              // 0x0938(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TA36[0x3];                                   // 0x0939(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BoneSetTransitionBlendSpeed;                             // 0x093C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BoneSetBlendSpeed;                                       // 0x0940(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DefaultBoneSetBlendSpeed;                                // 0x0944(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DefaultBoneSetTransitionBlendSpeed;                      // 0x0948(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1BYN[0x4];                                   // 0x094C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetDesiredFacialEmoteWeight(float Weight, float BlendTime);
		void OnStanceChanged();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DamageData
	 * Size -> 0x01D0 (FullSize[0x01F8] - InheritedSize[0x0028])
	 */
	class UDamageData : public UObject
	{
	public:
		struct FAttributeInitializationData                        Damage;                                                  // 0x0028(0x0038) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        DamageMultiplier;                                        // 0x0060(0x0038) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		class UDamageAreaType*                                     DamageAreaType;                                          // 0x0098(0x0008) Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageSource;                                            // 0x00A0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageType;                                              // 0x00A8(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UConditionalDamageModifier*>                  ConditionalDamageModifiers;                              // 0x00B0(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bApplyUpwardForce;                                       // 0x00C0(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5CYC[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UpwardForceScalar;                                       // 0x00C4(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FForceSelection                                     ImpactForceSelection;                                    // 0x00C8(0x0020) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		float                                                      GoreModifier;                                            // 0x00E8(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GibModifier;                                             // 0x00EC(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bImpactForceFallsOff;                                    // 0x00F0(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RDOV[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            HitRotationOffset;                                       // 0x00F4(0x000C) Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSimulatedOnClients;                                     // 0x0100(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceNoCrit;                                            // 0x0101(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanBeExecutedAsync;                                     // 0x0102(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_569S[0x1];                                   // 0x0103(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxAsyncExecutionDeferTime;                              // 0x0104(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HitStartSocketOrBone;                                    // 0x0108(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBaseTransformComesFromActorTransform;                   // 0x0110(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1AXS[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HitStartOffset;                                          // 0x0114(0x000C) Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            HitStartRotationOffset;                                  // 0x0120(0x000C) Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FAttitudeDamageRules                                AttitudeDamageRules;                                     // 0x012C(0x0004) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnforceAttitudeRulesForHealing;                         // 0x0130(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanHurtSelf;                                            // 0x0131(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanHurtInstigator;                                      // 0x0132(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DBWL[0x1];                                   // 0x0133(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bCausesDamageOverTime : 1;                               // 0x0134(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowMultipleInstances : 1;                             // 0x0134(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHitEachTargetOnlyOnce : 1;                              // 0x0134(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCacheSourceLocationAndRotation : 1;                     // 0x0134(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XM4D[0x3];                                   // 0x0135(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDamageDuration;                                       // 0x0138(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageInterval;                                          // 0x013C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCancelDamageOverTimeWhenOwnerDies;                      // 0x0140(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PV74[0x7];                                   // 0x0141(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     DamageOverTimeParticleSystem;                            // 0x0148(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         DamageOverTimeAudioEventStart;                           // 0x0150(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         DamageOverTimeAudioEventStop;                            // 0x0158(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFeedbackData*                                       InstigatorFeedback;                                      // 0x0160(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UFeedbackData*>                               TargetFeedbacks;                                         // 0x0168(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class UImpactData*                                         ImpactData;                                              // 0x0178(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UExplosionData*                                      ExplosionData;                                           // 0x0180(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     DefaultExplosionParticles;                               // 0x0188(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxSignificanceEvent                               SignificanceEvent;                                       // 0x0190(0x0008) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         DefaultAudioEvent;                                       // 0x0198(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImpactData*                                         DefaultExplosionImpactData;                              // 0x01A0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  DefaultExplosionDecalOverride;                           // 0x01A8(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseExplosionSizeForDecal;                               // 0x01B0(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyDrawParticleIfFacingDamage;                         // 0x01B1(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3GIF[0x6];                                   // 0x01B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScreenParticleInitParams                           ScreenParticleParams;                                    // 0x01B8(0x0030) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         PlayerAudioEvent;                                        // 0x01E8(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EKP6[0x8];                                   // 0x01F0(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnKilledEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, const struct FDamageDataEventDetails& Details);
		void OnHitFriendly(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, const struct FDamageDataEventDetails& Details);
		void OnHitEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, const struct FDamageDataEventDetails& Details);
		void OnHitAnyAttitude(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, const struct FDamageDataEventDetails& Details);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ProjectileHomingComponent
	 * Size -> 0x00B0 (FullSize[0x0228] - InheritedSize[0x0178])
	 */
	class UProjectileHomingComponent : public UActorComponent
	{
	public:
		bool                                                       bMoveDirectlyToTarget;                                   // 0x0178(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8Y5W[0x3];                                   // 0x0179(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurnSpeed;                                               // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bChangeTurnSpeed;                                        // 0x0180(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X86K[0x3];                                   // 0x0181(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FinalTurnSpeed;                                          // 0x0184(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurnAcceleration;                                        // 0x0188(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TrueTargetDistance;                                      // 0x018C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TrueTargetTime;                                          // 0x0190(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OverrideHomingSpeed;                                     // 0x0194(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccelerationScale;                                       // 0x0198(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PQAB[0x4];                                   // 0x019C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              HomingTarget;                                            // 0x01A0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     HomingTargetComponent;                                   // 0x01A8(0x0008) Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HomingSocketOverride;                                    // 0x01B0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HomingTargetLocation;                                    // 0x01B8(0x000C) Edit, BlueprintVisible, Net, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReachDistance;                                           // 0x01C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReachDistanceSquared;                                    // 0x01C8(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HomingTargetLocalOffset;                                 // 0x01CC(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StopHomingDistance;                                      // 0x01D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LT46[0x4];                                   // 0x01DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStopHomingDistanceReached;                             // 0x01E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReachedTargetLocation;                                 // 0x01F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bHomeIn;                                                 // 0x0200(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZDOG[0x7];                                   // 0x0201(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UProjectileMovementComponent*                        ProjectileMovement;                                      // 0x0208(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              Projectile;                                              // 0x0210(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bModifyDefault;                                          // 0x0218(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ELFZ[0xF];                                   // 0x0219(0x000F) MISSED OFFSET (PADDING)

	public:
		void ToggleHoming();
		void SetHomeIn(bool bEnabled);
		void SetAssociatedProjectileMovement(class UProjectileMovementComponent* ProjectileMovementComponent);
		struct FVector GetHomingLocation();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.HitReactionLayer
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UHitReactionLayer : public UObject
	{
	public:
		bool                                                       bStackable;                                              // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BPSR[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AttributeContextResolver
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UAttributeContextResolver : public UObject
	{
	public:
		unsigned char                                              ComponentTypeToFurtherResolveTo[0x28];                   // 0x0028(0x0028) UNKNOWN PROPERTY: SoftClassProperty GbxGameSystemCore.AttributeContextResolver.ComponentTypeToFurtherResolveTo

	public:
		TArray<class UObject*> GetContextForAttribute(class UGbxAttributeData* Attribute, class UObject* ContextSource);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.SpawnPatternData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USpawnPatternData : public UGbxDataAsset
	{
	public:
		void CalculateSpawnPoint(const struct FSpawnPatternInputs& Inputs, struct FSpawnPatternResult* Result);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.PhysicsSpawnPatternData
	 * Size -> 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
	 */
	class UPhysicsSpawnPatternData : public USpawnPatternData
	{
	public:
		unsigned char                                              bEnableSpeedRange : 1;                                   // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableAngularSpeedRange : 1;                            // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bApplySpeedAsImpulse : 1;                                // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bApplyAngularSpeedAsImpulse : 1;                         // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPickRandomPointInActorBounds : 1;                       // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bScaleSpeedByIncomingImpulse : 1;                        // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L915[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Speed;                                                   // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpeed;                                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HQZ7[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRelativeDirectionData                              Direction;                                               // 0x0040(0x0050) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      AngularSpeed;                                            // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAngularSpeed;                                         // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRelativeDirectionData                              RotationAxis;                                            // 0x0098(0x0050) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             ActorBoundsScale;                                        // 0x00E8(0x000C) Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G24M[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxPlayerCameraManager
	 * Size -> 0x0018 (FullSize[0x2C80] - InheritedSize[0x2C68])
	 */
	class AGbxPlayerCameraManager : public APlayerCameraManager
	{
	public:
		class AGbxPlayerController*                                GbxPCOwner;                                              // 0x2C68(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G7DK[0x10];                                  // 0x2C70(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.StatusEffectData
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UStatusEffectData : public UDataAsset
	{
	public:
		class UStatusEffectStackingStrategyData*                   StackingStrategy;                                        // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FAttributeEffect>                            AttributeEffects;                                        // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bDoesDamageOverTime;                                     // 0x0048(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UBP5[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageType;                                              // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              DamageSourceClass;                                       // 0x0058(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0060(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QD9M[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.CharacterAttributeContextResolver
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UCharacterAttributeContextResolver : public UAttributeContextResolver
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AttributePropertyValueResolver
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UAttributePropertyValueResolver : public UAttributeValueResolver
	{
	public:
		bool                                                       PropertySupportsModifierRemoval;                         // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B16K[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FParsedProperty                                     Property;                                                // 0x0030(0x0080) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.UIStatData
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UUIStatData : public UGbxDataAsset
	{
	public:
		class FText                                                Description;                                             // 0x0030(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		unsigned char                                              bCanDisplayMultipleTimes : 1;                            // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bBiggerIsBetter : 1;                                     // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_16LH[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BasePriority;                                            // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                SectionName;                                             // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              IconFrameName;                                           // 0x0058(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		bool K2_ShouldDisplayStat(class UObject* Context);
		class FText K2_GetValueText(class UObject* Context, const struct FUIStatCollector& Collector);
		float K2_GetComparisonValue(class UObject* Context, const struct FUIStatCollector& Collector);
		void EnumerateSectionNames(TArray<class FName>* OutSectionNameList);
		float ComputeAttributeModification(class UGbxAttributeData* Attribute, bool bScale, const struct FUIStatCollector& Collector);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.UIStatData_Numeric
	 * Size -> 0x01B8 (FullSize[0x0220] - InheritedSize[0x0068])
	 */
	class UUIStatData_Numeric : public UUIStatData
	{
	public:
		EUIStatValueStyle                                          ValueStyle;                                              // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUIStatValueSignStyle                                      SignStyle;                                               // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUIStatValueRoundingMode                                   RoundingMode;                                            // 0x006A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWOE[0x1];                                   // 0x006B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bDisplayAsPercentage : 1;                                // 0x006C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDisplayPercentAsFloat : 1;                              // 0x006C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDisplayAsInverse : 1;                                   // 0x006C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDisplayPlusSign : 1;                                    // 0x006C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDisplayAsOneMinus : 1;                                  // 0x006C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCalculateWithReductionMath : 1;                         // 0x006C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseFormatText : 1;                                      // 0x006C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableValueRemapping : 1;                               // 0x006C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseSupplementalStatFormatText : 1;                      // 0x006D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseMinValueCondition : 1;                               // 0x006D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseMaxValueCondition : 1;                               // 0x006D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bMinOrMaxValueCondition : 1;                             // 0x006D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5N4G[0x2];                                   // 0x006E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        MinValueCondition;                                       // 0x0070(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        MaxValueCondition;                                       // 0x00A8(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UGbxCondition*                                       Condition;                                               // 0x00E0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   FloatPrecision;                                          // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X22P[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                FormatText;                                              // 0x00F0(0x0018) Edit, NativeAccessSpecifierPublic
		struct FUIStatValueRemappingData                           ValueRemapping;                                          // 0x0108(0x00E8) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UUIStatData_Numeric*                                 SupplementalStat;                                        // 0x01F0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUIStatCombinationMethod                                   SupplementalStatCombinationMethod;                       // 0x01F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9M0L[0x7];                                   // 0x01F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCondition*                                       SupplementalStatCondition;                               // 0x0200(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                SupplementalStatFormatText;                              // 0x0208(0x0018) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AchievementUtility
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAchievementUtility : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAction_CoordinatedEffect
	 * Size -> 0x00D0 (FullSize[0x0130] - InheritedSize[0x0060])
	 */
	class UGbxAction_CoordinatedEffect : public UGbxAction
	{
	public:
		unsigned char                                              bInfiniteDuration : 1;                                   // 0x0060(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bLoop : 1;                                               // 0x0060(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCensored : 1;                                           // 0x0060(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bDestroyActorOnEnd : 1;                                  // 0x0060(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bUnhideActorOnBegin : 1;                                 // 0x0060(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bHideActorOnEnd : 1;                                     // 0x0060(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_08C0[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x0064(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              NextEffect;                                              // 0x0068(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                PermanentGroupTag;                                       // 0x0070(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  OverrideMaterial;                                        // 0x0078(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  MaskMaterial;                                            // 0x0080(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  GlowMaterial;                                            // 0x0088(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FCoordinatedConditionalMaterialData>         ConditionalOverrideMaterials;                            // 0x0090(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<struct FCoordinatedScalarParameter>                 MaterialScalarParameters;                                // 0x00A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<struct FCoordinatedVectorParameter>                 MaterialVectorParameters;                                // 0x00B0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<class FName>                                        InheritedMaterialParameters;                             // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		EMaterialParameterCopyMethod                               InheritMaterialParametersMethod;                         // 0x00D0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bInheritAllMaterialParameters : 1;                       // 0x00D1(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bOverwriteInstancedMaterialParameters : 1;               // 0x00D1(0x0001) BIT_FIELD Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bApplyToTranslucentMaterials : 1;                        // 0x00D1(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bPermanentMaterialOverride : 1;                          // 0x00D1(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAlwaysRestoreMaterialParametersAtEnd : 1;               // 0x00D1(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bApplyMaterialParametersToBothOverrideAndMaskGlow : 1;   // 0x00D1(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I5YR[0x6];                                   // 0x00D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ExcludedMaterialStaticParameters;                        // 0x00D8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<struct FCoordinatedParticleSystemData>              ParticleEffects;                                         // 0x00E8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<struct FCoordinatedParticleSystemParameterData>     ParticleParameters;                                      // 0x00F8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		float                                                      ParticleSpeedMultiplier;                                 // 0x0108(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ECoordinatedOwnedParticleAction                            OwnedParticleAction;                                     // 0x010C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAlwaysRestoreParticleParametersAtEnd : 1;               // 0x010D(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHideOwnedParticles;                                     // 0x010E(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2O8D[0x1];                                   // 0x010F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCoordinatedAudioData>                       AudioEffects;                                            // 0x0110(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<struct FCoordinatedLightParameterData>              LightParameters;                                         // 0x0120(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		void SetConstantMaterialVectorParamValue(const class FName& ParamName, const struct FLinearColor& Color);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAction_Gib
	 * Size -> 0x01A0 (FullSize[0x0200] - InheritedSize[0x0060])
	 */
	class UGbxAction_Gib : public UGbxAction
	{
	public:
		int32_t                                                    MaxGibCount;                                             // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3UWZ[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGibData>                                    Gibs;                                                    // 0x0068(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      GibMinScale;                                             // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GibMaxScale;                                             // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpawnPatternData*                                   GibSpawnPattern;                                         // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GibMassScale;                                            // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z7MH[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GibActorClass;                                           // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NDSH[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FImpactResponseEffect                               GibEffect;                                               // 0x00A0(0x0140) Edit, Protected, NativeAccessSpecifierProtected
		float                                                      GibEffectScale;                                          // 0x01E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C22G[0x4];                                   // 0x01E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     GibParticle;                                             // 0x01E8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWwiseEvent*                                         GibSound;                                                // 0x01F0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XBP8[0x8];                                   // 0x01F8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAction_Loop
	 * Size -> 0x0300 (FullSize[0x03B8] - InheritedSize[0x00B8])
	 */
	class UGbxAction_Loop : public UGbxAction_SimpleAnim
	{
	public:
		struct FAnimMeshList                                       AnimStart;                                               // 0x00B8(0x0078) Edit, NativeAccessSpecifierPrivate
		TArray<struct FWeightedAnim>                               AnimLoopList;                                            // 0x0130(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		struct FAnimMeshList                                       AnimStop;                                                // 0x0140(0x0078) Edit, NativeAccessSpecifierPrivate
		float                                                      BlendInTime;                                             // 0x01B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BlendOutTime;                                            // 0x01BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StartToLoopBlendTime;                                    // 0x01C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      LoopToLoopBlendTime;                                     // 0x01C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      LoopToStopBlendTime;                                     // 0x01C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NR6N[0x4];                                   // 0x01CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AnimSlot;                                                // 0x01D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLetLoopFinish;                                          // 0x01D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XZ95[0x7];                                   // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           LoopCount;                                               // 0x01E0(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bUseLoopCount;                                           // 0x0260(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R5O5[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           LoopTime;                                                // 0x0268(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bUseLoopTime;                                            // 0x02E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4669[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCondition*                                       LoopCondition;                                           // 0x02F0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseLoopCondition;                                       // 0x02F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WVNC[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLoopAnimData                                       AnimData3rd;                                             // 0x0300(0x0018) Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bPlay3rd;                                                // 0x0318(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y0W5[0x7];                                   // 0x0319(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLoopAnimData                                       AnimData1st;                                             // 0x0320(0x0018) Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bPlay1st;                                                // 0x0338(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EDNG[0x7];                                   // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimMeshList                                       AnimLoop;                                                // 0x0340(0x0078) Deprecated, NativeAccessSpecifierPrivate

	public:
		void OnStop(class AActor* Actor);
		void OnLoop(class AActor* Actor);
		void K2_StopLooping();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAction_PhysicalAnim
	 * Size -> 0x0028 (FullSize[0x01D0] - InheritedSize[0x01A8])
	 */
	class UGbxAction_PhysicalAnim : public UGbxAction_Anim
	{
	public:
		EPhysicalAnimationRootMotionControl                        RootMotionControl;                                       // 0x01A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxPhysicalActionMovementLockMode                         MovementLockMode;                                        // 0x01A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxPhysicalActionDynamicBoneActivationMode                DynamicBoneActivationMode;                               // 0x01AA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EUWX[0x1];                                   // 0x01AB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneFatigueParams                                  FatigueParams;                                           // 0x01AC(0x0014) Edit, NoDestructor, NativeAccessSpecifierPublic
		EGbxPhysicalActionBeginCondition                           BeginCondition;                                          // 0x01C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PhysicalBeginConditionFlags;                             // 0x01C1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PhysicalEndConditionFlags;                               // 0x01C2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxPhysicalActionEndCondition                             PhysicalEndCondition;                                    // 0x01C3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CustomForceMultiplier;                                   // 0x01C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpwardForceMultiplier;                                   // 0x01C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceAppliedAtLocation;                                 // 0x01CC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasValidHitForce;                                       // 0x01CD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZXFV[0x2];                                   // 0x01CE(0x0002) MISSED OFFSET (PADDING)

	public:
		EGbxPhysicalActionDynamicBodyState K2_GetDynamicBodyState(float AngularThreshold);
		void K2_FixupDynamicToKinematicIssues(float AngularThreshold);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAction_PhysicalDeath
	 * Size -> 0x0020 (FullSize[0x01F0] - InheritedSize[0x01D0])
	 */
	class UGbxAction_PhysicalDeath : public UGbxAction_PhysicalAnim
	{
	public:
		float                                                      PhysicalAnimationDelayTime;                              // 0x01D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCapPhysicalAnimationDelayToAnimationDuration;           // 0x01D4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GGKI[0x3];                                   // 0x01D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        PrematurePhysicalAnimationIgnoreBodyNames;               // 0x01D8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bAllowPrematurePhysicalAnimation;                        // 0x01E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTearOffOnDeath;                                         // 0x01E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7DDO[0x2];                                   // 0x01EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxRagdollTime;                                          // 0x01EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AimAssistParameters
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAimAssistParameters : public UGbxDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxPlayerController
	 * Size -> 0x0150 (FullSize[0x0980] - InheritedSize[0x0830])
	 */
	class AGbxPlayerController : public APlayerController
	{
	public:
		unsigned char                                              UnknownData_VN7A[0x10];                                  // 0x0830(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGbxCharacter*                                       GbxCharacter;                                            // 0x0840(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AGbxCharacter*                                       PrimaryCharacter;                                        // 0x0848(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class URecentDamageTrackingComponent*                      RecentDamageTrackingComponent;                           // 0x0850(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxProfile*                                         CurrentProfile;                                          // 0x0858(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              InputComponentClass;                                     // 0x0860(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              PlayerInputClass;                                        // 0x0868(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              AimAssistStrategyClass;                                  // 0x0870(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftClassPath                                      CheatClassGbx;                                           // 0x0878(0x0018) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L1IZ[0x30];                                  // 0x0890(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPrimaryCharacterChanged;                               // 0x08C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPauseChanged;                                          // 0x08D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CMYN[0x28];                                  // 0x08E0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGbxGlyphSetOption                                         CachedGlyphMode;                                         // 0x0908(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N3QH[0x7];                                   // 0x0909(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTargetingComponent*                                 TargetingComponent;                                      // 0x0910(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTargetableComponent*                                TargetableComponent;                                     // 0x0918(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTeamComponent*                                      TeamComponent;                                           // 0x0920(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxPerceptionComponent*                             PerceptionComponent;                                     // 0x0928(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFirstPersonComponent*                               FirstPersonComponent;                                    // 0x0930(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAimAssistStrategy*                                  AimAssistStrategy;                                       // 0x0938(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWwiseListenerComponent*                             WwiseListener;                                           // 0x0940(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FActiveTrackedFeedback>                      ActiveTrackedFeedbacks;                                  // 0x0948(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		bool                                                       bUsingGamepad;                                           // 0x0958(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YAK8[0x7];                                   // 0x0959(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCinematicModeData*>                          CinematicModeStack;                                      // 0x0960(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class UCinematicModeData*                                  CinematicMode;                                           // 0x0970(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UScreenParticleManagerComponent*                     ScreenParticleManagerComponent;                          // 0x0978(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetTeam(class UTeam* Team);
		void ServerRequestPawnSlotDetach(class APawn* Occupant);
		void ServerCanSplitscreenJoin(int32_t ControllerId);
		void PushCinematicMode(class UCinematicModeData* InCinematicMode);
		void PopCinematicMode(class UCinematicModeData* InCinematicMode);
		void OnRep_PrimaryCharacter();
		void OnRep_CinematicMode();
		void OnPrimaryCharacterChanged__DelegateSignature(class AGbxCharacter* NewCharacter);
		void OnPausedChangedDelegate__DelegateSignature(bool bPaused);
		bool IsUsingGamepad();
		class UTeamComponent* GetTeamComponent();
		class UTeam* GetTeam();
		class UTargetingComponent* GetTargetingComponent();
		class UTargetableComponent* GetTargetableComponent();
		class AGbxCharacter* GetPrimaryCharacter();
		void GetPlayerViewportSize(int32_t* SizeX, int32_t* SizeY);
		void GetPlayerViewportOffset(int32_t* OffsetX, int32_t* OffsetY);
		class UGbxProfile* GetPlayerProfile();
		class UGbxPerceptionComponent* GetGbxPerceptionComponent();
		bool DeprojectViewportPositionToWorld(float ViewportX, float ViewportY, struct FVector* WorldLocation, struct FVector* WorldDirection, bool bUseForegroundProjection);
		void DebugCategory(const class FName& CategoryName);
		void ClientStopFeedback(class UFeedbackData* Data);
		void ClientPlayWwiseEvent(class UWwiseEvent* Event);
		void ClientPlayFeedback(class UFeedbackData* Data, float Scale, bool bLoop, class UObject* SourceContext);
		void ClientPerformFeedbackAtLocation(class UFeedbackData* FeedbackData, const struct FVector& SourceLocation, bool bLoop, class UObject* SourceContext, const struct FRangedDistanceOverrides& RangedOverrides);
		void ClientPerformFeedback(class UFeedbackData* FeedbackData, class UObject* SourceContext);
		void ClientNotifyActivateCheckpoint();
		void ClientCanSplitscreenJoin(int32_t ControllerId, bool bCanJoin);
		void ClientApplyDamageDataPresentation(class UDamageData* DamageData, const struct FPlayerDamageDataPresentation& PlayerPresentation);
		void Client_StopGbxFeedback(class UGbxFeedbackData* Data, class UObject* SourceContext);
		void Client_PlayGbxFeedback(class UGbxFeedbackData* Data, bool bIs3D, bool bLoop, float Scale, class UObject* SourceContext, const struct FVector& SourceLocation, float EffectFalloffMinDistance, float EffectFalloffMaxDistance);
		void ClearCinematicMode();
		void ClearAndSetCinematicMode(class UCinematicModeData* InCinematicMode);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AimAssistStrategy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAimAssistStrategy : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAssetManager
	 * Size -> 0x0030 (FullSize[0x0410] - InheritedSize[0x03E0])
	 */
	class UGbxAssetManager : public UAssetManager
	{
	public:
		TArray<struct FStartupAssetTypeData>                       StartupAssetTypes;                                       // 0x03E0(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		TArray<class FName>                                        StartupAssetFiles;                                       // 0x03F0(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_24RP[0x10];                                  // 0x0400(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AssetMappingData
	 * Size -> 0x0230 (FullSize[0x0260] - InheritedSize[0x0030])
	 */
	class UAssetMappingData : public UGbxDataAsset
	{
	public:
		TMap<uint32_t, class FString>                              ChallengesMap;                                           // 0x0030(0x0050) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TMap<uint32_t, class FString>                              GameStatDataMap;                                         // 0x0080(0x0050) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TMap<uint32_t, class FString>                              CustomizationDataMap;                                    // 0x00D0(0x0050) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TMap<uint32_t, class FString>                              MissionsMap;                                             // 0x0120(0x0050) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TMap<uint32_t, class FString>                              ObjectiveSetsMap;                                        // 0x0170(0x0050) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TMap<uint32_t, class FString>                              InventoryCategoryMap;                                    // 0x01C0(0x0050) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TMap<uint32_t, class FString>                              UINamesMap;                                              // 0x0210(0x0050) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.Challenge
	 * Size -> 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
	 */
	class UChallenge : public UObject
	{
	public:
		class UChallengesComponent*                                RegisteredOwner;                                         // 0x0028(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ParentChallenges;                                        // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic
		class FText                                                ChallengeName;                                           // 0x0040(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0058(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                CompletedDescription;                                    // 0x0070(0x0018) Edit, NativeAccessSpecifierPublic
		bool                                                       bShared;                                                 // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRepeatable;                                             // 0x0089(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideInUI;                                               // 0x008A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowActivationUI;                                       // 0x008B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowProgressUI;                                         // 0x008C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowCompletionUI;                                       // 0x008D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowAsUndiscoveredUntilProgressed;                      // 0x008E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H3SV[0x1];                                   // 0x008F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AssociatedMapName;                                       // 0x0090(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EChallengeType                                             ChallengeType;                                           // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R4MD[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStatChallengeTest>                          StatChallengeTests;                                      // 0x00A0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bCompleteIfGoalValueReached;                             // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetProgressWhenGoalValueReached;                      // 0x00B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K50Y[0x6];                                   // 0x00B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FChallengeGoalValue>                         ProgressGoalInfo;                                        // 0x00B8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ProgressGoalValues;                                      // 0x00C8(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		class UChallengeCategoryData*                              ChallengeCategoryData;                                   // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitiallyActive;                                        // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideFromCounts;                                         // 0x00E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7J29[0x6];                                   // 0x00E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PrerequisiteChallenge;                                   // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AssociatedCompletionAchievementId;                       // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AssociatedProgressAchievementId;                         // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProfileChallenge;                                       // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5SEI[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      SubChallenges;                                           // 0x0100(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       CompletedBySubChallenges;                                // 0x0110(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ActivateIfSubChallengesComplete;                         // 0x0111(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncrementProgressViaSubChallenges;                      // 0x0112(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6EMB[0x5];                                   // 0x0113(0x0005) MISSED OFFSET (PADDING)

	public:
		bool TestForCompleted(class AGbxPlayerController* PlayerToTest, class UObject* OtherObject, TArray<class FString> EnumTag);
		void SetChallengeProgress(int32_t NewProgress);
		void PlayerExitChallengeArea(class UChallengeLevelActorComponent* LevelActorComponent);
		void PlayerEnterChallengeArea(class UChallengeLevelActorComponent* LevelActorComponent);
		void OnLevelActorRegistered(class UChallengeLevelActorComponent* RegisteredLevelActor);
		void OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter);
		void OnChallengeActivated();
		bool IsChallengeComplete();
		bool IsChallengeActive();
		void IncrementChallengeProgressByValue(int32_t Value);
		void IncrementChallengeProgress();
		void GetLevelActorComponents(TArray<class UChallengeLevelActorComponent*>* LevelActorList);
		int32_t GetChallengeProgressGoalValue();
		int32_t GetChallengeProgress();
		void GetChallengeCompleteInfo(int32_t* NumCompleted, int32_t* NumChallenges);
		bool CompletedConditional();
		void CompletedChallenge(class AGbxPlayerController* CompletedPlayer);
		void CompleteChallenge();
		void ActivateChallenge();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ChallengeCategoryData
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UChallengeCategoryData : public UGbxDataAsset
	{
	public:
		class FText                                                CategoryName;                                            // 0x0030(0x0018) Edit, NativeAccessSpecifierPublic
		float                                                      ProgressWeight;                                          // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JMJJ[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ChallengeList
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UChallengeList : public UGbxDataAsset
	{
	public:
		class UDownloadableContentData*                            AssociatedDLC;                                           // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              Challenges[0x10];                                        // 0x0038(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxGameSystemCore.ChallengeList.Challenges

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ChallengeManager
	 * Size -> 0x00C0 (FullSize[0x0518] - InheritedSize[0x0458])
	 */
	class AChallengeManager : public AActor
	{
	public:
		unsigned char                                              UnknownData_819F[0xC0];                                  // 0x0458(0x00C0) MISSED OFFSET (PADDING)

	public:
		void OnStatIncrement(class AActor* StatContext, class UGameStatData* StatId, int32_t Amount);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.CustomChallengePersistentState
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCustomChallengePersistentState : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ChallengesComponent
	 * Size -> 0x0090 (FullSize[0x0208] - InheritedSize[0x0178])
	 */
	class UChallengesComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnChallengeRegistrationComplete;                         // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnChallengeActivated;                                    // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnChallengeUpdated;                                      // 0x0198(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnChallengeCompleted;                                    // 0x01A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnChallengeChildCompleted;                               // 0x01B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FChallengeInstanceData>                      LocalChallengeDataCache;                                 // 0x01C8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<int32_t>                                            ChallengeRewardsEarned;                                  // 0x01D8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<int32_t>                                            ChallengeRewardsToOfferNext;                             // 0x01E8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class UGameStatsComponent*                                 GameStatsComponent;                                      // 0x01F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XGI5[0x8];                                   // 0x0200(0x0008) MISSED OFFSET (PADDING)

	public:
		void UnregisterInActivePlayerChallenges();
		void SetChallengeProgress(class UClass* ChalClass, int32_t NewProgress);
		void SetChallengeActive(class UClass* ChalClass, bool bInIsActive);
		bool IsChallengeComplete(class UClass* ChalClass);
		bool IsChallengeActive(class UClass* ChalClass);
		void IncrementChallengeProgress(class UClass* ChalClass);
		int32_t GetMaxChallengeTiers(class UClass* ChalClass);
		TArray<struct FChallengeInstanceData> GetLocalChallenges();
		int32_t GetCompletedChallengeTiers(class UClass* ChalClass);
		int32_t GetChallengeStatValue(class UClass* ChalClass, class UGameStatData* StatId);
		int32_t GetChallengeStatGoalValue(class UClass* ChalClass, class UGameStatData* StatId);
		int32_t GetChallengeProgressGoalValue(class UClass* ChalClass);
		int32_t GetChallengeProgress(class UClass* ChalClass);
		void GetChallengeCompleteInfoForLevels(TArray<class FName> LevelsForChallenges, class UChallengeCategoryData* Category, int32_t* NumCompleted, int32_t* NumActive, bool bIgnoreHidden);
		void GetChallengeCompleteInfo(class UClass* ChalClass, int32_t* NumCompleted, int32_t* NumChallenges);
		void CompleteChallengeIfConditionsMet(class UClass* ChalClass);
		void CompleteChallenge(class UClass* ChalClass, bool bForceActive);
		void ClientChallengeUpdateProgress(class UClass* ChalClass, int32_t NewProgress);
		void ClientChallengeCompleted(class UClass* ChalClass, int32_t NumTiersComplete, bool bForceActive);
		void ClientActivateChallenge(class UClass* ChalClass);
		bool AreGlobalChallengesRegistered();
		void ActivateChallenge(class UClass* ChalClass);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCharacterMovementComponent
	 * Size -> 0x1DF0 (FullSize[0x2680] - InheritedSize[0x0890])
	 */
	class UGbxCharacterMovementComponent : public UCharacterMovementComponent
	{
	public:
		unsigned char                                              UnknownData_0Y0G[0x748];                                 // 0x0890(0x0748) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGbxCharacter*                                       GbxCharacterOwner;                                       // 0x0FD8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxCharacterAnimInstance*                           GbxAnimInstance;                                         // 0x0FE0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimInstance*                                       AnimInstance;                                            // 0x0FE8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FallingFloorUpdateInterval;                              // 0x0FF0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FallingFloorTraceDistance;                               // 0x0FF4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PZMU[0x98];                                  // 0x0FF8(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterMoveToState                               CurrentMoveToState;                                      // 0x1090(0x0030) Transient, NoDestructor, NativeAccessSpecifierPrivate
		struct FCharacterRotateToState                             CurrentRotateToState;                                    // 0x10C0(0x0068) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              bCanCrouchInAir : 1;                                     // 0x1128(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanClimbLadders : 1;                                    // 0x1128(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCenterOnLadder : 1;                                     // 0x1128(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSlideAlongLadderCollision : 1;                          // 0x1128(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bBlockMomentumAdd : 1;                                   // 0x1128(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YI0J[0x3];                                   // 0x1129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAttributeFloat                                  MaxGroundSpeedScale;                                     // 0x112C(0x000C) Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LadderFriction;                                          // 0x1138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  MaxLadderAscendSpeed;                                    // 0x113C(0x000C) Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  MaxLadderDescendSpeed;                                   // 0x1148(0x000C) Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLadderForwardSpeed;                                   // 0x1154(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLadderReverseSpeed;                                   // 0x1158(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LadderBrakingDeceleration;                               // 0x115C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LadderInterpSpeed;                                       // 0x1160(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LadderJumpVelocity;                                      // 0x1164(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              EnterBottomAnimation;                                    // 0x1168(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ExitBottomAnimation;                                     // 0x1170(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              EnterTopAnimation;                                       // 0x1178(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ExitTopAnimation;                                        // 0x1180(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULadderInteractData*                                 LadderInteractData;                                      // 0x1188(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEnterLadder;                                           // 0x1190(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnExitLadderTop;                                         // 0x11A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnExitLadderBottom;                                      // 0x11B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnJumpFromLadder;                                        // 0x11C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMantleStarted;                                         // 0x11D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMantleFinished;                                        // 0x11E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UStanceComponent*                                    StanceComponent;                                         // 0x11F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxActionComponent*                                 ActionComponent;                                         // 0x11F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FCharacterScriptedMeshOffsetState                   ScriptedMeshOffsetState;                                 // 0x1200(0x0140) Transient, Protected, NativeAccessSpecifierProtected
		bool                                                       bClientWasOnLadder;                                      // 0x1340(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0KDH[0x7];                                   // 0x1341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              OverlappingLadderVolumes[0x10];                          // 0x1348(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxGameSystemCore.GbxCharacterMovementComponent.OverlappingLadderVolumes
		unsigned char                                              CurrentLadderVolume[0x10];                               // 0x1358(0x0010) UNKNOWN PROPERTY: InterfaceProperty GbxGameSystemCore.GbxCharacterMovementComponent.CurrentLadderVolume
		unsigned char                                              JumpLadderVolume[0x10];                                  // 0x1368(0x0010) UNKNOWN PROPERTY: InterfaceProperty GbxGameSystemCore.GbxCharacterMovementComponent.JumpLadderVolume
		float                                                      LadderJumpTime;                                          // 0x1378(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAlreadyCenteredOnLadder : 1;                            // 0x137C(0x0001) BIT_FIELD Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bWantsToBeOnLadder : 1;                                  // 0x137C(0x0001) BIT_FIELD Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N6W9[0x3];                                   // 0x137D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLadderAnimState                                    LadderAnimState;                                         // 0x1380(0x0028) Transient, Protected, NativeAccessSpecifierProtected
		struct FReplicatedLadderState                              ReplicatedLadderState;                                   // 0x13A8(0x0002) Net, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JD8E[0x2];                                   // 0x13AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAttributeFloat                                  RotationRateYaw;                                         // 0x13AC(0x000C) Net, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  IdleRotationRateYaw;                                     // 0x13B8(0x000C) Edit, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseIdleRotationRateYaw;                                 // 0x13C4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZYZL[0x97];                                  // 0x13C5(0x0097) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAttributeFloat                                  MaxAllowedAimOffset;                                     // 0x145C(0x000C) Edit, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinTurnAimOffset;                                        // 0x1468(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinBodyFacingThreshold;                                  // 0x146C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPredictedTurnDegrees;                                 // 0x1470(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMaxPredictedTurnDegrees;                             // 0x1474(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UAF7[0x3];                                   // 0x1475(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxPredictedTurnTime;                                    // 0x1478(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMaxPredictedTurnTime;                                // 0x147C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysFaceActorsCurrentLocation;                        // 0x147D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BAO1[0x2];                                   // 0x147E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAttributeFloat                                  AimRotationRate;                                         // 0x1480(0x000C) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LookAtAngleClamp;                                        // 0x148C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LookRotationRate;                                        // 0x1490(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FastLookRotationRate;                                    // 0x1494(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFastLookRotationRate;                                // 0x1498(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CKUR[0x3];                                   // 0x1499(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNumericRange                                       FastLookRotationSpeed;                                   // 0x149C(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      HeadLookPercent;                                         // 0x14A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNumericRange                                       HeadLookPercentDistance;                                 // 0x14A8(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseHeadLookPercentDistance;                             // 0x14B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8EKV[0x3];                                   // 0x14B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeadLookPercentInterpSpeed;                              // 0x14B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLookAtParentBoneForAngleClamp;                       // 0x14B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5WQL[0x3];                                   // 0x14B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LookAtBlinkAngle;                                        // 0x14BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLookAtBlinkAngle;                                    // 0x14C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KMK9[0x3];                                   // 0x14C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LookAtHeadTargetOffset;                                  // 0x14C4(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLookAtHeadTargetOffset;                              // 0x14D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5Z8A[0x3];                                   // 0x14D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LookAtEyeTargetOffset;                                   // 0x14D4(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLookAtEyeTargetOffset;                               // 0x14E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLookAtTargetClearDelay;                              // 0x14E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5JRW[0x2];                                   // 0x14E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LookAtRate;                                              // 0x14E4(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootIkEnabledInterpolationSpeed;                         // 0x14E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlopeAdaptationOverrideInterpSpeed;                      // 0x14EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZ1C[0x280];                                 // 0x14F0(0x0280) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlledMoveState                                ControlledMoveState;                                     // 0x1770(0x0160) Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FControlledMoveReplicationData                      ControlledMoveReplicationData;                           // 0x18D0(0x0048) Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K8TQ[0x30];                                  // 0x1918(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMantleData*                                         MantleData;                                              // 0x1948(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMantleState                                        MantleState;                                             // 0x1950(0x06E8) Transient, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FReplicatedMantleState                              ReplicatedMantleState;                                   // 0x2038(0x0008) Net, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3DGX[0x8];                                   // 0x2040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxCharacterNavWalking                             GbxNavWalking;                                           // 0x2048(0x00B0) Transient, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class UNavComponent*                                       NavComponent;                                            // 0x20F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NavMeshProjectionDistance;                               // 0x2100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AirFriction;                                             // 0x2104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NavMeshProjectionTraceDistance;                          // 0x2108(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H8G6[0x4];                                   // 0x210C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNavAnimState                                       NavAnimState;                                            // 0x2110(0x0050) Net, Transient, Protected, NativeAccessSpecifierProtected
		struct FNavAnimServerData                                  NavServerData;                                           // 0x2160(0x00A0) Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FNavAnimClientData                                  NavClientData;                                           // 0x2200(0x001C) Net, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bPretendToBeWalking;                                     // 0x221C(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_00CZ[0x143];                                 // 0x221D(0x0143) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotationDeltaMatchingInfo                          RotationDeltaMatchingInfo;                               // 0x2360(0x00C0) Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y1NT[0x8];                                   // 0x2420(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxInterpData                                      InterpData;                                              // 0x2428(0x0140) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FIdleVelocityData                                   IdleVelocity;                                            // 0x2568(0x0018) Transient, NoDestructor, NativeAccessSpecifierPublic
		struct FRootMotionStateData                                RootMotionState;                                         // 0x2580(0x0058) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZ93[0xA8];                                  // 0x25D8(0x00A8) MISSED OFFSET (PADDING)

	public:
		void StopRotateTo();
		void StopMoveTo(bool bForce, bool bReplicateStop);
		void StopControlledMove(class UClass* ControlledMove, bool bZeroVelocity, bool bInterrupted);
		void StartRotateTo(const struct FCharacterRotateToCommand& RotateToCommand);
		void StartMoveTo(const struct FCharacterMoveToCommand& MoveToCommand);
		bool StartControlledMove(class UClass* ControlledMove, class AActor* Instigator, float SpeedOverride, float DurationOverride, float LaunchAngleOverride, class AActor* TargetActor, const struct FVector& TargetLocation);
		void SetPendingRawInputVector(const struct FVector& NewInputVector);
		void SetNoneWithRootMotionMode(bool bAnimationWalking, const class FName& Reason);
		void SetFacingTarget(const struct FFacingInfo& FacingTarget, EFacingChannel Channel);
		void SetAnimationBasedTurning(bool bEnable);
		void ServerStopMoveTo();
		void ServerStartMoveTo(const struct FCharacterMoveToCommand& MoveToCommand);
		void ServerAttemptMantle(const struct FMantleAttemptInfo& ClientData, float Timestamp);
		void OnStanceChanged(const struct FStanceChangedEventArgs& Args);
		void OnRep_ControlledMove();
		void OnNotifyTurnExit();
		void OnNotifyTurnEnter();
		void OnCapsuleEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		struct FFacingInfo STATIC_MakeFacingInfoRotation(const struct FRotator& Rotation);
		struct FFacingInfo STATIC_MakeFacingInfoNone();
		struct FFacingInfo STATIC_MakeFacingInfoLocation(const struct FVector& Location);
		struct FFacingInfo STATIC_MakeFacingInfoDirection(const struct FVector& Direction);
		struct FFacingInfo STATIC_MakeFacingInfoComponent(class USceneComponent* Component);
		struct FFacingInfo STATIC_MakeFacingInfoActorEyes(class AActor* Actor);
		struct FFacingInfo STATIC_MakeFacingInfoActor(class AActor* Actor);
		void LeaveNoneWithRootMotionMode(bool bApplyDefault);
		bool IsPerformingSpecificControlledMove(class UClass* ControlledMove);
		bool IsPerformingControlledMove();
		bool IsMovingOnLadder();
		bool IsMantlingAllowed();
		bool IsMantling();
		bool IsInNoneWithRootMotionMode();
		bool IsHandIkEnabled();
		bool IsFootIkTracingEnabled();
		bool IsFootIkEnabled();
		bool IsFacingTargetBP(float ThresholdDegrees, EFacingChannel Channel);
		float GetMaxAllowedAimOffset();
		class UMantleData* GetMantleData();
		struct FRotator GetDesiredFacingRotation(EFacingChannel Channel);
		struct FVector GetDesiredFacingLocation(EFacingChannel Channel);
		struct FRotator GetCurrentFacingRotation(EFacingChannel Channel);
		struct FVector GetCurrentFacingOrigin(EFacingChannel Channel);
		struct FVector GetCurrentFacingLocation(EFacingChannel Channel);
		void GbxSetAnimInstanceClass(class USkeletalMeshComponent* SkelMeshComponent, class UClass* NewClass);
		void GbxCharacterMovementEvent__DelegateSignature();
		void ControlledServerMoveOld(float OldTimeStamp, const struct FVector_NetQuantize10& OldAccel, unsigned char OldMoveFlags, uint32_t CMDir);
		void ControlledServerMoveDual(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, uint32_t CMDir0, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const class FName& ClientBaseBoneName, unsigned char ClientMovementMode, uint32_t CMDir, uint16_t ClientBodyYaw);
		void ControlledServerMove(float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const class FName& ClientBaseBoneName, unsigned char ClientMovementMode, uint32_t CMDir, uint16_t ClientBodyYaw);
		void ClientAdjustControlledMovePosition(float Timestamp, const struct FControlledMoveNetCorrection& ServerCMData, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const class FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
		bool CanStartPassiveMantle();
		bool CanStartMantle();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCheatManager
	 * Size -> 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
	 */
	class UGbxCheatManager : public UCheatManager
	{
	public:
		unsigned char                                              UnknownData_OPX8 : 2;                                    // 0x0078(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bHLQNoClipActive : 1;                                    // 0x0078(0x0001) BIT_FIELD Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G9IJ[0xF];                                   // 0x0079(0x000F) MISSED OFFSET (PADDING)

	public:
		void TestGameStage(int32_t GameStageOverride);
		void StartPlayerInit();
		void ShowProjectileImpacts(float Size, float LifeTime);
		void SetDebugActorByName(const class FString& ActorName);
		void STATIC_SetDebugActor(class AActor* Actor, int32_t ControllerIndex);
		void Server_TogglePlayersOnly();
		void Server_DamageTarget(float DamageAmount);
		void PlayFeedbackRangedFromThere(const class FString& FeedbackData);
		void PlayFeedbackDirectional(const class FString& FeedbackData, float DirectionAngle);
		void PlayFeedback(const class FString& FeedbackData, float Scale);
		void LogQatalystInfo();
		void DebugNextAI();
		void DamageAreaDebug();
		void ClearPlayerInit();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.CinematicModeData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCinematicModeData : public UGbxDataAsset
	{
	public:
		bool                                                       bCinematicMode;                                          // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHidePlayer;                                             // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHidePlayerOwnedVehicles;                                // 0x0032(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideNPC;                                                // 0x0033(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectsHUD;                                             // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectsMovement;                                        // 0x0035(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectsPawnRotation;                                    // 0x0036(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectsTurning;                                         // 0x0037(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCinematicSplitScreen;                                   // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableGodMode;                                          // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableNoTarget;                                         // 0x003A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECinematicAudioMode                                        AudioMode;                                               // 0x003B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T3AU[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ControlledMove
	 * Size -> 0x0878 (FullSize[0x08A0] - InheritedSize[0x0028])
	 */
	class UControlledMove : public UObject
	{
	public:
		unsigned char                                              bIsSpeedScaleNormalized : 1;                             // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEaseInSpeedConstraints : 1;                             // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRestoreCharacterMovementMode : 1;                       // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bZeroVelocityAtEnd : 1;                                  // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUpdateCharacterRotationYaw : 1;                         // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUpdateCharacterRotationPitch : 1;                       // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bApplyLaunchVelocityOnStart : 1;                         // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSpeedAffectedByMaxGroundSpeedScale : 1;                 // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bBlockMomentumAdd : 1;                                   // 0x0029(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsMotionNormalized : 1;                                 // 0x0029(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsInheritVelocityScaleNormalized : 1;                   // 0x0029(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bApplyMoveWhenFalling : 1;                               // 0x0029(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStopOnLanding : 1;                                      // 0x0029(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideAirControl : 1;                                 // 0x0029(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseSlopeCurve : 1;                                      // 0x0029(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStopWhenTargetReached : 1;                              // 0x0029(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableMoveControls : 1;                                 // 0x002A(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLimitedLookControl : 1;                                 // 0x002A(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInputVectorRelativeToMoveDirection : 1;                 // 0x002A(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseMovingLaunchDirection : 1;                           // 0x002A(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDirectionRelativeToTarget : 1;                          // 0x002A(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOffsetLocationByCollisionRadius : 1;                    // 0x002A(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOffsetLocationByTargetCollisionRadius : 1;              // 0x002A(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLeap : 1;                                               // 0x002A(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAlwaysCollideWithTarget : 1;                            // 0x002B(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStopOnHitWall : 1;                                      // 0x002B(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStopOnHitTargetable : 1;                                // 0x002B(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTeleport : 1;                                           // 0x002B(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRestrictTeleportToGround : 1;                           // 0x002B(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDisableLookInput : 1;                                   // 0x002B(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDisableMoveInput : 1;                                   // 0x002B(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableTargetControls : 1;                               // 0x002B(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTargetControlGrounded : 1;                              // 0x002C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTrackTarget : 1;                                        // 0x002C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStopAI : 1;                                             // 0x002C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAbortAI : 1;                                            // 0x002C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGodMode : 1;                                            // 0x002C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDemigodMode : 1;                                        // 0x002C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEndCrouch : 1;                                          // 0x002C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bForceCrouch : 1;                                        // 0x002C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUpdateCameraRotationYaw : 1;                            // 0x002D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUpdateCameraRotationPitch : 1;                          // 0x002D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCancelActionSkillsIfPlayerNotInstigator : 1;            // 0x002D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsNetworkAutonomous : 1;                                // 0x002D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPlayStartStopActionsLocally : 1;                        // 0x002D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowClientCollisionNotifications : 1;                  // 0x002D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2XC7[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        Duration;                                                // 0x0030(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		ECMMovementType                                            MovementType;                                            // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T67M[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        Speed;                                                   // 0x0070(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  SpeedScaleCurve;                                         // 0x00A8(0x0078) Edit, NativeAccessSpecifierPublic
		float                                                      CharacterRotationYawOffset;                              // 0x0120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CharacterRotationPitchOffset;                            // 0x0124(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCMMotionData                                       MotionCurves;                                            // 0x0128(0x0168) Edit, NativeAccessSpecifierPublic
		int32_t                                                    InheritVelocityType;                                     // 0x0290(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QIWD[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  InheritVelocityScaleCurve;                               // 0x0298(0x0078) Edit, NativeAccessSpecifierPublic
		float                                                      AdjustDurationBySlopeModifier;                           // 0x0310(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxStepHeight;                                           // 0x0314(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  SpeedSlopeScaleCurve;                                    // 0x0318(0x0078) Edit, NativeAccessSpecifierPublic
		ECMLedgeBehavior                                           LedgeBehavior;                                           // 0x0390(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8DSW[0x3];                                   // 0x0391(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LedgeHeight;                                             // 0x0394(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        AirControl;                                              // 0x0398(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        GravityModifier;                                         // 0x03D0(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		ECMGravityModificationType                                 GravityModificationType;                                 // 0x0408(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1FKS[0x7];                                   // 0x0409(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  GravityModifierEffectOverTime;                           // 0x0410(0x0078) Edit, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        TerminalVelocityModifier;                                // 0x0488(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		ECMTerminalVelocityModificationType                        TerminalVelocityModificationType;                        // 0x04C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VZRW[0x3];                                   // 0x04C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetReached2DThreshold;                                // 0x04C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetReachedUpThreshold;                                // 0x04C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetReachedDownThreshold;                              // 0x04CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECMMoveFBControlType                                       MoveFBControlType;                                       // 0x04D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECMMoveLRControlType                                       MoveLRControlType;                                       // 0x04D1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OYV1[0x6];                                   // 0x04D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        MoveForwardRate;                                         // 0x04D8(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        MoveBackwardRate;                                        // 0x0510(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        MoveLRRate;                                              // 0x0548(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        LookTurnScale;                                           // 0x0580(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        LookUpScale;                                             // 0x05B8(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        LookDownScale;                                           // 0x05F0(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        DropRate;                                                // 0x0628(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        MaxDiveAngle;                                            // 0x0660(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        MaxClimbAngle;                                           // 0x0698(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FRelativeDirectionData                              LaunchDirection;                                         // 0x06D0(0x0050) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FRelativeDirectionData                              MovingLaunchDirection;                                   // 0x0720(0x0050) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        LaunchAngle;                                             // 0x0770(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      LocationOffset;                                          // 0x07A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeapApexAngle;                                           // 0x07AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeapStartLandingOffsetTime;                              // 0x07B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4M8A[0x4];                                   // 0x07B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              StartAction;                                             // 0x07B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              StopAction;                                              // 0x07C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              LeapApexAction;                                          // 0x07C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              LeapLandingAction;                                       // 0x07D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitWallAngle;                                            // 0x07D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TeleportOffset;                                          // 0x07DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECMTeleportPreferenceType                                  TeleportLocationPreference;                              // 0x07E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L1ZH[0x7];                                   // 0x07E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        LimitedTargetControlDistance;                            // 0x07E8(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        TargetControlVelocity;                                   // 0x0820(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        TargetControlDelay;                                      // 0x0858(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MaxTrackingCorrectionAngle;                              // 0x0890(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TrackingVelocity;                                        // 0x0894(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AGbxCharacter*                                       ControlledCharacter;                                     // 0x0898(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnTeleported(float MoveDuration, const struct FVector& PreTeleportLocation);
		void OnTargetLocationChanged(const struct FVector& NewTargetLocation);
		void OnStop(bool bInterrupted);
		void OnStart(float MoveDuration, class AActor* TargetActor);
		void OnServerStop(bool bInterrupted);
		void OnServerStart(float MoveDuration, class AActor* TargetActor, class AActor* Instigator);
		void OnHitWorld(class AActor* HitActor, const struct FVector& HitNormal);
		void OnHitTargetable(class AActor* HitActor, const struct FVector& HitNormal);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCustomizationComponent
	 * Size -> 0x0228 (FullSize[0x03A0] - InheritedSize[0x0178])
	 */
	class UGbxCustomizationComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_7OFU[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCustomizationColorEntry>                    ColorCustomizationParameters;                            // 0x0180(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCustomizationLinkedParameterEntry>          SharedLinkedParameters;                                  // 0x0190(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCustomizationLinkedParameterEntry>          LinkedParameters;                                        // 0x01A0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		EGbxCustomizationComponentInitSourceType                   CustomizationSourceInitType;                             // 0x01B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VX9S[0x7];                                   // 0x01B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCustomizationTextureInheritanceSettings            TextureInheritanceSettings;                              // 0x01B8(0x0038) Edit, NativeAccessSpecifierPublic
		struct FGbxCustomizationContainer                          CustomizationList;                                       // 0x01F0(0x00D8) Net, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FCustomizationColorApplication>              CustomColorSelections;                                   // 0x02C8(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BW9I[0x48];                                  // 0x02D8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCustomizationApplied;                                  // 0x0320(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCustomizationRemoved;                                  // 0x0330(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UGbxCustomizationComponent*                          LinkedCustomizationSource;                               // 0x0340(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<class UMeshComponent*, struct FMaterialArray>         CustomMaterials;                                         // 0x0348(0x0050) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		bool                                                       bUseCustomMaterials;                                     // 0x0398(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F319[0x7];                                   // 0x0399(0x0007) MISSED OFFSET (PADDING)

	public:
		void ServerApplyCustomizationData(class UGbxCustomizationData* CustomizationToApply, int32_t OptionalCustomizationId);
		void ServerApplyCustomColor(int32_t CustomColorIndex, const struct FVector& InAppliedColor, const struct FVector& InSplitColor, bool InUseDefaultColor, bool InUseDefaultSplitColor);
		bool RemoveCustomization(class UGbxCustomizationData* Customization);
		void OnRep_CustomColorSelections();
		void LinkToCustomization(class UGbxCustomizationComponent* SourceComponent);
		void LinkedCustomizationRemoved(class UGbxCustomizationData* Customization);
		void LinkedCustomizationApplied(class UGbxCustomizationData* Customization);
		bool GetDefaultCustomSplitColor(int32_t SelectionIndex, struct FLinearColor* DefaultSplitColor);
		bool GetDefaultCustomColor(int32_t SelectionIndex, struct FLinearColor* DefaultColor);
		void CopyFromCustomization(class UGbxCustomizationComponent* SourceComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCustomizationManager
	 * Size -> 0x0018 (FullSize[0x0470] - InheritedSize[0x0458])
	 */
	class AGbxCustomizationManager : public AActor
	{
	public:
		TArray<struct FCustomizationStreamingEntry>                CustomizationStreamingEntries;                           // 0x0458(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JV8K[0x8];                                   // 0x0468(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnCustomizationAssetLoaded();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DamageBaseComponent
	 * Size -> 0x0050 (FullSize[0x01C8] - InheritedSize[0x0178])
	 */
	class UDamageBaseComponent : public UActorComponent
	{
	public:
		class UTeamComponent*                                      CachedTeamComponent;                                     // 0x0178(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTargetableComponent*                                CachedTargetableComponent;                               // 0x0180(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FRegisteredConditionalDamageValueModifier>   ConditionalValueModifiers;                               // 0x0188(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FRegisteredConditionalDamageCriticalModifier> ConditionalCritModifiers;                                // 0x0198(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UConditionalDamageTypeModifier*>              ConditionalTypeModifiers;                                // 0x01A8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UConditionalDamageHitRegionModifier*>         ConditionalHitRegionModifiers;                           // 0x01B8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DamageCauserComponent
	 * Size -> 0x0128 (FullSize[0x02F0] - InheritedSize[0x01C8])
	 */
	class UDamageCauserComponent : public UDamageBaseComponent
	{
	public:
		unsigned char                                              UnknownData_N66X[0x20];                                  // 0x01C8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCausedAnyDamage;                                       // 0x01E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCausedDeath;                                           // 0x01F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FGLJ[0x18];                                  // 0x0208(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCausedHealing;                                         // 0x0220(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHitFriendly;                                           // 0x0230(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EDamageCausedModificationStrategy                          DefaultModificationContextStrategy;                      // 0x0240(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YIC9[0x3];                                   // 0x0241(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FAttitudeDamageRules                                AttitudeDamageRules;                                     // 0x0244(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCanHurtSelf;                                            // 0x0248(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2WC9[0x3];                                   // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAttributeFloat                                  StatusEffectChanceModifierScalar;                        // 0x024C(0x000C) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  StatusEffectDamageModifierScalar;                        // 0x0258(0x000C) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  StatusEffectDurationModifierScalar;                      // 0x0264(0x000C) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FStatusEffectModifiers>                      StatusEffectModifiers;                                   // 0x0270(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  DamageDealtMultiplier;                                   // 0x0280(0x000C) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  RadiusDamage_RadiusMultiplier;                           // 0x028C(0x000C) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  RadiusDamage_DamageMultiplier;                           // 0x0298(0x000C) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeInteger                                ShouldIgnoreEnemyElementalResistance;                    // 0x02A4(0x000C) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyInstigatorSkillDamageModifier;                     // 0x02B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_99H2[0x3];                                   // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAttributeFloat                                  DefaultCriticalHitMultiplier;                            // 0x02B4(0x000C) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UConditionalDamageModifier*>                  DefaultConditionalDamageModifiers;                       // 0x02C0(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      EnemyReflectionChance;                                   // 0x02D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4YIY[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FReflectedDamageParams                              EnemyReflectionParams;                                   // 0x02D8(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		void UnregisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier);
		void RegisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DamageComponent
	 * Size -> 0x06B0 (FullSize[0x0878] - InheritedSize[0x01C8])
	 */
	class UDamageComponent : public UDamageBaseComponent
	{
	public:
		unsigned char                                              UnknownData_XA5X[0x38];                                  // 0x01C8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTakeAnyDamage;                                         // 0x0200(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerMeleeHit;                                        // 0x0210(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTakeAnyHealing;                                        // 0x0220(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHealthDepleted;                                        // 0x0230(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BCXG[0x18];                                  // 0x0240(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDeath;                                                 // 0x0258(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I3LD[0x18];                                  // 0x0268(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHitByFriendly;                                         // 0x0280(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H42L[0x130];                                 // 0x0290(0x0130) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHitReaction;                                           // 0x03C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FHitReactionState                                   HitReactions;                                            // 0x03D0(0x0290) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              bShowDamageNumbers : 1;                                  // 0x0660(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShowImmuneFeedbackInGodMode : 1;                        // 0x0660(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAlwaysBlockWeapons : 1;                                 // 0x0660(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIgnoreDamageAreaVisibilityChecks : 1;                   // 0x0660(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDieWhenHealthDepleted : 1;                              // 0x0660(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SA12[0x7];                                   // 0x0661(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDeathData*                                          DeathData;                                               // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDamageComponentHealthMode                                 HealthMode;                                              // 0x0670(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6VLJ[0x3];                                   // 0x0671(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_ZZQW[0x4];                                   // 0x0674(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHealthType>                                 HealthInformation;                                       // 0x0678(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FSimpleHealthInfo                                   SimpleHealthInformation;                                 // 0x0688(0x0058) Edit, Net, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  DamageTakenMultiplier;                                   // 0x06E0(0x000C) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  RadiusDamageTakenMultiplier;                             // 0x06EC(0x000C) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  StatusEffectChanceModifierScalar;                        // 0x06F8(0x000C) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  StatusEffectDamageModifierScalar;                        // 0x0704(0x000C) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  StatusEffectDurationModifierScalar;                      // 0x0710(0x000C) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JV4X[0x4];                                   // 0x071C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStatusEffectModifiers>                      StatusEffectModifiers;                                   // 0x0720(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      MinimumDamageLaunchVelocity;                             // 0x0730(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseBoundForCylinderTest : 1;                            // 0x0734(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_85PF[0x3];                                   // 0x0735(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LaunchVerticalDampening;                                 // 0x0738(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSelfInflictedLaunchVelocity;                          // 0x073C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImpactData*                                         SplatterEffect;                                          // 0x0740(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseProtectionTimer;                                     // 0x0748(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VIAH[0x7];                                   // 0x0749(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSyncedHitReactionData                              DeathHitReaction;                                        // 0x0750(0x0040) Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8CA5[0x4];                                   // 0x0790(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDamageGoreModifiers                                DeathGoreModifiers;                                      // 0x0794(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3H2F[0x4];                                   // 0x079C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   LastHitByPlayer;                                         // 0x07A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvertDeathChance;                                        // 0x07A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      IntrinsicArmor;                                          // 0x07AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGbxAttributeFloat                                  SelfReflectionChance;                                    // 0x07B0(0x000C) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGbxAttributeFloat                                  SelfReflectionDamageTakenScale;                          // 0x07BC(0x000C) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGbxAttributeFloat                                  SelfReflectionDamageScale;                               // 0x07C8(0x000C) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGbxAttributeInteger                                SelfReflectionTowardsAttacker;                           // 0x07D4(0x000C) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              SelfReflectionDamageType;                                // 0x07E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bPassDamageToParent : 1;                                 // 0x07E8(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bDamageOnlyAppliesToParent : 1;                          // 0x07E8(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bCanDamageCorpse : 1;                                    // 0x07E8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XOM6[0x7];                                   // 0x07E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UConditionalDamageModifier*>                  DefaultConditionalDamageModifiers;                       // 0x07F0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		TArray<struct FDamageReactionEvent_DamageComponent>        DamageEvents;                                            // 0x0800(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UHitRegionComponent*                                 CachedHitRegionComponent;                                // 0x0810(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDamageComponent*                                    ParentDamageComponent;                                   // 0x0818(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AController*                                         LastHitBy;                                               // 0x0820(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GLEV[0x18];                                  // 0x0828(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bGodMode : 1;                                            // 0x0840(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bDemigodMode : 1;                                        // 0x0840(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TG1B : 1;                                    // 0x0840(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bCurrentlyDead : 1;                                      // 0x0840(0x0001) BIT_FIELD Net, Transient, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z57Q[0x27];                                  // 0x0841(0x0027) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   ImpactPhysicalMaterialOverride;                          // 0x0868(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSuppressOnDeathCall;                                    // 0x0870(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_73UR[0x7];                                   // 0x0871(0x0007) MISSED OFFSET (PADDING)

	public:
		void UnregisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier);
		void SetSelfReflectedDamageType(class UClass* DamageType);
		void SetGodMode(bool bInGodMode);
		void SetDemiGodMode(bool bInDemiGodMode);
		void SetCurrentShield(float NewCurrentShield);
		void SetCurrentHealth(float NewCurrentHealth);
		void RegisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier);
		void ReceiveHealthDepleted(class UDamageCauserComponent* DamageCauser);
		void ReceiveAnyHealing(float Healing, class AActor* HealInstigator);
		void ReceiveAnyDamage(float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
		void OnRep_HealthInformation();
		void OnRep_DeathHitReaction();
		void OnRep_bCurrentlyDead();
		void OnOwnerExperienceLevelChanged(int32_t OldExperienceLevel, int32_t NewExperienceLevel);
		void OnHealthResourceNowNotDepleted(const struct FGameResourcePoolReference& ResourcePool);
		void OnHealthResourceNowDepleted(const struct FGameResourcePoolReference& ResourcePool);
		bool IsInGodMode();
		bool IsInDemiGodMode();
		bool IsDamageOverkill(float DamageAmount, float OverkillThreshold);
		void GetValidDamageEventFunctionNames(TArray<class FName>* Names);
		float GetTotalMaxHealth();
		float GetMaxShield();
		float GetMaxHealth();
		float GetCurrentShield();
		float GetCurrentHealthPercent();
		float GetCurrentHealth();
		void BroadcastPlayImpactSplatterEffect(class UImpactData* ImpactData, const struct FVector_NetQuantize100& HitLocation, const struct FVector_NetQuantizeNormal& HitDirection, float DamageSeverity);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DamageFilter
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UDamageFilter : public UObject
	{
	public:
		bool                                                       bExactDamageSourceClass;                                 // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_66OD[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageSource;                                            // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bExactDamageTypeClass;                                   // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1DHP[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageType;                                              // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxCondition*                                       ConditionSelf;                                           // 0x0048(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxCondition*                                       ConditionAttacker;                                       // 0x0050(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bOnlyAoEDamage : 1;                                      // 0x0058(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bMustNotBeSelfDamage : 1;                                // 0x0058(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bUseRandomChance : 1;                                    // 0x0058(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_952A[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        RandomChance;                                            // 0x0060(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DamageGlobalsData
	 * Size -> 0x0218 (FullSize[0x0248] - InheritedSize[0x0030])
	 */
	class UDamageGlobalsData : public UGbxDataAsset
	{
	public:
		struct FProtectionTimerSettings                            ProtectionTimerSettings;                                 // 0x0030(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_25XB[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        DefaultInstigatorSelfDamageScale;                        // 0x0040(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              DefaultHealingDamageType;                                // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImpactData*                                         DefaultHealingImpact;                                    // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        GlobalAIDamageScale;                                     // 0x0088(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FLevelBasedDamageScale>                      PlayerDamageScaleByLevelDifference;                      // 0x00C0(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FLevelBasedDamageScale>                      AIDamageScaleByLevelDifference;                          // 0x00D0(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FRuntimeFloatCurve                                  SplatterProbabilityCurve;                                // 0x00E0(0x0078) Edit, Protected, NativeAccessSpecifierProtected
		struct FRuntimeFloatCurve                                  SplatterTraceDistanceCurve;                              // 0x0158(0x0078) Edit, Protected, NativeAccessSpecifierProtected
		float                                                      SplatterDirectionSpread;                                 // 0x01D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GibLifeSpan;                                             // 0x01D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                GibCollisionProfileName;                                 // 0x01D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                GibCollisionProfileNameAttached;                         // 0x01E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class FName>                                        GibMaterialParameterResetList;                           // 0x01E8(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TMap<class FString, struct FDamageLocalizationSettings>    LanguageToTextureMap;                                    // 0x01F8(0x0050) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DamageModifierComponent
	 * Size -> 0x0040 (FullSize[0x01B8] - InheritedSize[0x0178])
	 */
	class UDamageModifierComponent : public UActorComponent
	{
	public:
		TArray<class UConditionalDamageValueModifier*>             ConditionalValueModifiers;                               // 0x0178(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UConditionalDamageCriticalModifier*>          ConditionalCritModifiers;                                // 0x0188(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UConditionalDamageTypeModifier*>              ConditionalTypeModifiers;                                // 0x0198(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UConditionalDamageHitRegionModifier*>         ConditionalHitRegionModifiers;                           // 0x01A8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		void UnregisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier);
		void RegisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DamageOverTimeManager
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UDamageOverTimeManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_55JM[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDamageOverTimeInstance>                     DamageInstances;                                         // 0x0030(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZAPN[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnParticleSystemStopped(class UParticleSystemComponent* ParticleSystem);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DamageSource
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UDamageSource : public UObject
	{
	public:
		struct FDamageModifierAttributeCollection                  ModifierAttributes;                                      // 0x0028(0x0010) Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        AIInstigatedDamageScale;                                 // 0x0038(0x0038) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FDamageSourceHealthTypeModifier>             HealthTypeModifiers;                                     // 0x0070(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bCanCauseCriticals;                                      // 0x0080(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCollectForHitReactions;                                 // 0x0081(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreCooldown;                                         // 0x0082(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PVE9[0x5];                                   // 0x0083(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxDamageType
	 * Size -> 0x00E8 (FullSize[0x0128] - InheritedSize[0x0040])
	 */
	class UGbxDamageType : public UDamageType
	{
	public:
		unsigned char                                              UnknownData_4J76[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DamageTypeDisplayName;                                   // 0x0048(0x0018) Edit, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                DamageEffectVerb;                                        // 0x0060(0x0018) Edit, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                DamageTypeBaseDescription;                               // 0x0078(0x0018) Edit, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FLinearColor                                        DamageColor;                                             // 0x0090(0x0010) Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DamageIconFrameName;                                     // 0x00A0(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsHealingType;                                          // 0x00B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDoT;                                                  // 0x00B1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J0KK[0x2];                                   // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InnerDamageRadiusPercent;                                // 0x00B4(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OuterDamageRadiusPercent;                                // 0x00B8(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRadiusDamageScalar;                                   // 0x00BC(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x00C0(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FDamageModifierAttributeCollection                  ModifierAttributes;                                      // 0x00E0(0x0010) Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 OnlyApplyToThisHealthType;                               // 0x00F0(0x0010) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		class UStatusEffectData*                                   StatusEffectData;                                        // 0x0100(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDamageSurfaceModifier>                      SurfaceDamageModifiers;                                  // 0x0108(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UUIStatData*>                                 UIStats;                                                 // 0x0118(0x0010) Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		bool IsElementalType();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryContext_EnvQueryParam
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_EnvQueryParam : public UEnvQueryContext
	{
	public:
		class FName                                                DefaultBlackboardKeyName;                                // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowsUnboundContext;                                    // 0x0030(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UJVD[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.FirstPersonComponent
	 * Size -> 0x03E4 (FullSize[0x055C] - InheritedSize[0x0178])
	 */
	class UFirstPersonComponent : public UActorComponent
	{
	public:
		class UClass*                                              ConfigData;                                              // 0x0178(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxSkeletalMeshComponent*                           Arms;                                                    // 0x0180(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxSkeletalMeshComponent*                           Legs;                                                    // 0x0188(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FirstPersonRootBone;                                     // 0x0190(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CameraSocket;                                            // 0x0198(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PrimaryHandWeaponSocket;                                 // 0x01A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       BaseTransformsAnimation;                                 // 0x01A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4O03[0x90];                                  // 0x01B0(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CrouchTransitionDuration;                                // 0x0240(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CrouchTransitionEasing;                                  // 0x0244(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ILPH[0x20];                                  // 0x0248(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FViewLeadingTranslationInfo>                 TranslationLeadingList;                                  // 0x0268(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FViewLeadingTranslationInfo                         TranslationLeading;                                      // 0x0278(0x002C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XMKL[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FViewLeadingRotationInfo>                    RotationleadingList;                                     // 0x02A8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FViewLeadingRotationInfo                            RotationLeading;                                         // 0x02B8(0x003C) NoDestructor, NativeAccessSpecifierPublic
		struct FViewLeadingRotationInfo                            ZoomRotationLeading;                                     // 0x02F4(0x003C) Edit, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                ZoomRotationSocket;                                      // 0x0330(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShotOffsetSpeed;                                         // 0x0338(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShotOffsetRecoverySpeed;                                 // 0x033C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MaxViewModelImpulseTranslationOffset;                    // 0x0340(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            MaxViewModelImpulseRotationOffset;                       // 0x034C(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UBlendSpaceBase*                                     FlinchBlendSpace;                                        // 0x0358(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FlinchAnimSlotName;                                      // 0x0360(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultFlinchBlendInTime;                                // 0x0368(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultFlinchBlendOutTime;                               // 0x036C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterruptFlinchBlendInTime;                              // 0x0370(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FlinchInterruptThreshold;                                // 0x0374(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomedFlinchWeight;                                      // 0x0378(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G3IT[0x4];                                   // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnFirstPersonCreated;                                    // 0x0380(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NS22[0x30];                                  // 0x0390(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  ViewModelOffsetList;                                     // 0x03C0(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X7CB[0x30];                                  // 0x03D0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CurrentShotRotationOffset;                               // 0x0400(0x000C) Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7ZDO[0x4];                                   // 0x040C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BaseViewModelLocationOffset;                             // 0x0410(0x000C) Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E0ES[0x2C];                                  // 0x041C(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USceneComponent*>                             CreatedFirstPersonComponents;                            // 0x0448(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0EHA[0x8];                                   // 0x0458(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTrackedFirstPersonComponent>                TopLevelComponents;                                      // 0x0460(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1RTI[0x4];                                   // 0x0470(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            TargetShotRotationOffset;                                // 0x0474(0x000C) Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HVFR[0x10];                                  // 0x0480(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CurrentRelativeLocation;                                 // 0x0490(0x000C) Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             DefaultTranslationOffset;                                // 0x049C(0x000C) Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QOHZ[0xB4];                                  // 0x04A8(0x00B4) Fix size for supers

	public:
		void SetBaseEyeToWeaponTransform(const struct FTransform& NewWeaponTransform);
		class USceneComponent* GetFirstPersonComponentByName(const class FName& Name);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxGameInstance
	 * Size -> 0x0128 (FullSize[0x01F0] - InheritedSize[0x00C8])
	 */
	class UGbxGameInstance : public UGameInstance
	{
	public:
		unsigned char                                              UnknownData_WOJU[0x20];                                  // 0x00C8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMenuStash                                          MenuStashes[0x4];                                        // 0x00E8(0x0040) Transient, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     CharacterMassPresets;                                    // 0x0128(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDataTable*                                          CachedCharacterMassPresets;                              // 0x0140(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     ForcePresets;                                            // 0x0148(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDataTable*                                          CachedForcePresets;                                      // 0x0160(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     SpawnCostPresets;                                        // 0x0168(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDataTable*                                          CachedSpawnCostPresets;                                  // 0x0180(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UCinematicModeData*>                          CinematicModeStack;                                      // 0x0188(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class UCinematicModeData*                                  CinematicMode;                                           // 0x0198(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGbxProjectileManager*                              ProjectileManager;                                       // 0x01A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FSharedPickupInventoryActor>                 SharedPickupInventoryActors;                             // 0x01A8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HQRU[0x38];                                  // 0x01B8(0x0038) MISSED OFFSET (PADDING)

	public:
		void DebugLoadStartupAssets();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GlobalAIData
	 * Size -> 0x00F0 (FullSize[0x0120] - InheritedSize[0x0030])
	 */
	class UGlobalAIData : public UGbxDataAsset
	{
	public:
		struct FGameplayTag                                        CombatTag;                                               // 0x0030(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        PassiveTag;                                              // 0x0038(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AITimeToRememberDirectAttacks;                           // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AITimeToRememberNonAttackingEnemies;                     // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AITimeToRememberHiddenEnemies;                           // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5LKG[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHitReactionTag*                                     JumpHitReactionDeathOverride;                            // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              JumpHitLiveReactionLayer;                                // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceOfPlayingFirstNoticerAggroAnimation;               // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceOfPlayingSecondNoticerAggroAnimation;              // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseVariableAccuracy;                                    // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0OEN[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        TimeToBestAccuracy;                                      // 0x0070(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        DamagePctToWorstAccuracy;                                // 0x00A8(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        DamagePctDecayRate;                                      // 0x00E0(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinAccuracy;                                             // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A3R2[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxGlobalsData
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UGbxGlobalsData : public UGbxDataAsset
	{
	public:
		unsigned char                                              DamageGlobalsData[0x28];                                 // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxGameSystemCore.GbxGlobalsData.DamageGlobalsData
		class UGbxGameplayGlobals*                                 GameplayGlobals;                                         // 0x0058(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              StatusEffectGlobals[0x28];                               // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxGameSystemCore.GbxGlobalsData.StatusEffectGlobals
		class UAssetMappingData*                                   AssetMapping;                                            // 0x0088(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.HitRegionComponent
	 * Size -> 0x0038 (FullSize[0x01B0] - InheritedSize[0x0178])
	 */
	class UHitRegionComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_HQ2Z[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHitRegionData*                                      DefaultHitRegion;                                        // 0x0180(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FHitRegionState>                             HitRegions;                                              // 0x0188(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UWDP[0x8];                                   // 0x0198(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              CachedMesh;                                              // 0x01A0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDamageComponent*                                    CachedDamageComponent;                                   // 0x01A8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void TriggerClientEvent(const struct FDamageReactionEventSummary& EventSummary);
		void GetValidDamageEventFunctionNames(TArray<class FName>* Array);
		void GetValidAssociatedComponentNames(TArray<class FName>* Array);
		float GetHitRegionPercentHealth(class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent);
		float GetHitRegionMaxHealth(class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent);
		float GetHitRegionCurrentHealth(class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.HitRegionData
	 * Size -> 0x0230 (FullSize[0x0260] - InheritedSize[0x0030])
	 */
	class UHitRegionData : public UGbxDataAsset
	{
	public:
		class FName                                                HitRegionName;                                           // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        BoneNames;                                               // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              bCanEverTakeRadiusDamage : 1;                            // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCriticalHit : 1;                                        // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowRadiusDamage : 1;                                  // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShouldBlockAreaDamage : 1;                              // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowRadiusDamageToBeConvertedToImpactDamage : 1;       // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTrackDamage : 1;                                        // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3VN7[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitRegionHealthParams                              HealthParams;                                            // 0x0050(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseDamageScale;                                         // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XP7A[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        DamageScale;                                             // 0x0070(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bShowDamageNumbers;                                      // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanReflect;                                             // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WC08[0x2];                                   // 0x00AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReflectionChance;                                        // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanRicochet;                                            // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A1ZO[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RicochetChance;                                          // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRicochetIfReflectionFails;                              // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyReflectToAttacker;                                  // 0x00B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_82ED[0x2];                                   // 0x00BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReflectionAccuracyModifier;                              // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IncomingReflectedDamageScale;                            // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutgoingReflectedDamageScale;                            // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableBulletMagnetism;                                 // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O5PF[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        BulletMagnetismOverrideBoneNames;                        // 0x00D0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bOverrideImpactEffect;                                   // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PWKI[0xF];                                   // 0x00E1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FImpactResponseEffect                               EffectOverride;                                          // 0x00F0(0x0140) Edit, NativeAccessSpecifierPublic
		bool                                                       bPlayImactEffectWithNoDamage;                            // 0x0230(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoSplatterEffect;                                       // 0x0231(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J5MY[0x6];                                   // 0x0232(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImpactData*                                         SplatterEffect;                                          // 0x0238(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     CustomDamageNumberParticleSystem;                        // 0x0240(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableHitReactions;                                    // 0x0248(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8YC6[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   PhysicalMaterial;                                        // 0x0250(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EDamageSurfaceType                                         DefaultDamageSurface;                                    // 0x0258(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7G07[0x7];                                   // 0x0259(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ActorPartData
	 * Size -> 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
	 */
	class UActorPartData : public UGbxDataAsset
	{
	public:
		class UEnum*                                               PartTypeEnum;                                            // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              PartType;                                                // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2YB8[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGestaltData*                                        GestaltData;                                             // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                GestaltMeshPartName;                                     // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class FName>                                        AdditionalGestaltMeshPartNames;                          // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		TArray<struct FMultiSelectionGestaltPartNameData>          MultiSelectionGestaltPartNames;                          // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        MinGameStage;                                            // 0x0070(0x0038) Edit, DisableEditOnTemplate, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        MaxGameStage;                                            // 0x00A8(0x0038) Edit, DisableEditOnTemplate, NoDestructor, Protected, NativeAccessSpecifierProtected
		TArray<class UActorPartData*>                              Dependencies;                                            // 0x00E0(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		TArray<class UActorPartData*>                              Excluders;                                               // 0x00F0(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected

	public:
		void EnumeratePossibleExcluders(TArray<class UActorPartData*>* OutPartList);
		void EnumeratePossibleDependencies(TArray<class UActorPartData*>* OutPartList);
		void EnumerateOtherParts(TArray<class UActorPartData*>* OutPartList);
		void EnumerateGestaltMeshPartNames(TArray<class FName>* OutPartNameList);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DataTableAttributeValueResolver
	 * Size -> 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
	 */
	class UDataTableAttributeValueResolver : public UAttributePropertyValueResolver
	{
	public:
		struct FDataTableRowHandle                                 DataTableRow;                                            // 0x00B0(0x0010) Edit, DisableEditOnTemplate, NoDestructor, Protected, NativeAccessSpecifierProtected
		class FString                                              DataTableColumn;                                         // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void GetDataTableColumnNames(TArray<class FString>* ValueNames);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DataTableFunctionAttributeValueResolver
	 * Size -> 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
	 */
	class UDataTableFunctionAttributeValueResolver : public UDataTableAttributeValueResolver
	{
	public:
		class UScriptStruct*                                       DataTableStruct;                                         // 0x00D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		struct FDataTableRowHandle GetDataTableRow(class UObject* Context);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.LadderInteractData
	 * Size -> 0x0210 (FullSize[0x0240] - InheritedSize[0x0030])
	 */
	class ULadderInteractData : public UGbxDataAsset
	{
	public:
		float                                                      RequiredViewAlignment;                                   // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RequiredRearViewAlignment;                               // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanMountLadderFromTopWhileFacing;                       // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X1H3[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxVerticalSpeedToGrabLadder;                            // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      JumpRegrabDelay;                                         // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TopEnterAnimSyncTime;                                    // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TopExitAnimSyncTime;                                     // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExitLocationDepthOffset;                                 // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExitingTopThresholdHeightOffset;                         // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnteringTopTargetHeightOffset;                           // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnteringTopFeetToLadderThreshold;                        // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QXG8[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  LadderTopMountCurveHorz;                                 // 0x0060(0x0078) Edit, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  LadderTopMountCurveVert;                                 // 0x00D8(0x0078) Edit, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  LadderTopDismountCurveHorz;                              // 0x0150(0x0078) Edit, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  LadderTopDismountCurveVert;                              // 0x01C8(0x0078) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.NavComponent
	 * Size -> 0x0000 (FullSize[0x0178] - InheritedSize[0x0178])
	 */
	class UNavComponent : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxSkeletalMeshComponent
	 * Size -> 0x04F0 (FullSize[0x1410] - InheritedSize[0x0F20])
	 */
	class UGbxSkeletalMeshComponent : public USkeletalMeshComponent
	{
	public:
		unsigned char                                              UnknownData_JVJC[0x8];                                   // 0x0F20(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class USkeletalMeshComponent>               ParentAnimationComponent;                                // 0x0F28(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4YD5[0x8];                                   // 0x0F30(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGestaltPartListData*                                GestaltPartList;                                         // 0x0F38(0x0008) Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UGestaltPartData_Mesh*>                       GestaltMeshParts;                                        // 0x0F40(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		struct FReplicatedGestaltPartsData                         ReplicatedGestaltParts;                                  // 0x0F50(0x0018) Net, Transient, RepNotify, Protected, NativeAccessSpecifierProtected
		int32_t                                                    GestaultSeed;                                            // 0x0F68(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowDynamicallyAddedForwardDynamicsNodes;              // 0x0F6C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5HQQ[0x3];                                   // 0x0F6D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBoneModInstance>                            BoneModInstances;                                        // 0x0F70(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FUEH[0x8];                                   // 0x0F80(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStretchBonesInstance>                       StretchBonesInstances;                                   // 0x0F88(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XN30[0x8];                                   // 0x0F98(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxBoneModifyProfile*                               BoneModifyProfile;                                       // 0x0FA0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplicateBoneMods;                                      // 0x0FA8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5OUX[0x7];                                   // 0x0FA9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneModifyProfileData                              BoneModifyProfileData;                                   // 0x0FB0(0x0018) Edit, Net, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D7OW[0x8];                                   // 0x0FC8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastUpdateTime;                                          // 0x0FD0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FBMPOverride>                                CachedGlobalBMP;                                         // 0x0FD8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class UGlobalBoneModifyProfileState*>               GlobalBMPRepArray;                                       // 0x0FE8(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPublic
		float                                                      NoBodyMass;                                              // 0x0FF8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpulseMultiplier;                                       // 0x0FFC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KIBU[0x60];                                  // 0x1000(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImpactData*                                         DefaultImpactData;                                       // 0x1060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, class UImpactData*>                      BodyImpactDataOverrides;                                 // 0x1068(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UGbxCustomizationTargetData*>                 CustomizationTargets;                                    // 0x10B8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FStretchAnimData                                    StretchAnimData;                                         // 0x10C8(0x01E0) Transient, NativeAccessSpecifierPublic
		class UGbxAnimBlueprintProfile*                            AnimBPProfile;                                           // 0x12A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGaitScalingOverride;                                    // 0x12B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MM7P[0x7];                                   // 0x12B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGaitScalingSettings                                GaitScalingSettings;                                     // 0x12B8(0x0038) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GL04[0x18];                                  // 0x12F0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseAggregateSimulationSleepCheck;                       // 0x1308(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3GX6[0x3];                                   // 0x1309(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AggregateSimulationSleepCheckSeconds;                    // 0x130C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AggregateSimulationSleepCheckDistance;                   // 0x1310(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_626B[0x44];                                  // 0x1314(0x0044) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimUpdateRateParameters                           UpdateRateParametersOverride;                            // 0x1358(0x0088) Edit, NativeAccessSpecifierPrivate
		bool                                                       bOverrideUpdateRateParameters;                           // 0x13E0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_APK6[0xF];                                   // 0x13E1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAnimPoseMatch                                   PoseMatch;                                               // 0x13F0(0x0020) Edit, NativeAccessSpecifierPrivate

	public:
		void ShowGestaltMeshParts(TArray<class UGestaltPartData_Mesh*> Parts, bool bLocalOnly);
		void ShowGestaltMeshPart(class UGestaltPartData_Mesh* GestaltMeshPart, bool bLocalOnly);
		void SetUpdateOverrideValues(TArray<float> UpdateRateOverrides, bool bEnableOverrideProperties);
		void SetParentAnimationComponent(class USkeletalMeshComponent* ParentComponent);
		void SetGestaltPartList(class UGestaltPartListData* NewGestaltPartList);
		void RunPoseTest();
		void OnRep_GlobalBoneMod();
		void OnRep_GestaltMeshParts();
		void LinkSkelMeshAnimInstances(TArray<class USkeletalMeshComponent*> InLinkedSkelMeshComponents);
		void LinkSkelMeshAnimInstance(class USkeletalMeshComponent* InLinkedSkelMeshComponent);
		bool IsGestaltMeshPartVisible(class UGestaltPartData_Mesh* GestaltMeshPart);
		bool IsCustomizationTargetFor(class UGbxCustomizationTargetData* TargetToTest);
		void HideGestaltMeshParts(TArray<class UGestaltPartData_Mesh*> Parts, bool bLocalOnly);
		void HideGestaltMeshPart(class UGestaltPartData_Mesh* GestaltMeshPart, bool bLocalOnly);
		TArray<float> GetUpdateOverrideValues();
		void GetAvailableBoneNames(TArray<class FName>* Array);
		void CopyGestaltPartList(class AActor* GestaltPartListSource);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.PawnAttachSlotComponent
	 * Size -> 0x0270 (FullSize[0x0620] - InheritedSize[0x03B0])
	 */
	class UPawnAttachSlotComponent : public UUsableComponent
	{
	public:
		class FScriptMulticastDelegate                             OnAttachStarted;                                         // 0x03B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAttachFinished;                                        // 0x03C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDetachStarted;                                         // 0x03D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDetachFinished;                                        // 0x03E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAttachStateChanged;                                    // 0x03F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FPawnAttachSlotState                                AttachState;                                             // 0x0400(0x0040) Net, Transient, RepNotify, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FPawnSceneAttachmentInfo                            PersistentAttachInfo;                                    // 0x0440(0x0028) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		class UClass*                                              PersistentPawnAction;                                    // 0x0468(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FAttachSlotAnimSet>                          AnimSets;                                                // 0x0470(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FPawnAttachmentTransition                           AttachTransition;                                        // 0x0480(0x0048) Deprecated, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FPawnAttachmentTransition                           DetachTransition;                                        // 0x04C8(0x0048) Deprecated, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		bool                                                       bManualAttachTransitionDuration;                         // 0x0510(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEvaluateAttachTransitionBeforeModifyingPawn;            // 0x0511(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5QIZ[0x6];                                   // 0x0512(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPawnAttachTransition>                       AttachTransitions;                                       // 0x0518(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		bool                                                       bOffsetFallbackDetachLocationByActorHeight;              // 0x0528(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseBaseOwnerLocationForSafeLocationTrace;               // 0x0529(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseBaseOwnerLocationForFallbackDetachLocation;          // 0x052A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9R2F[0x5];                                   // 0x052B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPawnDetachTransition>                       DetachTransitions;                                       // 0x0530(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		EAttachmentPossessionRule                                  PossessionRule;                                          // 0x0540(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPossessWhenAttachmentStarts;                            // 0x0541(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRestorePossessionWhenDetachStarts;                      // 0x0542(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V6WV[0x1];                                   // 0x0543(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bIsHijackable : 1;                                       // 0x0544(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCanHijackPlayer : 1;                                    // 0x0544(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCanHijackFriendly : 1;                                  // 0x0544(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCanBeUsedByPlayers : 1;                                 // 0x0544(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bForceUntargetable : 1;                                  // 0x0544(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bForceGodMode : 1;                                       // 0x0544(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bForceHidden : 1;                                        // 0x0544(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bForceNoCollision : 1;                                   // 0x0544(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bDisableHitReaction : 1;                                 // 0x0545(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCollideDuringTransitions : 1;                           // 0x0545(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bMirrorTeam : 1;                                         // 0x0545(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bForceUnCrouch : 1;                                      // 0x0545(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIgnoreCollisionWithBase : 1;                            // 0x0545(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bBaseIgnoreCollisionWithPawn : 1;                        // 0x0545(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bForceSkeletalOptimizations : 1;                         // 0x0545(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bDisableDelayRootMotionOneFrameDuringDetach : 1;         // 0x0545(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bDisableOverlapOptimization : 1;                         // 0x0546(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RKOD[0x1];                                   // 0x0547(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bGenerateOverlapEventOnDetach;                           // 0x0548(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J0VT[0xD7];                                  // 0x0549(0x00D7) MISSED OFFSET (PADDING)

	public:
		void SetPersistentAttachSocketName(const class FName& SocketName);
		void SetDetachabilityLocked(bool bLock, const class FName& Reason);
		void RequestDetachPawn();
		void OnRep_AttachState();
		void ManuallyFinishAttach();
		bool IsOccupied(bool bIncludeDetaching);
		void HandleActorDestroyed(class AActor* Actor);
		struct FTransform GetPersistentAttachSocketTransform();
		class APawn* GetOccupant(bool bIncludeDetaching);
		EPawnAttachStatus GetAttachStatus();
		void DetachPawn(bool bInstant, bool bSkipPlacement);
		void AttachPawn(class APawn* AttachingPawn, bool bInstant);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxProfile
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UGbxProfile : public USaveGame
	{
	public:
		unsigned char                                              UnknownData_2OBU[0x1];                                   // 0x0028(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bDisplayVehicleSpeedAsMPH;                               // 0x0029(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableAimAssist;                                        // 0x002A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bGamepadInvertLook;                                      // 0x002B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bGamepadInvertTurn;                                      // 0x002C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bGamepadInvertMove;                                      // 0x002D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bGamepadInvertStrafe;                                    // 0x002E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableMouseAcceleration;                                // 0x002F(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableGamepadInput;                                     // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseClassicGamepadInput;                                 // 0x0031(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableVibration;                                        // 0x0032(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableTriggerFeedback;                                  // 0x0033(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EGbxGlyphSetOption                                         GlyphMode;                                               // 0x0034(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInvertMousePitch;                                       // 0x0035(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableMouseSmoothing;                                   // 0x0036(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KJY7[0x1];                                   // 0x0037(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MouseScale;                                              // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShowDamageNumbers;                                      // 0x003C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShowDamageNumberIcons;                                  // 0x003D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableTrainingMessages;                                 // 0x003E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DAAW[0x1];                                   // 0x003F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bCenterCrosshair;                                        // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bToggleSprint;                                           // 0x0041(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bToggleCrouch;                                           // 0x0042(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCensorContent;                                          // 0x0043(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MasterVolume;                                            // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MusicVolume;                                             // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SoundEffectsVolume;                                      // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      VOVolume;                                                // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      VoiceVolume;                                             // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableOptionalVO;                                       // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPushToTalk;                                             // 0x0059(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableControllerAudio;                                  // 0x005A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0HIX[0x1];                                   // 0x005B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpeakerAngleFront;                                       // 0x005C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SpeakerAngleSide;                                        // 0x0060(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SpeakerAngleBack;                                        // 0x0064(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESpeakerSetup                                              SpeakerSetup;                                            // 0x0068(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bMuteAudioOnFocusLoss;                                   // 0x0069(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableWindowsSpatialAudio;                              // 0x006A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EGraphicsMode                                              GraphicsMode;                                            // 0x006B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BaseFOV;                                                 // 0x006C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BaseVehicleFOV;                                          // 0x0070(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHideStrictNATHelpDialog;                                // 0x0074(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NTVL[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HudScaleMultiplier;                                      // 0x0078(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7PBA[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayerInputBindings                                PlayerInputBindings;                                     // 0x0080(0x0010) Protected, NativeAccessSpecifierProtected
		bool                                                       bShowTextChat;                                           // 0x0090(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7TKM[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<uint32_t>                                           NewsHashes;                                              // 0x0098(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		uint32_t                                                   LastUsedSavegameId;                                      // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9AJ2[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.RadiusDamageReplicationManager
	 * Size -> 0x0018 (FullSize[0x0470] - InheritedSize[0x0458])
	 */
	class ARadiusDamageReplicationManager : public AActor
	{
	public:
		unsigned char                                              UnknownData_E4DI[0x18];                                  // 0x0458(0x0018) MISSED OFFSET (PADDING)

	public:
		void Multicast_StopRadiusEffect(class AActor* ContextActor, class UClass* DamageData, bool bStopAllForContext);
		void Multicast_ProcessRadiusRequest(class AActor* ContextActor, class UClass* DamageData, class UClass* DamageType, float Radius, const struct FVector_NetQuantize& Location, float Damage, class UExplosionData* ExplosionData, class UParticleSystem* DefaultParticles, class UWwiseEvent* DefaultAudioEvent, class UImpactData* DefaultImpactData, const struct FGbxSignificanceEvent& SignificanceEvent, float Force);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.RecentDamageTrackingComponent
	 * Size -> 0x01E0 (FullSize[0x0358] - InheritedSize[0x0178])
	 */
	class URecentDamageTrackingComponent : public UActorComponent
	{
	public:
		class AGbxPlayerController*                                PlayerController;                                        // 0x0178(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRecentlyCausedDamageInstance                       RecentlyCausedDamageInstances[0x6];                      // 0x0180(0x01B0) Net, Transient, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XVVJ[0x18];                                  // 0x0330(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UFeedbackData*>                               InstigatedFeedbacks;                                     // 0x0348(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxSaveGame
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxSaveGame : public USaveGame
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.SaveGameChannel
	 * Size -> 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
	 */
	class USaveGameChannel : public UChannel
	{
	public:
		unsigned char                                              SaveGameActor[0x10];                                     // 0x0068(0x0010) UNKNOWN PROPERTY: InterfaceProperty GbxGameSystemCore.SaveGameChannel.SaveGameActor
		unsigned char                                              UnknownData_2TX7[0x20];                                  // 0x0078(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxSignificanceManager
	 * Size -> 0x0098 (FullSize[0x01C8] - InheritedSize[0x0130])
	 */
	class UGbxSignificanceManager : public USignificanceManager
	{
	public:
		unsigned char                                              UnknownData_E65T[0x68];                                  // 0x0130(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedInterp>                               WeightInterps;                                           // 0x0198(0x0010) ZeroConstructor, Transient, Config, NativeAccessSpecifierPrivate
		TArray<struct FCachedInterp>                               BucketInterps;                                           // 0x01A8(0x0010) ZeroConstructor, Transient, Config, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EQAX[0x10];                                  // 0x01B8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxSingletons
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGbxSingletons : public UObject
	{
	public:
		class UAsyncExplosionImpactManager*                        ExplosionImpactManager;                                  // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxFeedbackManager*                                 FeedbackManager;                                         // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.StanceDataSelector
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UStanceDataSelector : public UStanceDataProvider
	{
	public:
		TArray<struct FConditionalStance>                          StancePriorityList;                                      // 0x0030(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UStanceDataProvider*                                 DefaultStanceProvider;                                   // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.StatusEffectGlobalsData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UStatusEffectGlobalsData : public UGbxDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.StatusEffectManagerComponent
	 * Size -> 0x00B8 (FullSize[0x0230] - InheritedSize[0x0178])
	 */
	class UStatusEffectManagerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_IT5Q[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStatusEffectInstanceStack>                  InstanceStacks;                                          // 0x0180(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4LNT[0xA0];                                  // 0x0190(0x00A0) MISSED OFFSET (PADDING)

	public:
		bool RemoveStatusEffectInstance(struct FStatusEffectInstanceReference* Reference);
		bool RemoveStatusEffect(const struct FStatusEffectRemoveSpec& Spec);
		struct FStatusEffectQueryResult QueryStatusEffect(const struct FStatusEffectQuery& Query);
		struct FStatusEffectInstanceReference AddStatusEffect(const struct FStatusEffectSpec& Spec);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.StatusEffectsStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStatusEffectsStatics : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_RemoveStatusEffectInstance(class AActor* Target, struct FStatusEffectInstanceReference* Reference);
		bool STATIC_RemoveStatusEffect(class AActor* Target, const struct FStatusEffectRemoveSpec& RemoveSpec);
		struct FStatusEffectQueryResult STATIC_QueryStatusEffect(class AActor* Target, const struct FStatusEffectQuery& Query);
		struct FStatusEffectInstanceReference STATIC_AddStatusEffect(class AActor* Target, const struct FStatusEffectSpec& Spec);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.UseComponent
	 * Size -> 0x0428 (FullSize[0x05A0] - InheritedSize[0x0178])
	 */
	class UUseComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             UsableChanged;                                           // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ImpactDataChanged;                                       // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             UsabilityChanged;                                        // 0x0198(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHoldUseStopped;                                        // 0x01A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WBUE[0x10];                                  // 0x01B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ViewDistance;                                            // 0x01C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteractDistance;                                        // 0x01CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeaveInteractionDistance;                                // 0x01D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VehicleInteractDistance;                                 // 0x01D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VehicleLeaveInteractionDistance;                         // 0x01D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J8O5[0x4];                                   // 0x01DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CachedController;                                        // 0x01E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FUseTraceResult                                     PreviousUsableState;                                     // 0x01E8(0x0060) Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FUseTraceResult                                     ReplicatedUsableState;                                   // 0x0248(0x0060) Net, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FUseTraceResult                                     LocalUsableState;                                        // 0x02A8(0x0060) Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FUseTraceResult                                     EmptyUsableState;                                        // 0x0308(0x0060) Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FLatentUseState                                     LatentUseStates[0x2];                                    // 0x0368(0x0020) Transient, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QH7A[0x10];                                  // 0x0388(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUsableCostCache                                    ReplicatedCostCache;                                     // 0x0398(0x0010) Net, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RHIL[0x98];                                  // 0x03A8(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxGameSystemCore_FResourceLock                    CanUseObjectsLock_Replicated;                            // 0x0440(0x0098) Net, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_77UN[0xC8];                                  // 0x04D8(0x00C8) MISSED OFFSET (PADDING)

	public:
		void StopUsingCurrentObject(EUsabilityType UseType);
		void StartUsingCurrentObject(EUsabilityType UseType);
		void ServerUseObject(class UUsableComponent* UsableObject, EUsabilityType UseType, bool bHeld);
		void ServerStopUsingObject(class UUsableComponent* UsableObject, EUsabilityType UseType);
		void ServerStartUsingObject(class UUsableComponent* UsableObject, EUsabilityType UseType);
		void OnUsableChanged__DelegateSignature(class UUsableComponent* NewUsableComponent, const struct FUsabilityInfo& InUsabilityInfo, const struct FVector& NewUsableComponentImpactPoint, float NewUsableComponentDistanceAway);
		void OnUsabilityChanged__DelegateSignature(class UUsableComponent* NewUsableComponent, const struct FUsabilityInfo& InUsabilityInfo);
		void OnUnableToAffordUsableObject__DelegateSignature(class UUsableComponent* Usable, EUsabilityType UseType, bool bUseHeld);
		void OnImpactDataChanged__DelegateSignature(class UUsableComponent* NewUsableComponent, const struct FVector& NewUsableComponentImpactPoint, float NewUsableComponentDistanceAway);
		void OnHoldUseStopped__DelegateSignature();
		class UUsableComponent* GetCurrentUsable();
		void ForceUsingObject(class UUsableComponent* UsableObject);
		void ClientNotifyAttemptedUseCouldNotAfford(class UUsableComponent* Usable, EUsabilityType UseType, bool bUseHeld);
		bool CanUseCurrentUsable(EUsabilityType Type);
		bool CanInteractWithCurrentUsable(EUsabilityType Type);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.LevelGroupData
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class ULevelGroupData : public UGbxDataAsset
	{
	public:
		class FText                                                DisplayName;                                             // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                SubHeader;                                               // 0x0048(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0060(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              ContainedLevels[0x10];                                   // 0x0078(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxGameSystemCore.LevelGroupData.ContainedLevels

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ActorPartSetData
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UActorPartSetData : public UGbxDataAsset
	{
	public:
		class UClass*                                              PartDataClass;                                           // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEnum*                                               PartTypeEnum;                                            // 0x0038(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EActorPartReplacementMode                                  ActorPartReplacementMode;                                // 0x0040(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GA0W[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FActorPartListData>                          ActorPartLists;                                          // 0x0048(0x0010) Edit, EditFixedSize, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FActorPartListData>                          OldActorPartLists;                                       // 0x0058(0x0010) Edit, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		struct FGuid                                               Guid;                                                    // 0x0068(0x0010) IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void EnumeratePartListForPartType(unsigned char PartType, TArray<class UActorPartData*>* OutPartList);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.PrototypeActor
	 * Size -> 0x0000 (FullSize[0x0458] - InheritedSize[0x0458])
	 */
	class APrototypeActor : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.StatusEffectStackingStrategyData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UStatusEffectStackingStrategyData : public UGbxDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.UIStatData_Attribute
	 * Size -> 0x0028 (FullSize[0x0248] - InheritedSize[0x0220])
	 */
	class UUIStatData_Attribute : public UUIStatData_Numeric
	{
	public:
		class UGbxAttributeData*                                   Attribute;                                               // 0x0220(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UUIStatData*>                                 OtherComparableStats;                                    // 0x0228(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UUIStatData*>                                 StatsToReplace;                                          // 0x0238(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.UIStatFormulaEvaluator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUIStatFormulaEvaluator : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxWeaponSlotData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGbxWeaponSlotData : public UDataAsset
	{
	public:
		class FName                                                SocketName;                                              // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InitiallyEnabled;                                        // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HQJT[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.LevelData
	 * Size -> 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
	 */
	class ULevelData : public UGbxDataAsset
	{
	public:
		class FText                                                DisplayName;                                             // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                SubHeader;                                               // 0x0048(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0060(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FName                                                LevelMapName;                                            // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LinksToOtherLevel[0x10];                                 // 0x0080(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxGameSystemCore.LevelData.LinksToOtherLevel
		unsigned char                                              OwningLevelGroup[0x28];                                  // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxGameSystemCore.LevelData.OwningLevelGroup
		class UDownloadableContentData*                            DLCExpansionData;                                        // 0x00B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ActorAttributeContextResolver
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UActorAttributeContextResolver : public UAttributeContextResolver
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AIChargeData
	 * Size -> 0x0230 (FullSize[0x0260] - InheritedSize[0x0030])
	 */
	class UAIChargeData : public UGbxDataAsset
	{
	public:
		class UClass*                                              StartAction;                                             // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              MissAction;                                              // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              StrikeAction;                                            // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              HitWallAction;                                           // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ReachCliffAction;                                        // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              StopForFriendlyAction;                                   // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAnims;                                               // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LT10[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ChargeAction;                                            // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StrikeAngle;                                             // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StrikeDistance;                                          // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxTravelDistance;                                       // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MissDistance;                                            // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitWallRadiusPct;                                        // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlowStopTime;                                            // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlowStopSpeedPercent;                                    // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZVQI[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FForceSelection                                     HitReactionForceSelection;                               // 0x0090(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UHitReactionTag*                                     HitReactionFriendly;                                     // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHitReactionTag*                                     HitReactionUnfriendly;                                   // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCauseHitReaction;                                       // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERelativeSizeCharge                                        StopForFriendlyOfRelativeSize;                           // 0x00C1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SEUI[0x2];                                   // 0x00C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StopForFriendlyDistance;                                 // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStanceDataProvider*                                 ChargeStance;                                            // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EChargeCurveType                                           SpeedOverrideType;                                       // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y5NA[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  SpeedOverTime;                                           // 0x00D8(0x0078) Edit, NativeAccessSpecifierPublic
		EChargeCurveType                                           RotationOverrideType;                                    // 0x0150(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotationOverTime;                                       // 0x0151(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJDJ[0x6];                                   // 0x0152(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  RotationOverTime;                                        // 0x0158(0x0078) Edit, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  RotationByDistance;                                      // 0x01D0(0x0078) Edit, NativeAccessSpecifierPublic
		class UCurveFloat*                                         SpeedCurve;                                              // 0x0248(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         RotationCurve;                                           // 0x0250(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitReactionForce;                                        // 0x0258(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BOP8[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AIDataProvider_AttributeData
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAIDataProvider_AttributeData : public UAIDataProvider
	{
	public:
		class UGbxAttributeData*                                   AttributeData;                                           // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IntValue;                                                // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolValue;                                               // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5L5P[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AIDataProvider_AttributeInitializationData
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UAIDataProvider_AttributeInitializationData : public UAIDataProvider
	{
	public:
		struct FAttributeInitializationData                        AttributeInitializationData;                             // 0x0028(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IntValue;                                                // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolValue;                                               // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AJB4[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AIDataProvider_AttributeInitializer
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAIDataProvider_AttributeInitializer : public UAIDataProvider
	{
	public:
		class UClass*                                              AttributeInitializer;                                    // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IntValue;                                                // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolValue;                                               // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X75Q[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AIDodgeComponent
	 * Size -> 0x0790 (FullSize[0x0908] - InheritedSize[0x0178])
	 */
	class UAIDodgeComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_NXTN[0x98];                                  // 0x0178(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       IsDodging;                                               // 0x0210(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RNLM[0x7];                                   // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIDodgeData                                        DodgeBullet;                                             // 0x0218(0x01B8) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FAIDodgeData                                        DodgeGrenade;                                            // 0x03D0(0x01B8) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FAIDodgeBasicData                                   DodgeRandom;                                             // 0x0588(0x0098) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FAIDodgeData                                        DodgeZone;                                               // 0x0620(0x01B8) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           GlobalCooldown;                                          // 0x07D8(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnDodged;                                                // 0x0858(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class UTeamComponent*                                      TeamComponent;                                           // 0x0868(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxActionComponent*                                 ActionComponent;                                         // 0x0870(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBlackboardComponent*                                BlackboardComponent;                                     // 0x0878(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBrainComponent*                                     BrainComponent;                                          // 0x0880(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNavComponent*                                       NavComponent;                                            // 0x0888(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxCharacterMovementComponent*                      MovementComponent;                                       // 0x0890(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FAIDodgeInstance                                    PendingDodge;                                            // 0x0898(0x0020) Transient, NoDestructor, NativeAccessSpecifierPrivate
		struct FAIDodgeInstance                                    ActiveDodge;                                             // 0x08B8(0x0020) Transient, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q842[0x30];                                  // 0x08D8(0x0030) MISSED OFFSET (PADDING)

	public:
		void STATIC_TriggerZoneDodge(class UObject* WorldContextObject, class AActor* TargetActor, const struct FVector& ZoneLoc, const struct FVector& ZoneVel, class AActor* ActorRef);
		void STATIC_TriggerGrenadeDodge(class UObject* WorldContextObject, const struct FVector& GrenadeLoc, class AActor* Instigator, float ExtraDelay);
		bool TriggerDodge(EAIDodgeType Type, const struct FVector& SourceLoc, class AActor* SourceActor, float ExtraDelay, bool bForced);
		void STATIC_TriggerBulletDodge(class UObject* WorldContextObject, const struct FVector& MuzzleLoc, const struct FVector& BulletVel, class AActor* Instigator);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AimControlData
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UAimControlData : public UGbxDataAsset
	{
	public:
		float                                                      InputCurveExponent;                                      // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationCap;                                             // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccelRate;                                               // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecelRate;                                               // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccelRateRawBias;                                        // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PFVA[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAimSensitivityLevelParameters>              HipSensitivityLevels;                                    // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAimSensitivityLevelParameters>              ZoomSensitivityLevels;                                   // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAimSensitivityLevelParameters>              VehicleSensitivityLevels;                                // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      MinFOVScaling;                                           // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinAcceptedFOVScale;                                     // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinFOVScalingMouse;                                      // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinAcceptedFOVScaleMouse;                                // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HighDeadZone;                                            // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AxialDeadZoneBegin;                                      // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AxialDeadZoneRatio;                                      // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4U0H[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AISense_Bullet
	 * Size -> 0x0060 (FullSize[0x00F8] - InheritedSize[0x0098])
	 */
	class UAISense_Bullet : public UAISense
	{
	public:
		TArray<struct FAIBulletEvent>                              BulletEvents;                                            // 0x0098(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XZ62[0x50];                                  // 0x00A8(0x0050) MISSED OFFSET (PADDING)

	public:
		void STATIC_ReportBulletEvent(class UObject* WorldContext, const struct FVector& StartLoc, const struct FVector& EndLoc, bool bFirstEvent, class AActor* Instigator, float Strength);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AISense_GbxPrediction
	 * Size -> 0x0060 (FullSize[0x00F8] - InheritedSize[0x0098])
	 */
	class UAISense_GbxPrediction : public UAISense
	{
	public:
		unsigned char                                              UnknownData_BBEA[0x60];                                  // 0x0098(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AISense_GbxSight
	 * Size -> 0x0030 (FullSize[0x01A0] - InheritedSize[0x0170])
	 */
	class UAISense_GbxSight : public UAISense_Sight
	{
	public:
		unsigned char                                              UnknownData_PVMF[0x30];                                  // 0x0170(0x0030) MISSED OFFSET (PADDING)

	public:
		void STATIC_ForceSightEvent(class UObject* WorldContext, class AActor* SeenActor, class AActor* LookingActor);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AISenseConfig_Bullet
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UAISenseConfig_Bullet : public UAISenseConfig
	{
	public:
		class UClass*                                              Implementation;                                          // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ListenRadius;                                            // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAISenseAffiliationFilter                           DetectionByAffiliation;                                  // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AISenseConfig_GbxPrediction
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UAISenseConfig_GbxPrediction : public UAISenseConfig
	{
	public:
		struct FAISenseAffiliationFilter                           DetectionByAffiliation;                                  // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M2WQ[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AnimNotify_CanInterruptAnim
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UAnimNotify_CanInterruptAnim : public UAnimNotify
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AnimNotify_CauseDamage
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimNotify_CauseDamage : public UAnimNotify
	{
	public:
		class UClass*                                              DamageData;                                              // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AnimNotify_Feedback
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UAnimNotify_Feedback : public UAnimNotify
	{
	public:
		unsigned char                                              bApplyToAllPlayers : 1;                                  // 0x0038(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIgnoreOwner : 1;                                        // 0x0038(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KS56[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bApplyFeedbackAtRanged;                                  // 0x003C(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U0GA[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SocketName;                                              // 0x0040(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFeedbackData*                                       FeedbackData;                                            // 0x0048(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFeedbackData*                                       OwnerFeedbackData;                                       // 0x0050(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        FeedbackScale;                                           // 0x0058(0x0038) Edit, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AnimNotify_Footstep
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UAnimNotify_Footstep : public UAnimNotify
	{
	public:
		int32_t                                                    FootIndex;                                               // 0x0038(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Volume;                                                  // 0x003C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Pitch;                                                   // 0x0040(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRestrictToMatchingPlayerPerspective;                    // 0x0044(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9IHW[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AnimNotify_GbxAction
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimNotify_GbxAction : public UAnimNotify
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AnimNotify_HandPlant
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UAnimNotify_HandPlant : public UAnimNotify
	{
	public:
		int32_t                                                    HandIndex;                                               // 0x0038(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Volume;                                                  // 0x003C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Pitch;                                                   // 0x0040(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRestrictToMatchingPlayerPerspective;                    // 0x0044(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SSE7[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AnimNotify_PlayJumpedImpact
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UAnimNotify_PlayJumpedImpact : public UAnimNotify
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AnimNotify_PlayLandedImpact
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimNotify_PlayLandedImpact : public UAnimNotify
	{
	public:
		float                                                      ImpactSpeed;                                             // 0x0038(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAsIfFromJump;                                           // 0x003C(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_23DC[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AnimNotify_SetRagdollObjectHoldTransform
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UAnimNotify_SetRagdollObjectHoldTransform : public UAnimNotify
	{
	public:
		bool                                                       bEnable;                                                 // 0x0038(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FCQP[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0040(0x0030) Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AnimNotify_StretchBonesMarker
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UAnimNotify_StretchBonesMarker : public UAnimNotify_GbxAction
	{
	public:
		class FName                                                StartBoneName;                                           // 0x0040(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndBoneName;                                             // 0x0048(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimatedTargetDistance;                                  // 0x0050(0x0004) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LookAtVector;                                            // 0x0054(0x000C) BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      XScale;                                                  // 0x0060(0x0004) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WV4Q[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AnimNotifyState_DeathOverride
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_DeathOverride : public UAnimNotifyState
	{
	public:
		class UHitReactionTag*                                     DeathReactionTag;                                        // 0x0030(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSoftObjectPath                                     DefaultReactionTagName;                                  // 0x0038(0x0018) BlueprintReadOnly, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AnimNotifyState_DisableLegIK
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_DisableLegIK : public UAnimNotifyState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AnimNotifyState_DisableLegIKTracing
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_DisableLegIKTracing : public UAnimNotifyState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AnimNotifyState_DisableLookAt
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_DisableLookAt : public UAnimNotifyState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AnimNotifyState_Feedback
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_Feedback : public UAnimNotifyState
	{
	public:
		unsigned char                                              bApplyToAllPlayers : 1;                                  // 0x0030(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4UAJ[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFeedbackData*                                       FeedbackData;                                            // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        FeedbackScale;                                           // 0x0040(0x0038) Edit, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AnimNotifyState_GbxAction
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_GbxAction : public UAnimNotifyState
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0030(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AnimNotifyState_RootMotionRotation
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_RootMotionRotation : public UAnimNotifyState
	{
	public:
		int32_t                                                    LockFootIkIndex;                                         // 0x0030(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLockFootIK;                                             // 0x0034(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N9XW[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AnimNotifyState_SoftAlign
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_SoftAlign : public UAnimNotifyState
	{
	public:
		EAnimNotifyAlignType                                       Type;                                                    // 0x0030(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YWYP[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bAffectsLocation : 1;                                    // 0x0034(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAffectsRotation : 1;                                    // 0x0034(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VL5I[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PartnerName;                                             // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                ActionSlotName;                                          // 0x0040(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                AlignSocketPartner;                                      // 0x0048(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AnimNotifyState_StretchAction
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_StretchAction : public UAnimNotifyState
	{
	public:
		bool                                                       bRotate;                                                 // 0x0030(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bTranslate;                                              // 0x0031(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HLZZ[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AnimNotifyState_StretchBonesMarker
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UAnimNotifyState_StretchBonesMarker : public UAnimNotifyState_GbxAction
	{
	public:
		class FName                                                StartBoneName;                                           // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndBoneName;                                             // 0x0040(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimatedTargetDistance;                                  // 0x0048(0x0004) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LookAtVector;                                            // 0x004C(0x000C) BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndAnimatedTargetDistance;                               // 0x0058(0x0004) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EndLookAtVector;                                         // 0x005C(0x000C) BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      XScale;                                                  // 0x0068(0x0004) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VTXB[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AsyncExplosionImpactManager
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UAsyncExplosionImpactManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_L1XJ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAsyncExplosionImpactRequest>                AsyncRequests;                                           // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CWTG[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AttributeEffectMultiMutatorData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAttributeEffectMultiMutatorData : public UAttributeEffectMutatorData
	{
	public:
		TArray<class UAttributeEffectMutatorData*>                 Mutators;                                                // 0x0030(0x0010) Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AttributeInitializer
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAttributeInitializer : public UObject
	{
	public:
		EAttributeInitializerUsageMode                             UsageMode;                                               // 0x0028(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ILHF[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		float STATIC_EvaluateBalanceFormula(float Multiplier, float Level, float Power, float Offset);
		float CalculateAttributeInitialValue(class UObject* Context);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AttributeModifierTestContext
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAttributeModifierTestContext : public UObject
	{
	public:
		struct FGbxAttributeFloat                                  AttributeProperty;                                       // 0x0028(0x000C) HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatProperty;                                           // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.TestAttributePropertyValueResolver
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UTestAttributePropertyValueResolver : public UAttributePropertyValueResolver
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.AttributePropertyValueResolverTestContext
	 * Size -> 0x01A0 (FullSize[0x01C8] - InheritedSize[0x0028])
	 */
	class UAttributePropertyValueResolverTestContext : public UObject
	{
	public:
		float                                                      FloatProp;                                               // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatPropStaticArray[0x3];                               // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              FloatPropDynamicArray;                                   // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UAttributePropertyValueResolverTestContext*          ObjectProp;                                              // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAttributePropertyValueResolverTestContext*          ObjectPropStaticArray[0x3];                              // 0x0050(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAttributePropertyValueResolverTestContext*>  ObjectPropDynamicArray;                                  // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FAttributePropertyValueResolverTestStruct           StructProp;                                              // 0x0078(0x0050) NativeAccessSpecifierPublic
		struct FAttributePropertyValueResolverTestStruct           StructPropStaticArray[0x3];                              // 0x00C8(0x00F0) NativeAccessSpecifierPublic
		TArray<struct FAttributePropertyValueResolverTestStruct>   StructPropDynamicArray;                                  // 0x01B8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.BalanceFormulaAttributeValueResolver
	 * Size -> 0x0130 (FullSize[0x0158] - InheritedSize[0x0028])
	 */
	class UBalanceFormulaAttributeValueResolver : public UAttributeValueResolver
	{
	public:
		struct FBalanceFormulaDefinedValueRow                      Value;                                                   // 0x0028(0x0120) Edit, Protected, NativeAccessSpecifierProtected
		TArray<struct FAttributeInitializationData>                AdditionalScalars;                                       // 0x0148(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.BalanceStateAttributeValueResolver
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UBalanceStateAttributeValueResolver : public UAttributeValueResolver
	{
	public:
		EBalanceValueType                                          ValueToResolve;                                          // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZTYZ[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.BalanceTableAttributeValueResolver
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UBalanceTableAttributeValueResolver : public UDataTableFunctionAttributeValueResolver
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.BlackboardKeyAttributeContextResolver
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UBlackboardKeyAttributeContextResolver : public UAttributeContextResolver
	{
	public:
		struct FGbxBlackboardKeySelector                           BlackboardKey;                                           // 0x0050(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.BlackboardKeyType_GbxFlag
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_GbxFlag : public UBlackboardKeyType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.BlackboardKeyType_Struct
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Struct : public UBlackboardKeyType
	{
	public:
		class UScriptStruct*                                       Type;                                                    // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.BlackboardKeyType_TargetActorInfo
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_TargetActorInfo : public UBlackboardKeyType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.BoneModBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBoneModBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetBoneTranslation(const class FName& BoneName, const struct FVector& Translation, class UObject* Target, float InBlendTime, EAlphaBlendOption InBlendOption, class UCurveFloat* InCustomBlendCurve);
		void STATIC_SetBoneScale3D(const class FName& BoneName, const struct FVector& Scale3D, class UObject* Target, float InBlendTime, EAlphaBlendOption InBlendOption, class UCurveFloat* InCustomBlendCurve);
		void STATIC_SetBoneScale(const class FName& BoneName, float Scale, class UObject* Target, float InBlendTime, EAlphaBlendOption InBlendOption, class UCurveFloat* InCustomBlendCurve);
		void STATIC_SetBoneRotation(const class FName& BoneName, const struct FRotator& Rotation, class UObject* Target, float InBlendTime, EAlphaBlendOption InBlendOption, class UCurveFloat* InCustomBlendCurve);
		void STATIC_SetBoneModUseTranslation(const class FName& BoneModName, bool bUseTranslation, class UObject* Target);
		void STATIC_SetBoneModUseScale(const class FName& BoneModName, bool bUseScale, class UObject* Target);
		void STATIC_SetBoneModUseRotation(const class FName& BoneModName, bool bUseRotation, class UObject* Target);
		void STATIC_SetBoneModTranslationSpace(const class FName& BoneModName, EBoneControlSpace TranslationSpace, class UObject* Target);
		void STATIC_SetBoneModTranslation(const class FName& BoneModName, const struct FVector& Translation, class UObject* Target);
		void STATIC_SetBoneModTransform(const class FName& BoneModName, const struct FTransform& Transform, class UObject* Target);
		void STATIC_SetBoneModScale3D(const class FName& BoneModName, const struct FVector& Scale, class UObject* Target);
		void STATIC_SetBoneModScale(const class FName& BoneModName, float Scale, class UObject* Target);
		void STATIC_SetBoneModRotationSpace(const class FName& BoneModName, EBoneControlSpace RotationSpace, class UObject* Target);
		void STATIC_SetBoneModRotation(const class FName& BoneModName, const struct FRotator& Rotation, class UObject* Target);
		void STATIC_SetBoneModReplaceTranslation(const class FName& BoneModName, bool bReplaceTranslation, class UObject* Target);
		void STATIC_SetBoneModReplaceScale(const class FName& BoneModName, bool bReplaceScale, class UObject* Target);
		void STATIC_SetBoneModReplaceRotation(const class FName& BoneModName, bool bReplaceRotation, class UObject* Target);
		void STATIC_SetBoneModName(const class FName& BoneModName, const class FName& NewBoneModName, class UObject* Target);
		void STATIC_SetBoneModifyProfileState(const class FName& StateName, bool bActive, class UObject* Target, float BlendTime);
		void STATIC_SetBoneModifyProfile(class UGbxBoneModifyProfile* BoneModifyProfile, class UObject* Target);
		void STATIC_SetBoneModBoneName(const class FName& BoneModName, const class FName& BoneModBoneName, class UObject* Target);
		void STATIC_SetBoneModBlendTime(const class FName& BoneModName, float BlendTime, class UObject* Target);
		void STATIC_SetBoneModAlphaBlend(const class FName& BoneModName, const struct FAlphaBlend& Blend, class UObject* Target);
		void STATIC_SetBoneModActive(const class FName& BoneModName, bool bActive, class UObject* Target);
		void STATIC_SetBoneMod(struct FBoneModInstance* InBoneMod, const class FName& BoneModToSet, class UObject* Target, bool bBlendIn);
		void STATIC_RemoveBoneMod(const class FName& BoneModToRemove, class UObject* Target, bool bBlendOut);
		bool STATIC_GetBoneMod(const class FName& BoneModName, struct FBoneModInstance* BoneMod, class UObject* Target);
		void STATIC_CreateBoneMod(const class FName& InBoneModName, const class FName& InBoneName, const struct FVector& InTranslation, const struct FRotator& InRotation, const struct FVector& InScale, float InBlendTime, class UObject* Target, EAlphaBlendOption InBlendOption, class UCurveFloat* InCustomBlendCurve, bool bInUseTranslation, bool bInUseRotation, bool bInUseScale, bool bInReplaceTranslation, bool bInReplaceRotation, bool bInReplaceScale, EBoneControlSpace InTranslationSpace, EBoneControlSpace InRotationSpace, bool bBlendIn);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.BoneModComponent
	 * Size -> 0x0050 (FullSize[0x0320] - InheritedSize[0x02D0])
	 */
	class UBoneModComponent : public USceneComponent
	{
	public:
		bool                                                       bUseTranslation;                                         // 0x02D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          TranslationSpace;                                        // 0x02D1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplaceTranslation;                                     // 0x02D2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRotation;                                            // 0x02D3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          RotationSpace;                                           // 0x02D4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplaceRotation;                                        // 0x02D5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseScale;                                               // 0x02D6(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplaceScale;                                           // 0x02D7(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAlphaBlend                                         Blend;                                                   // 0x02D8(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bStartActive;                                            // 0x0310(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IIZP[0xF];                                   // 0x0311(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.BTDecorator_GbxCondition
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UBTDecorator_GbxCondition : public UBTDecorator
	{
	public:
		class UGbxCondition*                                       Condition;                                               // 0x0068(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.BTTask_PlayGbxAction
	 * Size -> 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
	 */
	class UBTTask_PlayGbxAction : public UBTTaskNode
	{
	public:
		class UClass*                                              ActionClassToPlay;                                       // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxActionComponent*                                 CachedActionComponent;                                   // 0x0078(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBehaviorTreeComponent*                              CachedBTComponent;                                       // 0x0080(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.CauseDamageContextSourceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCauseDamageContextSourceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ChallengeConditionData
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UChallengeConditionData : public UGbxDataAsset
	{
	public:
		class FString                                              Description;                                             // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameStatData*                                       StatId;                                                  // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    TargetValue;                                             // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ChallengeLevelActorComponent
	 * Size -> 0x0080 (FullSize[0x07D0] - InheritedSize[0x0750])
	 */
	class UChallengeLevelActorComponent : public UGbxAreaComponent
	{
	public:
		class UClass*                                              BaseChallengeReference;                                  // 0x0750(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ChallengeReference;                                      // 0x0758(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowInZoneMap;                                          // 0x0760(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowInMiniMap;                                          // 0x0761(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowInWorld;                                            // 0x0762(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInWorldIconEnabled;                                     // 0x0763(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnfogRadiusWhenChallengeActive;                          // 0x0764(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnfogHeightWhenChallengeActive;                          // 0x0768(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               IconGuid;                                                // 0x076C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsStationary;                                           // 0x077C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AZ5A[0x3];                                   // 0x077D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerChallengeActivated;                              // 0x0780(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerChallengeCompleted;                              // 0x0790(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerEnteredChallengeArea;                            // 0x07A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerExitedChallengeArea;                             // 0x07B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PARJ[0x8];                                   // 0x07C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChallengeLevelActorComponent*                       OwningLevelActorComponent;                               // 0x07C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetIsStationary(bool bInIsStationary);
		void SetInWorldIconEnabled(bool bEnable);
		void OnRep_IsStationary(bool bOldIsStationary);
		void OnRep_InWorldIconEnabled(bool bOldEnabled);
		void OnRep_ChallengeReference();
		void HandleAttachmentChanged();
		class AActor* GetAssociatedActor();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ChallengeLevelParentComponent
	 * Size -> 0x0030 (FullSize[0x0800] - InheritedSize[0x07D0])
	 */
	class UChallengeLevelParentComponent : public UChallengeLevelActorComponent
	{
	public:
		bool                                                       bHideIfAssociatedActors;                                 // 0x07D0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YW9Q[0x7];                                   // 0x07D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAllAssociatedActorsDestroyed;                          // 0x07D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<class UChallengeLevelActorComponent*>               AssociatedActors;                                        // 0x07E8(0x0010) BlueprintVisible, ExportObject, Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M3BK[0x8];                                   // 0x07F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void RemoveAssociatedActorComponent(class UChallengeLevelActorComponent* AssociatedComponent);
		void RemoveAssociatedActor(class AActor* AssociatedActor);
		void ClearAssociatedActors();
		void AddAssociatedActor(class AActor* AssociatedActor, class UClass* ComponentClass, const struct FVector& RelativeOffset);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ChallengeObserverInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UChallengeObserverInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ChallengeRewardData
	 * Size -> 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
	 */
	class UChallengeRewardData : public UGbxDataAsset
	{
	public:
		class FText                                                RewardName;                                              // 0x0030(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0048(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                RewardString;                                            // 0x0060(0x0018) Edit, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        AttrInitDef;                                             // 0x0078(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    CachedRewardIndex;                                       // 0x00B0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7KT3[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ChallengeSystemSettings
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UChallengeSystemSettings : public UObject
	{
	public:
		float                                                      MinimumGoalForChallengeNotification;                     // 0x0028(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F4AP[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              ChallengeCompletionThresholdNotification;                // 0x0030(0x0010) Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        ChallengeRanksForToken;                                  // 0x0040(0x0038) Edit, Config, NoDestructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    ChallengePointsPerRank;                                  // 0x0078(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7REE[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSoftObjectPath>                             ChallengeRewards;                                        // 0x0080(0x0010) Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		class UClass*                                              DefaultChallengeComponent;                               // 0x0090(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.CharacterBestTargetAttributeContextResolver
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UCharacterBestTargetAttributeContextResolver : public UAttributeContextResolver
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.CharacterMovementAttributeValueResolver
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UCharacterMovementAttributeValueResolver : public UAttributeValueResolver
	{
	public:
		ECharacterMovementAttributeValueType                       ValueToResolve;                                          // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_13U9[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.CinematicModeBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCinematicModeBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_PushCinematicMode(class UObject* WorldContextObject, class UCinematicModeData* InCinematicMode);
		void STATIC_PopCinematicMode(class UObject* WorldContextObject, class UCinematicModeData* InCinematicMode);
		void STATIC_ClearCinematicMode(class UObject* WorldContextObject);
		void STATIC_ClearAndSetCinematicMode(class UObject* WorldContextObject, class UCinematicModeData* InCinematicMode);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ClothManagerInterface
	 * Size -> 0x0000 (FullSize[0x0458] - InheritedSize[0x0458])
	 */
	class AClothManagerInterface : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.Beacon
	 * Size -> 0x0020 (FullSize[0x0478] - InheritedSize[0x0458])
	 */
	class ABeacon : public AActor
	{
	public:
		unsigned char                                              UnknownData_R8V3[0x20];                                  // 0x0458(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnBeaconSourceEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ConditionalAttributeValueResolver
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UConditionalAttributeValueResolver : public UAttributeValueResolver
	{
	public:
		struct FAttributeInitializationData                        DefaultValue;                                            // 0x0028(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        Scaler;                                                  // 0x0060(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FAttributeConditionalValue>                  ConditionalValues;                                       // 0x0098(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ConditionalDamageModifier
	 * Size -> 0x0108 (FullSize[0x0138] - InheritedSize[0x0030])
	 */
	class UConditionalDamageModifier : public UGbxDataAsset
	{
	public:
		class UGbxCondition*                                       AttackerCondition;                                       // 0x0030(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttackerConditionFirstContextIsOverrideContextObject;   // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttackerConditionSecondContextIsDamageCauser;           // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AEM9[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCondition*                                       DefenderCondition;                                       // 0x0040(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDefenderConditionFirstContextIsOverrideContextObject;   // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDefenderConditionSecondContextIsDamageCauser;           // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WAXC[0x2];                                   // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EDamageFilterExprMode                                      DamageTypeFilterMode;                                    // 0x004C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EBFI[0x3];                                   // 0x004D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<class UClass*>                                      DamageTypeFilter;                                        // 0x0050(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		EDamageFilterExprMode                                      DamageSourceFilterMode;                                  // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MRWW[0x3];                                   // 0x0061(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bIncludeDamageSourceSubclasses;                          // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P9CI[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      DamageSourceFilter;                                      // 0x0068(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       bUseHitDirectionAngle;                                   // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CT4H[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        HitDirectionAngle;                                       // 0x0080(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        HitDirectionAngleOffset;                                 // 0x00B8(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseCriticalFilter;                                      // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EConditionalDamageCriticalFilter                           CriticalFilter;                                          // 0x00F1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAreaDamageFilter;                                    // 0x00F2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EConditionalAreaDamageFilter                               AreaDamageFilter;                                        // 0x00F3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRandomChance;                                        // 0x00F4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MWER[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        RandomChance;                                            // 0x00F8(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCanTriggerOnBonusDamage;                                // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAppliesToInstigatorChildren;                            // 0x0131(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S3AW[0x6];                                   // 0x0132(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ConditionalDamageCriticalModifier
	 * Size -> 0x0040 (FullSize[0x0178] - InheritedSize[0x0138])
	 */
	class UConditionalDamageCriticalModifier : public UConditionalDamageModifier
	{
	public:
		bool                                                       bOnlyApplyIfHitRegionWasCritical;                        // 0x0138(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDefaultCriticalHitMultiplier;                        // 0x0139(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HVPW[0x6];                                   // 0x013A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        AdditionalCriticalMultiplier;                            // 0x0140(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ConditionalDamageHitRegionModifier
	 * Size -> 0x0010 (FullSize[0x0148] - InheritedSize[0x0138])
	 */
	class UConditionalDamageHitRegionModifier : public UConditionalDamageModifier
	{
	public:
		uint32_t                                                   Priority;                                                // 0x0138(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_774T[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHitRegionData*                                      OverrideHitRegion;                                       // 0x0140(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ConditionalDamageTypeModifier
	 * Size -> 0x00A0 (FullSize[0x01D8] - InheritedSize[0x0138])
	 */
	class UConditionalDamageTypeModifier : public UConditionalDamageModifier
	{
	public:
		class UClass*                                              OverrideDamageType;                                      // 0x0138(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FConditionalDamageDamageTypeConditional>     ConditionalDamageTypes;                                  // 0x0140(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UClass*                                              OptionalOverrideDamageSource;                            // 0x0150(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EConditionalDamageTypeBonusMode                            BonusMode;                                               // 0x0158(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YK2R[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        ExtraDamagePercent;                                      // 0x0160(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        OverridePrimaryDamageTypeScale;                          // 0x0198(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x01D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B9C5[0x4];                                   // 0x01D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ConditionalDamageValueModifier
	 * Size -> 0x00D8 (FullSize[0x0210] - InheritedSize[0x0138])
	 */
	class UConditionalDamageValueModifier : public UConditionalDamageModifier
	{
	public:
		EConditionalDamageModifierType                             ModifierType;                                            // 0x0138(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XK80[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        DamageValue;                                             // 0x0140(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FConditionalDamageDamageConditionalValue>    ConditionalDamageValues;                                 // 0x0178(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bModifyValueBasedOnDistance;                             // 0x0188(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M0PB[0x7];                                   // 0x0189(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  ModifyValueBasedOnDistanceCurve;                         // 0x0190(0x0078) Edit, NativeAccessSpecifierPublic
		bool                                                       bDisallowFatalDamage;                                    // 0x0208(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CF30[0x7];                                   // 0x0209(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ConstantAttributeValueResolver
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UConstantAttributeValueResolver : public UAttributeValueResolver
	{
	public:
		struct FAttributeInitializationData                        Value;                                                   // 0x0028(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ControlledMoveFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UControlledMoveFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_StopControlledMove(class AActor* Actor, class UClass* ControlledMove, bool bZeroVelocity, bool bInterrupted);
		bool STATIC_StartControlledMove(class AActor* Actor, class UClass* ControlledMove, class AActor* Instigator, float SpeedOverride, float DurationOverride, float LaunchAngleOverride, class AActor* TargetActor, const struct FVector& TargetLocation);
		bool STATIC_IsPerformingSpecificControlledMove(class AActor* Actor, class UClass* ControlledMove);
		bool STATIC_IsPerformingControlledMove(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ControllerAttributeContextResolver
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UControllerAttributeContextResolver : public UAttributeContextResolver
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.CoordinatedEffectBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCoordinatedEffectBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UMaterialInterface* STATIC_GetOriginalOverrideMaterialAtIndex(class UMeshComponent* MeshComponent, int32_t Index, int32_t* OutActualIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DamageableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDamageableInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DamageAreaType
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UDamageAreaType : public UObject
	{
	public:
		int32_t                                                    MaxTargets;                                              // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseMaxTargets : 1;                                      // 0x002C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDoDirectDamageToImpactedActor : 1;                      // 0x002C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIgnoreWorldGeometry : 1;                                // 0x002C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTryDirectTraceFirst : 1;                                // 0x002C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSkipBackupImpactTrace : 1;                              // 0x002C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bForceZeroPitch : 1;                                     // 0x002C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bZeroPitchBeforeApplyingHitStartOffset : 1;              // 0x002C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bForceZeroRoll : 1;                                      // 0x002C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U4CU[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECollisionChannel                                          TraceChannel;                                            // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTraceToGround;                                          // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DSH[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TraceToGroundDownwardDistance;                           // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TraceToGroundStartHeightOffset;                          // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TraceToGroundHitOffset;                                  // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDamageAreaOverlapFilterType                               OverlapFilter;                                           // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3OS9[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                OverlapProfileName;                                      // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EObjectTypeQuery>                                   OverlapObjectTypes;                                      // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DamageAreaType_BaseRound
	 * Size -> 0x0040 (FullSize[0x00A0] - InheritedSize[0x0060])
	 */
	class UDamageAreaType_BaseRound : public UDamageAreaType
	{
	public:
		struct FAttributeInitializationData                        Radius;                                                  // 0x0060(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bComputeHitDirectionFromTarget;                          // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bExpandRadiusOverTime;                                   // 0x0099(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bExpandingRadiusIsHollow;                                // 0x009A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4BW4[0x5];                                   // 0x009B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DamageAreaType_Sphere
	 * Size -> 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])
	 */
	class UDamageAreaType_Sphere : public UDamageAreaType_BaseRound
	{
	public:
		bool                                                       bTreatAsRadiusDamage;                                    // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDamageFallsOff;                                         // 0x00A1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S4Q6[0x6];                                   // 0x00A2(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DamageAreaType_Cylinder
	 * Size -> 0x00A8 (FullSize[0x0148] - InheritedSize[0x00A0])
	 */
	class UDamageAreaType_Cylinder : public UDamageAreaType_BaseRound
	{
	public:
		struct FAttributeInitializationData                        HalfHeight;                                              // 0x00A0(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        HeightOffset;                                            // 0x00D8(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        WedgeAngle;                                              // 0x0110(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DamageAreaType_Cone
	 * Size -> 0x0070 (FullSize[0x00D0] - InheritedSize[0x0060])
	 */
	class UDamageAreaType_Cone : public UDamageAreaType
	{
	public:
		struct FAttributeInitializationData                        Length;                                                  // 0x0060(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        ConeAngle;                                               // 0x0098(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DamageAreaType_Box
	 * Size -> 0x00B0 (FullSize[0x0110] - InheritedSize[0x0060])
	 */
	class UDamageAreaType_Box : public UDamageAreaType
	{
	public:
		struct FAttributeInitializationData                        HalfHeight;                                              // 0x0060(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        HalfWidth;                                               // 0x0098(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        HalfDepth;                                               // 0x00D0(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		EDamageAreaBoxOriginType                                   OriginType;                                              // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDamageFallsOff;                                         // 0x0109(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RUQH[0x6];                                   // 0x010A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DamageAreaType_Capsule
	 * Size -> 0x0070 (FullSize[0x00D0] - InheritedSize[0x0060])
	 */
	class UDamageAreaType_Capsule : public UDamageAreaType
	{
	public:
		struct FAttributeInitializationData                        HalfHeight;                                              // 0x0060(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        Radius;                                                  // 0x0098(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DamageAsyncManager
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UDamageAsyncManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_22WL[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCauseDamageAsyncRequestEntry>               CauseDamageRequests;                                     // 0x0038(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FCauseDamageAsyncRequestEntry>               PendingCauseDamageRequests;                              // 0x0048(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		int32_t                                                    MaxNumCauseDamagePerFrame;                               // 0x0058(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U417[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DamageCauserInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDamageCauserInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DamageStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDamageStatics : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_StopCausingDamageToTarget(class AActor* DamageCauser, class AActor* DamageTarget, class UClass* DamageData);
		void STATIC_StopCausingDamage(class AActor* DamageCauser, class UClass* DamageData);
		void STATIC_StopCausingAllDamage(class AActor* DamageCauser);
		struct FPipelineDamageInput STATIC_MakePipelineDamageInput(class AActor* DamageCauser, class AActor* DamageReceiver, class UClass* DamageType, class UClass* DamageSource, const struct FHitResult& HitInfo, const struct FVector& HitLocation, const struct FVector& HitDirection, const struct FVector& HitForceDirection, const struct FForceSelection& HitForceMagnitude);
		class FString STATIC_GetSummary_ForceSelection(const struct FForceSelection& ForceSelection);
		class UGbxDamageType* STATIC_GetDamageTypeFromClass(class UClass* DamageTypeClass);
		class UDamageSource* STATIC_GetDamageSourceFromClass(class UClass* DamageSourceClass);
		float STATIC_Conv_ForceSelectionToFloat(const struct FForceSelection& ForceSelection);
		struct FForceSelection STATIC_Conv_FloatToForceSelection(float ForceSelection);
		void STATIC_ApplyDamageInRadius(class UObject* WorldContextObject, float BaseDamage, const struct FVector& Origin, float Radius, class UClass* DamageType, class UClass* DamageSource, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* EventInstigator, const struct FForceSelection& BaseImpactForce, ECollisionChannel DamagePreventionChannel, bool bDamageFalloff, class UDamageModifierComponent* DamageModifierComponent, class UFeedbackData* InstigatorFeedback, bool bUseInstigatorRadiusDamageScale);
		void STATIC_ApplyDamageEx(const struct FPipelineDamageInput& PipelineInput, float BaseDamage);
		void STATIC_ApplyDamage(class AActor* DamageReceiver, float BaseDamage, class UClass* DamageType, class UClass* DamageSource, class AController* EventInstigator, class AActor* DamageCauser);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DeathData
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UDeathData : public UGbxDataAsset
	{
	public:
		TArray<class UGameStatData*>                               DiedStats;                                               // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      DissolveCorpseDelayBeforeDestroy;                        // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NFMK[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.Decorator
	 * Size -> 0x0000 (FullSize[0x0458] - InheritedSize[0x0458])
	 */
	class ADecorator : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DrunkenBaseMovementComponent
	 * Size -> 0x0040 (FullSize[0x01B8] - InheritedSize[0x0178])
	 */
	class UDrunkenBaseMovementComponent : public UActorComponent
	{
	public:
		float                                                      StartApproachDistance;                                   // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartDelayTime;                                          // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EaseInTime;                                              // 0x0180(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O2UA[0x8];                                   // 0x0184(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RandomNumberSeed;                                        // 0x018C(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MTVI[0x28];                                  // 0x0190(0x0028) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DrunkenRandomMovementComponent
	 * Size -> 0x0058 (FullSize[0x0210] - InheritedSize[0x01B8])
	 */
	class UDrunkenRandomMovementComponent : public UDrunkenBaseMovementComponent
	{
	public:
		unsigned char                                              UnknownData_97KF[0x4];                                   // 0x01B8(0x0004) Fix Super Size
		float                                                      TurnSpeed;                                               // 0x01BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpreadAngle;                                          // 0x01C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDepartureAngle;                                       // 0x01C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGravityAffectsDrunkenness;                              // 0x01C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_66XC[0x3];                                   // 0x01C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DrunkenGravityScalar;                                    // 0x01CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DRGX[0x28];                                  // 0x01D0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bFixDrunkenMovementAcceleration;                         // 0x01F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NXVU[0x17];                                  // 0x01F9(0x0017) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DrunkenWaveMovementComponent
	 * Size -> 0x0038 (FullSize[0x01F0] - InheritedSize[0x01B8])
	 */
	class UDrunkenWaveMovementComponent : public UDrunkenBaseMovementComponent
	{
	public:
		TArray<struct FVector2DWaveform>                           Waveforms;                                               // 0x01B8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      GlobalWaveformScale;                                     // 0x01C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRandomWaveOffsetTime;                                 // 0x01CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGravityAffectsDrunkenness;                              // 0x01D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SIA5[0x3];                                   // 0x01D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DrunkenGravityScalar;                                    // 0x01D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NMBZ[0x18];                                  // 0x01D8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DynamicPhysicalAnimationComponent
	 * Size -> 0x01D8 (FullSize[0x0350] - InheritedSize[0x0178])
	 */
	class UDynamicPhysicalAnimationComponent : public UActorComponent
	{
	public:
		class FName                                                PhysicalAnimationCollisionProfileName;                   // 0x0178(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                KinematicAnimationCollisionProfileName;                  // 0x0180(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        ExclusionBones;                                          // 0x0188(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        SupportBones;                                            // 0x0198(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PD8L[0x188];                                 // 0x01A8(0x0188) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              SkeletalMeshComponent;                                   // 0x0330(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPhysicsAsset*                                       PhysicsAsset;                                            // 0x0338(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasPhysicallyAnimatingBones;                            // 0x0340(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0HNZ[0xF];                                   // 0x0341(0x000F) MISSED OFFSET (PADDING)

	public:
		void SetStrengthMultiplier(float NewValue);
		void SetSkeletalMeshComponent(class USkeletalMeshComponent* NewSkeletalMeshComponent);
		void SetRootMotionControl(EPhysicalAnimationRootMotionControl MotionControl);
		void SetHasAnimationPlaying(bool bPlaying);
		void SetEnableRagdoll(bool bEnable);
		void SetEnablePhysicalAnimation(bool bEnable, const class FName& BodyName);
		void SetActiveProfile(class UPhysicalAnimationProfileAsset* Profile);
		void OnRigidBodyOverlap(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		float GetStrengthMultiplier();
		EPhysicalAnimationRootMotionControl GetRootMotionControl();
		void DetachBodyFromAllExternalRigidBodies(const class FName& BodyName);
		void AttachBodyTo(const class FName& BodyName, class UPrimitiveComponent* AttachToComponent, const class FName& AttachToBodyName, float VelocitySpaceBlend, float BreakForce);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryContext_AimStart
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_AimStart : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryContext_AimEnd
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_AimEnd : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryContext_Owner_AimStart
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_Owner_AimStart : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryContext_Owner_AimEnd
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_Owner_AimEnd : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryContext_LastResult
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_LastResult : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryContext_Origin
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UEnvQueryContext_Origin : public UEnvQueryContext_EnvQueryParam
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryContext_PlayerMaster
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_PlayerMaster : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryContext_Players
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_Players : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryContext_QuerierAimDirection
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_QuerierAimDirection : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryContext_QuerierAimDirection2D
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_QuerierAimDirection2D : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryContext_QuerierAimLocation
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_QuerierAimLocation : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryContext_QuerierMoveDirection
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_QuerierMoveDirection : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryContext_TargetNavLocation
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_TargetNavLocation : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryGenerator_TargetActorInfo
	 * Size -> 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
	 */
	class UEnvQueryGenerator_TargetActorInfo : public UEnvQueryGenerator
	{
	public:
		float                                                      MaxAge;                                                  // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowHostiles;                                          // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowFriendlies;                                        // 0x0065(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowNeutrals;                                          // 0x0066(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C3C9[0x1];                                   // 0x0067(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FActorTagCompositeQuery                             TagQuery;                                                // 0x0068(0x0010) Edit, NativeAccessSpecifierPublic
		unsigned char                                              bUseAllowedTypes : 1;                                    // 0x0078(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SF79[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AllowedTypes[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxGameSystemCore.EnvQueryGenerator_TargetActorInfo.AllowedTypes
		TArray<class UClass*>                                      AllowedTypesCache;                                       // 0x0090(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HUCL[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryItemType_Targetable
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryItemType_Targetable : public UEnvQueryItemType_Actor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryItemType_TargetActorInfo
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryItemType_TargetActorInfo : public UEnvQueryItemType_ActorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryContext_InputTarget
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UEnvQueryContext_InputTarget : public UEnvQueryContext_EnvQueryParam
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryContext_InputTargetMoveDir
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UEnvQueryContext_InputTargetMoveDir : public UEnvQueryContext_EnvQueryParam
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryParamsExt
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryParamsExt : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_RunEnvQueryForBestLocation(class UObject* QueryOwner, const struct FEnvQueryParams& QueryParams, struct FVector* ResultLocation);
		bool STATIC_RunEnvQueryForBestActor(class UObject* QueryOwner, const struct FEnvQueryParams& QueryParams, class AActor** ResultActor);
		bool STATIC_RunEnvQueryForAllLocations(class UObject* QueryOwner, const struct FEnvQueryParams& QueryParams, TArray<struct FVector>* ResultLocations);
		bool STATIC_RunEnvQueryForAllActors(class UObject* QueryOwner, const struct FEnvQueryParams& QueryParams, TArray<class AActor*>* ResultActors);
		bool STATIC_HasQuery(const struct FEnvQueryParams& QueryParams);
		class FString STATIC_GetDescription(const struct FEnvQueryParams& QueryParams);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryParamsProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryParamsProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryTest_ProjectilesHomingTowardsTarget
	 * Size -> 0x0008 (FullSize[0x01E0] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_ProjectilesHomingTowardsTarget : public UEnvQueryTest
	{
	public:
		bool                                                       bMustBeActivelyHoming;                                   // 0x01D8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DDD1[0x7];                                   // 0x01D9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EnvQueryTestAsset
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UEnvQueryTestAsset : public UGbxDataAsset
	{
	public:
		class UEnvQueryTest*                                       EnvQueryTest;                                            // 0x0030(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EQSProxyInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEQSProxyInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ExplosionBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UExplosionBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UParticleSystemComponent* STATIC_PlayExplosion(class UExplosionData* ExplosionData, float Size, const struct FVector& ExplosionLocation, class UObject* Context, class UClass* DamageType);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.DamageInfoFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDamageInfoFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetImpactForce(struct FDamageInfo* DamageInfo, float InImpactForce);
		void STATIC_SetDamageType(struct FDamageInfo* DamageInfo, class UClass* InDamageType);
		void STATIC_SetDamageSource(struct FDamageInfo* DamageInfo, class UClass* InDamageSource);
		void STATIC_SetDamageRadius(struct FDamageInfo* DamageInfo, float InDamageRadius);
		void STATIC_SetDamageModifierComponent(struct FDamageInfo* DamageInfo, class UDamageModifierComponent* InModifierComponent);
		void STATIC_SetDamageCauser(struct FDamageInfo* DamageInfo, class AActor* InDamageCauser);
		void STATIC_SetDamage(struct FDamageInfo* DamageInfo, float InDamage);
		void STATIC_SetCriticalHitDamageOverrides(struct FDamageInfo* DamageInfo, const struct FCriticalHitDamageOverrides& Overrides);
		void STATIC_SetApplyCriticalHitModsToAoEDamage(struct FDamageInfo* DamageInfo, bool bApplyCriticalHitModsToAoEDamage);
		float STATIC_GetImpactForce(const struct FDamageInfo& DamageInfo);
		class UClass* STATIC_GetDamageType(const struct FDamageInfo& DamageInfo);
		class UClass* STATIC_GetDamageSource(const struct FDamageInfo& DamageInfo);
		float STATIC_GetDamageRadius(const struct FDamageInfo& DamageInfo);
		class UDamageModifierComponent* STATIC_GetDamageModifierComponent(const struct FDamageInfo& DamageInfo);
		class AActor* STATIC_GetDamageCauser(const struct FDamageInfo& DamageInfo);
		float STATIC_GetDamage(const struct FDamageInfo& DamageInfo);
		struct FCriticalHitDamageOverrides STATIC_GetCriticalHitDamageOverrides(const struct FDamageInfo& DamageInfo);
		bool STATIC_GetApplyCriticalHitModsToAoEDamage(const struct FDamageInfo& DamageInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ExplosionComponent
	 * Size -> 0x0060 (FullSize[0x01D8] - InheritedSize[0x0178])
	 */
	class UExplosionComponent : public UActorComponent
	{
	public:
		struct FGbxAttributeFloat                                  ExplosionRadius;                                         // 0x0178(0x000C) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VE70[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     ExplosionParticleSystem;                                 // 0x0188(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ExplosionEffectCollection;                               // 0x0190(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleSystemSize;                                      // 0x0198(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bModifyParticleSystemSize;                               // 0x019C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IGEZ[0x3];                                   // 0x019D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         ExplosionAudioEvent;                                     // 0x01A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoundPerceptionProperties                          SoundPerception;                                         // 0x01A8(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LU8F[0x4];                                   // 0x01B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFeedbackData*                                       Feedback;                                                // 0x01B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFeedbackRangeScalar;                                  // 0x01C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCauseExplosionDamage;                                   // 0x01C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideLocation;                                       // 0x01C5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0MB7[0x2];                                   // 0x01C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LocationOverride;                                        // 0x01C8(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_29A4[0x4];                                   // 0x01D4(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetExplosionLocation(const struct FVector& NewLocation);
		void Explode(const struct FDamageInfo& DamageInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ExplosionData
	 * Size -> 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
	 */
	class UExplosionData : public UGbxDataAsset
	{
	public:
		class UExplosionSizeSelectionData*                         DefaultExplosionSizeData;                                // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDamageTypeExplosionAssociation>             DamageTypeSelections;                                    // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bUseRadialBlurOverride;                                  // 0x0048(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1R21[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRadialBlurSelection                                RadialBlurOverride;                                      // 0x004C(0x000C) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		EExplosionTinnitusDuration                                 TinnitusDuration;                                        // 0x0058(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBasicExplosion;                                      // 0x0059(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_751U[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxSignificanceEvent                               SignificanceEvent;                                       // 0x0060(0x0008) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCensorThisExplosion;                                    // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8806[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFeedbackData*                                       FeedbackOverride;                                        // 0x0070(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     ParticleSystemOverride;                                  // 0x0078(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     CensoredParticleSystemOverride;                          // 0x0080(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         AudioEventOverride;                                      // 0x0088(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImpactData*                                         ImpactOverride;                                          // 0x0090(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FeedbackFalloffMinDistanceScalar;                        // 0x0098(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FeedbackFalloffMaxDistanceScalar;                        // 0x009C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M0B5[0x60];                                  // 0x00A0(0x0060) MISSED OFFSET (PADDING)

	public:
		struct FExplosionSizeProperties SelectExplosion(float Size, class UClass* DamageType);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ExplosionSizeSelectionData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UExplosionSizeSelectionData : public UGbxDataAsset
	{
	public:
		TArray<struct FExplosionSizeProperties>                    SizeProperties;                                          // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		struct FExplosionSizeProperties GetExplosionPropertiesBySize(float Size);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.EyesOfDeathComponent
	 * Size -> 0x0030 (FullSize[0x0720] - InheritedSize[0x06F0])
	 */
	class UEyesOfDeathComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_SGAO[0x30];                                  // 0x06F0(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.FeedbackData
	 * Size -> 0x03C8 (FullSize[0x03F8] - InheritedSize[0x0030])
	 */
	class UFeedbackData : public UGbxDataAsset
	{
	public:
		int32_t                                                    FeedbackType;                                            // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7WS9[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FForceFeedbackChannelDetails>                ControllerRumbleDetails;                                 // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UForceFeedbackEffect*>                        ExternalForceFeedbackEffects;                            // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FForceFeedbackChannelDetails>                MinControllerRumbleDetails;                              // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UForceFeedbackEffect*>                        MinExternalForceFeedbackEffects;                         // 0x0068(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bAbsoluteControllerRumbleScale;                          // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TAH0[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CameraShakeClass;                                        // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              CameraShakeClassNegativeXAxis;                           // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              CameraShakeClassYAxis;                                   // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              CameraShakeClassNegativeYAxis;                           // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OscillationDuration;                                     // 0x00A0(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OscillationBlendInTime;                                  // 0x00A4(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OscillationBlendOutTime;                                 // 0x00A8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FROscillator                                        RotOscillation;                                          // 0x00AC(0x0030) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FVOscillator                                        LocOscillation;                                          // 0x00DC(0x0030) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FFOscillator                                        FOVOscillation;                                          // 0x010C(0x0010) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		float                                                      RandomShakeInterval;                                     // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRandomShakeScalar;                                    // 0x0120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRandomShakeScalar;                                    // 0x0124(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        BaseCameraScale;                                         // 0x0128(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FShakeScaleAssociation>                      AdditionalCameraShakes;                                  // 0x0160(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		EFeedbackDataFirstPersonImpulseType                        FirstPersonImpulseType;                                  // 0x0170(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WGFO[0x3];                                   // 0x0171(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFeedbackDataFirstPersonImpulse                     CustomFirstPersonImpulse;                                // 0x0174(0x0060) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8U0N[0x4];                                   // 0x01D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     ParticleSystem;                                          // 0x01D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideWhenFinished;                                       // 0x01E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WDEZ[0x3];                                   // 0x01E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ContentDims;                                             // 0x01E4(0x0008) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleDepth;                                           // 0x01EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScreenParticleScalingMode                                 ScalingMode;                                             // 0x01F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyOwnerSee;                                           // 0x01F1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysVisible;                                          // 0x01F2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTickParticleEvenWhenPaused;                             // 0x01F3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DFEO[0x4];                                   // 0x01F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Tag;                                                     // 0x01F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLetSystemFinishAfterStopping;                           // 0x0200(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FE7W[0x7];                                   // 0x0201(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxHUDFeedbackImpulse                              HUDImpulse;                                              // 0x0208(0x0060) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bLooping;                                                // 0x0268(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ERW8[0x3];                                   // 0x0269(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EffectFalloffMinDistance;                                // 0x026C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EffectFalloffMaxDistance;                                // 0x0270(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y6RR[0x4];                                   // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UFeedbackData*>                               AssociatedFeedbacks;                                     // 0x0278(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUpdateSourceLocation;                                   // 0x0288(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScaleDownOverTime;                                      // 0x0289(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseScaleOverTimeCurve;                                  // 0x028A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_81XD[0x5];                                   // 0x028B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  ScaleOverTimeCurve;                                      // 0x0290(0x0078) Edit, NativeAccessSpecifierPublic
		bool                                                       bUseContinuousAttributeScale;                            // 0x0308(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_99GX[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        ContinuousScale;                                         // 0x0310(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  ContinuousScaleCurve;                                    // 0x0348(0x0078) Edit, NativeAccessSpecifierPublic
		bool                                                       bPlayRadialBlur;                                         // 0x03C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DYU8[0x3];                                   // 0x03C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRadialBlurSelection                                RadialBlurInfo;                                          // 0x03C4(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverrideRadialBlurCenter;                               // 0x03D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SWY4[0x3];                                   // 0x03D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RadialBlurWorldSpaceCenter;                              // 0x03D4(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RadialBlurMaxDistance;                                   // 0x03E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4TDT[0x4];                                   // 0x03E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLoopingShakeInfo>                           LoopingShakes;                                           // 0x03E8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		void STATIC_StopFeedbackForAll(class UFeedbackData* FeedbackData, class UObject* WorldContextObject);
		void STATIC_StopFeedback(class UFeedbackData* FeedbackData, class APlayerController* Controller);
		void STATIC_StopDefaultFeedbackForAll(const struct FFeedbackTableRowHandle& Feedback, class UObject* WorldContextObject);
		void STATIC_StopDefaultFeedback(const struct FFeedbackTableRowHandle& Feedback, class APlayerController* Controller);
		void STATIC_PerformFeedbackForAllAtLocation(class UFeedbackData* FeedbackData, const struct FVector& SourceLocation, const struct FRangedDistanceOverrides& RangedDistanceOverrides, bool bLoop, class UObject* WorldContextObject, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback);
		void STATIC_PerformFeedbackForAll(class UFeedbackData* FeedbackData, float Scale, bool bLoop, class UObject* WorldContextObject, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback);
		void STATIC_PerformFeedbackAtLocation(class UFeedbackData* FeedbackData, class APlayerController* Controller, const struct FVector& SourceLocation, const struct FRangedDistanceOverrides& RangedDistanceOverrides, bool bLoop, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback);
		void STATIC_PerformFeedback(class UFeedbackData* FeedbackData, class APlayerController* Controller, float Scale, bool bLoop, class UObject* SourceContext);
		void STATIC_PerformDefaultFeedbackForAllAtLocation(const struct FFeedbackTableRowHandle& Feedback, const struct FVector& SourceLocation, const struct FRangedDistanceOverrides& RangedDistanceOverrides, bool bLoop, class UObject* WorldContextObject, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback);
		void STATIC_PerformDefaultFeedbackForAll(const struct FFeedbackTableRowHandle& Feedback, float Scale, bool bLoop, class UObject* WorldContextObject, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback);
		void STATIC_PerformDefaultFeedbackAtLocation(const struct FFeedbackTableRowHandle& Feedback, class APlayerController* Controller, const struct FVector& SourceLocation, const struct FRangedDistanceOverrides& RangedDistanceOverrides, bool bLoop, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback);
		void STATIC_PerformDefaultFeedback(const struct FFeedbackTableRowHandle& Feedback, class APlayerController* Controller, float Scale, bool bLoop, class UObject* SourceContext);
		float STATIC_GetFeedbackDuration(class UFeedbackData* FeedbackData);
		void STATIC_GetFeedbackDataRange(class UFeedbackData* FeedbackData, float* MinRange, float* MaxRange);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.FirstPersonConfigurationData
	 * Size -> 0x0010 (FullSize[0x0468] - InheritedSize[0x0458])
	 */
	class AFirstPersonConfigurationData : public AActor
	{
	public:
		bool                                                       bAutoFillComponentVariables;                             // 0x0458(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G634[0x7];                                   // 0x0459(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxSkeletalMeshComponent*                           Arms;                                                    // 0x0460(0x0008) Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.FXVolumeManager
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UFXVolumeManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_DE1K[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (PADDING)

	public:
		void OnVolumeDestroyed(class AActor* DestroyedActor);
		void OnPlayerDestroyed(class AActor* DestroyedActor);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.FXVolume
	 * Size -> 0x0020 (FullSize[0x04B0] - InheritedSize[0x0490])
	 */
	class AFXVolume : public AVolume
	{
	public:
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0490(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleDepth;                                           // 0x0498(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3PPJ[0x4];                                   // 0x049C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TagName;                                                 // 0x04A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDepthPriorityWorld;                                     // 0x04A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8JBT[0x7];                                   // 0x04A9(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnActorLeftVolume(class UPrimitiveComponent* OverlappedComponent, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnActorEnteredVolume(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GameplayTagBasedAttributeValueResolver
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UGameplayTagBasedAttributeValueResolver : public UAttributeValueResolver
	{
	public:
		TArray<struct FGameplayTagToValueMap>                      TagToValueMap;                                           // 0x0028(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        ValueIfNoTagIsFound;                                     // 0x0038(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GameplayTagContainerComponent
	 * Size -> 0x0030 (FullSize[0x01A8] - InheritedSize[0x0178])
	 */
	class UGameplayTagContainerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_NEAU[0x10];                                  // 0x0178(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0188(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		class UGameplayTagContainerComponent* STATIC_GetGameplayTagContainerFromActor(class AActor* Actor, EContainsTagComponent* Branches);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GameplayTask_RunEnvQuery
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UGameplayTask_RunEnvQuery : public UGameplayTask
	{
	public:
		class FScriptMulticastDelegate                             Success;                                                 // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             Failure;                                                 // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D1ZS[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (PADDING)

	public:
		class UGameplayTask_RunEnvQuery* STATIC_RunEnvQueryOnLocation(class AActor* QueryOwner, const struct FEnvQueryParams& QueryParams, const struct FVector& Location);
		class UGameplayTask_RunEnvQuery* STATIC_RunEnvQueryOnActor(class AActor* QueryOwner, const struct FEnvQueryParams& QueryParams, class AActor* Actor);
		class UGameplayTask_RunEnvQuery* STATIC_RunEnvQuery(class AActor* QueryOwner, const struct FEnvQueryParams& QueryParams);
		bool STATIC_GetResultLocations(const struct FEnvQueryResult& QueryResult, TArray<struct FVector>* ResultLocations);
		bool STATIC_GetResultLocation(const struct FEnvQueryResult& QueryResult, struct FVector* ResultLocation);
		bool STATIC_GetResultActors(const struct FEnvQueryResult& QueryResult, TArray<class AActor*>* ResultActors);
		bool STATIC_GetResultActor(const struct FEnvQueryResult& QueryResult, class AActor** ResultActor);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GameResourceData
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UGameResourceData : public UGbxDataAsset
	{
	public:
		class FText                                                ResourceName;                                            // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bIntegerOnlyUpdates;                                     // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSerializeInSavegame;                                    // 0x0049(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5OQB[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameResourcePoolData*                               DefaultResourcePoolData;                                 // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GameResourcePoolAttributePropertyValueResolver
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UGameResourcePoolAttributePropertyValueResolver : public UAttributePropertyValueResolver
	{
	public:
		class UGameResourceData*                                   Resource;                                                // 0x00B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GameResourcePoolClampedMaxValueResolver
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UGameResourcePoolClampedMaxValueResolver : public UGameResourcePoolAttributePropertyValueResolver
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GameResourcePoolClampedValueResolver
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UGameResourcePoolClampedValueResolver : public UGameResourcePoolAttributePropertyValueResolver
	{
	public:
		unsigned char                                              UnknownData_O6V8[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GameResourcePoolCurrentValueResolver
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UGameResourcePoolCurrentValueResolver : public UAttributeValueResolver
	{
	public:
		class UGameResourceData*                                   Resource;                                                // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GameResourcePoolCurrentValueNoPauseOnHealResolver
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGameResourcePoolCurrentValueNoPauseOnHealResolver : public UGameResourcePoolCurrentValueResolver
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GameResourcePoolData
	 * Size -> 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
	 */
	class UGameResourcePoolData : public UGbxDataAsset
	{
	public:
		class UGameResourceData*                                   Resource;                                                // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseMinValue;                                            // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HND2[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        BaseMaxValue;                                            // 0x0040(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		float                                                      StartingValue;                                           // 0x0078(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StartWithMinValue;                                       // 0x007C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StartWithMaxValue;                                       // 0x007D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateCurrentValueOnExtremaChange;                      // 0x007E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H71L[0x1];                                   // 0x007F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumReservedValue;                                    // 0x0080(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckFilledAgainstOldValues;                            // 0x0084(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z9MN[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseConsumptionRate;                                     // 0x0088(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseActiveRegenerationRate;                              // 0x008C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BasePassiveRegenerationRate;                             // 0x0090(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BasePassivePercentRegenerationRate;                      // 0x0094(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BasePassiveMissingPercentRegenerationRate;               // 0x0098(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseOnIdleRegenerationRate;                              // 0x009C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseOnIdleRegenerationDelay;                             // 0x00A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseOnDepletedRegenerationDelay;                         // 0x00A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecentImpulseTimer;                                      // 0x00A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyReplicateToOwner;                                   // 0x00AC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameResourcePoolReplicationType                           ReplicationType;                                         // 0x00AD(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S9FY[0x2];                                   // 0x00AE(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GameResourcePoolManagerComponent
	 * Size -> 0x0128 (FullSize[0x02A0] - InheritedSize[0x0178])
	 */
	class UGameResourcePoolManagerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_ZVRF[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameResourcePool>                           ResourcePools;                                           // 0x0180(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FGameResourcePool>                           PendingResourcePools;                                    // 0x0190(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FGameResourcePoolNet                                ReplicatedPoolData;                                      // 0x01A0(0x0010) Net, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IZKG[0x8];                                   // 0x01B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGameResourcePoolData*>                       InitialResourcePools;                                    // 0x01B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameResourceUserEvent>                      ResourceEvents;                                          // 0x01C8(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AOOP[0xC8];                                  // 0x01D8(0x00C8) MISSED OFFSET (PADDING)

	public:
		void RemoveResourcePoolDelegate(class UGameResourceData* InResourceData, const class FName& DelegatePropertyName, const class FScriptDelegate& ScriptDelegate);
		void RecalculateAttributeInitializedPoolProperties();
		void OnOwnerExperienceLevelChanged(int32_t OldExperienceLevel);
		struct FGameResourcePoolReference GetResourcePoolByResource(class UGameResourceData* Resource);
		struct FGameResourcePoolReference CreatePool(class UGameResourcePoolData* PoolData, bool bReinitializeExistingPool);
		void ClearResourcePoolDelegate(class UGameResourceData* InResourceData, const class FName& DelegatePropertyName);
		void AddResourcePoolDelegate(class UGameResourceData* InResourceData, const class FName& DelegatePropertyName, const class FScriptDelegate& ScriptDelegate);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GameResourcePoolFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameResourcePoolFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetResourcePoolValue(const struct FGameResourcePoolReference& InPool, float InValue);
		void STATIC_ResetResourcePoolRegenDelayByGameResourceData(class AActor* Actor, class UGameResourceData* Resource);
		void STATIC_ResetResourcePoolRegenDelay(const struct FGameResourcePoolReference& InPool);
		void STATIC_RefillResourcePoolByPercentage(const struct FGameResourcePoolReference& InPool, float Percentage, float MaxPercentage);
		bool STATIC_IsResourcePoolInState(const struct FGameResourcePoolReference& InPool, EGameResourcePoolState InState);
		class FName STATIC_GetDelegatePrefixForResourceEvent(struct FGameResourceUserEvent* InResourceUserEvent);
		bool STATIC_EqualEqual_ResourcePoolReference(const struct FGameResourcePoolReference& A, const struct FGameResourcePoolReference& B);
		bool STATIC_EqualEqual_ResourcePoolData(const struct FGameResourcePoolReference& ResourcePoolReference, class UGameResourcePoolData* ResourcePoolData);
		bool STATIC_EqualEqual_ResourceData(const struct FGameResourcePoolReference& ResourcePoolReference, class UGameResourceData* ResourceData);
		void STATIC_DrainResourcePoolByPercentage(const struct FGameResourcePoolReference& InPool, float Percentage, float MinPercentage);
		void STATIC_DeleteResourcePool(struct FGameResourcePoolReference* InPool);
		void STATIC_ClearResourcePoolRegenDelayByGameResourceData(class AActor* Actor, class UGameResourceData* Resource);
		void STATIC_ClearResourcePoolRegenDelay(const struct FGameResourcePoolReference& InPool);
		void STATIC_BreakResourcePoolReference(const struct FGameResourcePoolReference& InPool, bool* bValid, float* CurrentValue, float* MinValue, float* MaxValue);
		void STATIC_AdjustResourcePoolValue(const struct FGameResourcePoolReference& InPool, float InValue);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GameStatChannel
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UGameStatChannel : public UChannel
	{
	public:
		TWeakObjectPtr<class UGameStatsComponent>                  GameStatsComponent;                                      // 0x0068(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GameStatData
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UGameStatData : public UGbxDataAsset
	{
	public:
		int32_t                                                    DefaultValue;                                            // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinValue;                                                // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasMinValue;                                            // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6XHS[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxValue;                                                // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasMaxValue;                                            // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z3CA[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                StatName;                                                // 0x0048(0x0018) Edit, NativeAccessSpecifierPublic
		bool                                                       bProfileStat;                                            // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPartyStat;                                              // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RLD9[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GameStateAttributeContextResolver
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UGameStateAttributeContextResolver : public UAttributeContextResolver
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GameStatList
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGameStatList : public UGbxDataAsset
	{
	public:
		TArray<class UGameStatData*>                               GameStats;                                               // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GameStatsComponent
	 * Size -> 0x0018 (FullSize[0x0190] - InheritedSize[0x0178])
	 */
	class UGameStatsComponent : public UActorComponent
	{
	public:
		TArray<struct FGameStat>                                   GameStats;                                               // 0x0178(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UGameStatChannel>                     GameStatChannel;                                         // 0x0188(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void UpdateStat(class UGameStatData* GameStat, int32_t NewValue);
		void IncrementStat(class UGameStatData* GameStat, int32_t Amount);
		int32_t GetStatValue(class UGameStatData* GameStat);
		TArray<struct FGameStat> GetGameStats();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GameStatsManager
	 * Size -> 0x0030 (FullSize[0x0488] - InheritedSize[0x0458])
	 */
	class AGameStatsManager : public AActor
	{
	public:
		unsigned char                                              UnknownData_2U7P[0x30];                                  // 0x0458(0x0030) MISSED OFFSET (PADDING)

	public:
		void UpdateStat(class AActor* StatContext, class UGameStatData* GameStat, int32_t NewValue);
		void IncrementStat(class AActor* StatContext, class UGameStatData* GameStat, int32_t IncrementAmount);
		int32_t GetStatValue(class AActor* StatContext, class UGameStatData* GameStat);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAction_AICharge
	 * Size -> 0x0088 (FullSize[0x0140] - InheritedSize[0x00B8])
	 */
	class UGbxAction_AICharge : public UGbxAction_SimpleAnim
	{
	public:
		bool                                                       bSetLoopSpeedManually;                                   // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KMUT[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimLoopSpeed;                                           // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StartBlendInTime;                                        // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      LoopBlendInTime;                                         // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StopBlendInTime;                                         // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BlendOutTime;                                            // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FAnimMeshList>                               StartAnims;                                              // 0x00D0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FAnimMeshList>                               LoopAnims;                                               // 0x00E0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FAnimMeshList>                               MissAnims;                                               // 0x00F0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FAnimMeshList>                               StrikeAnims;                                             // 0x0100(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FAnimMeshList>                               HitWallAnims;                                            // 0x0110(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FAnimMeshList>                               ReachCliffAnims;                                         // 0x0120(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FAnimMeshList>                               StopForFriendlyAnims;                                    // 0x0130(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		void OnStrike(class AActor* Actor);
		void OnStopForFriendly(class AActor* Actor);
		void OnReachCliff(class AActor* Actor);
		void OnMiss(class AActor* Actor);
		void OnLoop(class AActor* Actor);
		void OnHitWall(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAction_BlueprintBase
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UGbxAction_BlueprintBase : public UGbxAction
	{
	public:
		bool                                                       bAutoCompleted;                                          // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N7Q5[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAction_ConditionContainer
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class UGbxAction_ConditionContainer : public UGbxAction
	{
	public:
		EActionSelectionMethod                                     ActionSelectionMethod;                                   // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9FG3[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConditionActionPair>                        ConditionList;                                           // 0x0068(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAction_DirectionContainer
	 * Size -> 0x0068 (FullSize[0x00C8] - InheritedSize[0x0060])
	 */
	class UGbxAction_DirectionContainer : public UGbxAction
	{
	public:
		TArray<struct FDirectionActionData>                        DirectionList;                                           // 0x0060(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		struct FRelativeDirectionData                              DirectionData;                                           // 0x0070(0x0050) Edit, NoDestructor, NativeAccessSpecifierPrivate
		EDirectionPlane                                            Plane;                                                   // 0x00C0(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZU6W[0x3];                                   // 0x00C1(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_YTCN[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAction_DodgePicker
	 * Size -> 0x0040 (FullSize[0x00A0] - InheritedSize[0x0060])
	 */
	class UGbxAction_DodgePicker : public UGbxAction
	{
	public:
		class UClass*                                              IdleLeft;                                                // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              IdleRight;                                               // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              MovingLeft;                                              // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              MovingLeftBackward;                                      // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              MovingLeftForward;                                       // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              MovingRight;                                             // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              MovingRightBackward;                                     // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              MovingRightForward;                                      // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAction_DropshipSpawn
	 * Size -> 0x01A0 (FullSize[0x0258] - InheritedSize[0x00B8])
	 */
	class UGbxAction_DropshipSpawn : public UGbxAction_SimpleAnim
	{
	public:
		struct FAnimMeshList                                       StartAnims;                                              // 0x00B8(0x0078) Edit, NativeAccessSpecifierPrivate
		struct FAnimMeshList                                       InAirAnims;                                              // 0x0130(0x0078) Edit, NativeAccessSpecifierPrivate
		struct FAnimMeshList                                       RecoveryAnims;                                           // 0x01A8(0x0078) Edit, NativeAccessSpecifierPrivate
		float                                                      BlendInTime;                                             // 0x0220(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BlendOutTime;                                            // 0x0224(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                AnimSlot;                                                // 0x0228(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RotationLerpTime;                                        // 0x0230(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MoveWithSpawnPointTime;                                  // 0x0234(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SwitchToFallingTime;                                     // 0x0238(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TKGM[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   AnimStart;                                               // 0x0240(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimSequenceBase*                                   AnimInAir;                                               // 0x0248(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimSequenceBase*                                   AnimRecovery;                                            // 0x0250(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAction_KeyedContainer
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UGbxAction_KeyedContainer : public UGbxAction
	{
	public:
		struct FGameplayTag                                        ActionKey;                                               // 0x0060(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAction_Launch
	 * Size -> 0x0150 (FullSize[0x0208] - InheritedSize[0x00B8])
	 */
	class UGbxAction_Launch : public UGbxAction_SimpleAnim
	{
	public:
		float                                                      VelocityMinimum;                                         // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      VelocityScale;                                           // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      VelocityUpBoost;                                         // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RotationTime;                                            // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FAnimMeshList                                       InAirAnims;                                              // 0x00C8(0x0078) Edit, NativeAccessSpecifierPrivate
		struct FAnimMeshList                                       RecoveryAnims;                                           // 0x0140(0x0078) Edit, NativeAccessSpecifierPrivate
		float                                                      BlendInTime;                                             // 0x01B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BlendOutTime;                                            // 0x01BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                AnimSlot;                                                // 0x01C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimSequenceBase*                                   AnimInAir;                                               // 0x01C8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimSequenceBase*                                   AnimRecovery;                                            // 0x01D0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FAnimActionDef                                      InAirAnim;                                               // 0x01D8(0x0018) Deprecated, NoDestructor, NativeAccessSpecifierPrivate
		struct FAnimActionDef                                      RecoveryAnim;                                            // 0x01F0(0x0018) Deprecated, NoDestructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.MotionMatchedAnimationTable
	 * Size -> 0x0058 (FullSize[0x00A0] - InheritedSize[0x0048])
	 */
	class UMotionMatchedAnimationTable : public UGbxAnimTable
	{
	public:
		unsigned char                                              UnknownData_RNF8[0x30];                                  // 0x0048(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                RootMotionBone;                                          // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAxis                                                      RootMotionBoneUpAxis;                                    // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUpAxisIsNegative;                                       // 0x0081(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAxis                                                      RootMotionBoneForwardAxis;                               // 0x0082(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bForwardAxisIsNegative;                                  // 0x0083(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAxis                                                      RootBoneForwardAxis;                                     // 0x0084(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRootForwardAxisIsNegative;                              // 0x0085(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAxis                                                      RootBoneUpAxis;                                          // 0x0086(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRootUpAxisIsNegative;                                   // 0x0087(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NoMotionSpeed;                                           // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseIdlePoseDriving;                                     // 0x008C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SNG9[0x3];                                   // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinIdleTime;                                             // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDynamicToKinematicTransition                              DynamicToKinematicTransition;                            // 0x0094(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AXQX[0x3];                                   // 0x0095(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      BlendToRecoveryTime;                                     // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAllowedDeviation;                                     // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAction_Ragdoll
	 * Size -> 0x00D0 (FullSize[0x0188] - InheritedSize[0x00B8])
	 */
	class UGbxAction_Ragdoll : public UGbxAction_SimpleAnim
	{
	public:
		struct FAnimActionDef                                      RagdollAnim;                                             // 0x00B8(0x0018) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      RagdollDelayTime;                                        // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      UpwardForceMultiplier;                                   // 0x00D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TerminalResultantVelocity;                               // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHaltMotionBeforeImpulseApplication;                     // 0x00DC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PCPV[0x3];                                   // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RagdollAnimBlendInTime;                                  // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RBA6[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimActionDef                                      RagdollLoopingAnim;                                      // 0x00E8(0x0018) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bPlayLoopingAnimWhileNotIdle;                            // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WWUJ[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinRagdollTime;                                          // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                AnimSlot;                                                // 0x0108(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FAttachedObjectFollow>                       AttachedObjects;                                         // 0x0110(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UMotionMatchedAnimationTable*                        RecoveryAnimations;                                      // 0x0120(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHitReactionTag*                                     DeathReactionTag;                                        // 0x0128(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanGetup;                                               // 0x0130(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A1XK[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GetupIdleTime;                                           // 0x0134(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GetupIdleSpeedThreshold;                                 // 0x0138(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R5N0[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                GetupTestBone;                                           // 0x0140(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAxis                                                      TestBoneUpAxis;                                          // 0x0148(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUpAxisIsNegative;                                       // 0x0149(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAxis                                                      TestBoneForwardAxis;                                     // 0x014A(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bForwardAxisIsNegative;                                  // 0x014B(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1YBZ[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimActionDef                                      GetupAnimUp;                                             // 0x0150(0x0018) Deprecated, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAnimActionDef                                      GetupAnimDown;                                           // 0x0168(0x0018) Deprecated, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      GetupBlendInTime;                                        // 0x0180(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GetupBlendOutTime;                                       // 0x0184(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAction_RandomContainer
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UGbxAction_RandomContainer : public UGbxAction
	{
	public:
		TArray<struct FRandomActionPair>                           ActionList;                                              // 0x0060(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAction_StretchBones
	 * Size -> 0x0088 (FullSize[0x0140] - InheritedSize[0x00B8])
	 */
	class UGbxAction_StretchBones : public UGbxAction_SimpleAnim
	{
	public:
		struct FAnimActionDef                                      StretchAnimation;                                        // 0x00B8(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      BlendInTime;                                             // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x00D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AnimSlot;                                                // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FStretchBonesSettings                               StretchBonesSettings;                                    // 0x00E0(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUniformStretch;                                         // 0x0110(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4XC7[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxBlackboardKeySelector                           TargetKey;                                               // 0x0118(0x0010) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             TargetOffset;                                            // 0x0128(0x000C) Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStretchBonesActorTrackingStyle                            ActorTrackingStyle;                                      // 0x0134(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTraceToGround;                                          // 0x0135(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8UNJ[0x2];                                   // 0x0136(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TraceToGroundDistance;                                   // 0x0138(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPredictionDistance;                                   // 0x013C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.StretchBonesBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStretchBonesBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		TArray<struct FGbxActionRegister> STATIC_SetStretchBonesTarget(TArray<struct FGbxActionRegister>* GbxActionRegisters, class AActor* TargetActor, const struct FVector& TargetPosition);
		TArray<struct FGbxActionRegister> STATIC_SetStretchBonesDistance(TArray<struct FGbxActionRegister>* GbxActionRegisters, float Distance);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxActionBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxActionBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_StopLoopingActionClass(class UClass* ActionClass, class AActor* Target);
		void STATIC_StopActionSlot(const class FName& ActionSlotName, class AActor* Target);
		void STATIC_StopActions(class AActor* Target);
		void STATIC_StopActionClass(class UClass* ActionClass, class AActor* Target);
		TArray<struct FGbxActionRegister> STATIC_SetObjectGbxActionRegister(TArray<struct FGbxActionRegister>* GbxActionRegisters, const class FName& RegisterKey, class UObject* Value, bool bReplicates);
		TArray<struct FGbxActionRegister> STATIC_SetNameGbxActionRegister(TArray<struct FGbxActionRegister>* GbxActionRegisters, const class FName& RegisterKey, const class FName& Value, bool bReplicates);
		TArray<struct FGbxActionRegister> STATIC_SetIntGbxActionRegister(TArray<struct FGbxActionRegister>* GbxActionRegisters, const class FName& RegisterKey, int32_t Value, bool bReplicates);
		TArray<struct FGbxActionRegister> STATIC_SetFloatGbxActionRegister(TArray<struct FGbxActionRegister>* GbxActionRegisters, const class FName& RegisterKey, float Value, bool bReplicates);
		void STATIC_K2_UpdateActionPlayRate(class UGbxAction* Action, float PlayRate);
		void STATIC_K2_UpdateActionDirection(class UGbxAction* Action, const struct FVector& Direction);
		void STATIC_K2_StopActionObj(class UGbxAction* Action, class AActor* Target);
		void STATIC_K2_ShowGbxActionScreenLogs(bool bShowLogsOnScreen);
		void STATIC_K2_Resume(class UGbxAction* Action);
		void STATIC_K2_ReplicatedProceedToNextSection(class UGbxAction* Action);
		void STATIC_K2_ReplicatedJumpToNextSection(class UGbxAction* Action);
		void STATIC_K2_ProceedToNextSection(class UGbxAction* Action);
		void STATIC_K2_Pause(class UGbxAction* Action);
		void STATIC_K2_JumpToNextSection(class UGbxAction* Action);
		float STATIC_K2_GetTimeRemaining(class UGbxAction* Target);
		float STATIC_K2_GetMaxCurrentTime(class UGbxAction* Action);
		class UGbxAction* STATIC_K2_GetActionByClass(class UClass* ActionClass, class AActor* Target);
		class FString STATIC_GetSummary_AnimActionDef(const struct FAnimActionDef& AnimActionDef);
		class UClass* STATIC_GetKeyedActionClass(const struct FGameplayTag& ActionKey, class AActor* Target);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxActionComponent
	 * Size -> 0x0268 (FullSize[0x03E0] - InheritedSize[0x0178])
	 */
	class UGbxActionComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_A867[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGbxActionSlot>                              ActionSlots;                                             // 0x0180(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FDataActionPair>                             EditorKeyedActionList;                                   // 0x0190(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDataActionPair_Spawn>                       SpawnKeyedActionList;                                    // 0x01A0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDataActionPair_SpawnMesh>                   SpawnMeshKeyedActionList;                                // 0x01B0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDataActionPair_SmartObject>                 SmartObjectKeyedActionList;                              // 0x01C0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A6PP[0x150];                                 // 0x01D0(0x0150) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnActionStarted;                                         // 0x0320(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnActionStopped;                                         // 0x0330(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UMDJ[0xA0];                                  // 0x0340(0x00A0) MISSED OFFSET (PADDING)

	public:
		void UpdateActionRemoteServer(const struct FActionState_Base& ActionData);
		void StopOnRemoteServer(int32_t ManagerRepId, EGbxActionEndState EndState);
		void StopLoopingActionClass(class UClass* ActionClass);
		void StopActionSlot(const class FName& ActionSlotName);
		void StopActions();
		void StopActionClass(class UClass* ActionClass);
		void PlayOnRemoteServer(class UClass* ActionClass, const struct FActionState_Base& ActionData);
		void OnComponentUnregistered(class UActorComponent* ActorComponent);
		void OnComponentDetached(class USceneComponent* SceneComponent);
		void OnComponentAttached(class USceneComponent* SceneComponent);
		void NotifyInterruptRequest();
		class UGbxAction* K2_Play(class UClass* ActionClass);
		bool K2_IsPlayingObj(class UGbxAction* Action);
		class UGbxAction* K2_GetActionBySlot(const class FName& ActionSlotName);
		class UGbxAction* K2_GetActionByClass(class UClass* ActionClass);
		bool IsPlayingSlot(const class FName& ActionSlotName);
		bool IsPlayingClass(class UClass* ActionClass);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxActionDataAsset
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGbxActionDataAsset : public UGbxDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxActionManager
	 * Size -> 0x0110 (FullSize[0x0568] - InheritedSize[0x0458])
	 */
	class AGbxActionManager : public AActor
	{
	public:
		struct FActionStateNet                                     ActionRepWrapper;                                        // 0x0458(0x0108) Net, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9IIE[0x8];                                   // 0x0560(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAnimBlueprintProfile
	 * Size -> 0x0278 (FullSize[0x02A8] - InheritedSize[0x0030])
	 */
	class UGbxAnimBlueprintProfile : public UGbxDataAsset
	{
	public:
		bool                                                       bImportedLegIKSettings;                                  // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V7VD[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FootIKTraceUpScale;                                      // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootIKTraceDownScale;                                    // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootIKOffsetInterpSpeed;                                 // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FootIKTargetOffset;                                      // 0x0040(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FootIKFootLODThreshold;                                  // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNumericRange                                       MeshOffsetCharacterSpeedRange;                           // 0x0050(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MeshIKOffsetInterpSpeed;                                 // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldLimitFootDistanceToMeshOffset;                    // 0x005C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JHSU[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SlopeAdaptation;                                         // 0x0060(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RILJ[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      SlopeAdaptationBone;                                     // 0x0070(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MaxSlopeAngle;                                           // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlopeNormalMinInterpSpeed;                               // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlopeNormalMaxInterpSpeed;                               // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNumericRange                                       SlopeNormalCharacterSpeedRange;                          // 0x0094(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    FootIKLODThreshold;                                      // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootIKLODInterpolationSpeed;                             // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EH7A[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScreenSizeSelection                                FootIkScreenSizeThreshold;                               // 0x00A8(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseFootIkScreenSizeThreshold;                           // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M7C2[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScreenSizeSelection                                FootIkTraceScreenSizeThreshold;                          // 0x00C8(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseFootIkTraceScreenSizeThreshold;                      // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VN9N[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FootIKReachPrecision;                                    // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FootIKMaxIterations;                                     // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MFXC[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAnimLegIKDefinition>                        FootIKLegsDefinition;                                    // 0x00F0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      MinVelocity;                                             // 0x0100(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxVelocity;                                             // 0x0104(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      BoneToModify;                                            // 0x0108(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      ParentBoneToModify;                                      // 0x0120(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		EGbxLookAxisOption                                         ParentLookAxis;                                          // 0x0138(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BSHZ[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBoneBlendParams>                            BonesToModify;                                           // 0x0140(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FBoneBlendParams>                            EyeBonesToModify;                                        // 0x0150(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      LookAtBlinkAngleOverride;                                // 0x0160(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLookAtBlinkAngleOverride;                            // 0x0164(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseEyeMovement;                                         // 0x0165(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V3IB[0x2];                                   // 0x0166(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            EyeShiftMin;                                             // 0x0168(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            EyeShiftMax;                                             // 0x0174(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            EyeGlanceMin;                                            // 0x0180(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            EyeGlanceMax;                                            // 0x018C(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      EyeFocusTimeMin;                                         // 0x0198(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EyeFocusTimeMax;                                         // 0x019C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EyeGlanceTimeMin;                                        // 0x01A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EyeGlanceTimeMax;                                        // 0x01A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EyeShiftTimeMin;                                         // 0x01A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EyeShiftTimeMax;                                         // 0x01AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LookAtEyeLODThreshold;                                   // 0x01B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LookAtLODThreshold;                                      // 0x01B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LookAtLODInterpolationSpeed;                             // 0x01B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_63WI[0x4];                                   // 0x01BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScreenSizeSelection                                LookAtEyeScreenSizeThreshold;                            // 0x01C0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseLookAtEyeScreenSizeThreshold;                        // 0x01D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SDZY[0x7];                                   // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScreenSizeSelection                                LookAtScreenSizeThreshold;                               // 0x01E0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseLookAtScreenSizeThreshold;                           // 0x01F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2GY3[0x7];                                   // 0x01F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FForwardDynamicsNodeProfile>                 ForwardDynamicsNodeList;                                 // 0x0200(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UPhysicsAsset*                                       PhysicsAsset;                                            // 0x0210(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TeethOffsetOverride;                                     // 0x0218(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTeethOffsetOverride;                                 // 0x0224(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QXPF[0x3];                                   // 0x0225(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      UpperTeethBoneRef;                                       // 0x0228(0x0018) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		TMap<class FName, class FName>                             BoneTagToBoneOverrideNameMap;                            // 0x0240(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseUpperTeethBoneRefOverride;                           // 0x0290(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_58KX[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       DefaultIdleLoopAnimation;                                // 0x0298(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SlotName;                                                // 0x02A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void RebuildBoneLists();
		void AnimBlueprintImportFunction(EAnimBPProfileImport ImportType);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAnimStateMachineDefinition
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UGbxAnimStateMachineDefinition : public UGbxDataAsset
	{
	public:
		class FName                                                Name;                                                    // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        StateMachines;                                           // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FAnimStateGroup>                             StateGroups;                                             // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAnimStateManager_Falling
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UGbxAnimStateManager_Falling : public UGbxAnimStateManager
	{
	public:
		class UGbxCharacterAnimInstance*                           GbxCharAnimInst;                                         // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxCharacterMovementComponent*                      GbxCharMoveComponent;                                    // 0x0040(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAnimStateManager_RootMotion
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UGbxAnimStateManager_RootMotion : public UGbxAnimStateManager
	{
	public:
		class UGbxCharacterMovementComponent*                      GbxCharMoveComponent;                                    // 0x0038(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAttributeData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGbxAttributeData : public UGbxDataAsset
	{
	public:
		class UAttributeContextResolver*                           ContextResolver;                                         // 0x0030(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAttributeValueResolver*                             ValueResolver;                                           // 0x0038(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		bool CanSetBaseValue();
		bool CanBindToOnChangedEvent();
		bool CanAddModifiers();
		bool CanAddAndRemoveModifiers();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAttributeFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxAttributeFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UnbindFromOnAttributeChanged(const struct FGbxAttributeDelegateBindingHandle& BindingHandle);
		void STATIC_UnbindEventFromOnIntegerAttributeChanged(struct FGbxAttributeInteger* Attribute, const class FScriptDelegate& Delegate);
		void STATIC_UnbindEventFromOnFloatAttributeChanged(struct FGbxAttributeFloat* Attribute, const class FScriptDelegate& Delegate);
		void STATIC_UnbindAllEventsFromOnIntegerAttributeChanged(struct FGbxAttributeInteger* Attribute);
		void STATIC_UnbindAllEventsFromOnFloatAttributeChanged(struct FGbxAttributeFloat* Attribute);
		void STATIC_RemoveMultipleAttributeModifiers(TArray<struct FGbxAttributeModifierHandle>* ModifierHandles);
		void STATIC_RemoveModifierFromGbxAttribute(class UGbxAttributeData* Attribute, class UObject* ContextSource, struct FGbxAttributeModifierHandle* ModifierHandle, EGbxAttributeModifierActionExecOutput* ModifierActionResult);
		bool STATIC_RemoveAttributeModifier(struct FGbxAttributeModifierHandle* ModifierHandle);
		struct FGbxAttributeDelegateBindingHandle STATIC_RefreshBindingToOnAttributeChangedEvent(const struct FGbxAttributeDelegateBindingHandle& BindingHandle, class UObject* ContextSource);
		struct FGbxAttributeInteger STATIC_MakeGbxAttributeInteger(int32_t BaseValue);
		struct FGbxAttributeFloat STATIC_MakeGbxAttributeFloat(float BaseValue);
		int32_t STATIC_GetValueOfAttributeAsInteger(class UGbxAttributeData* Attribute, class UObject* ContextSource, int32_t DefaultValue);
		bool STATIC_GetValueOfAttributeAsBoolean(class UGbxAttributeData* Attribute, class UObject* ContextSource, bool DefaultValue);
		float STATIC_GetValueOfAttribute(class UGbxAttributeData* Attribute, class UObject* ContextSource, float DefaultValue);
		float STATIC_GetValueFromAttributeDefinedRow(const struct FDataTableRowHandle& RowHandle, class UObject* ContextSource);
		float STATIC_EvaluateAttributeInitializer(class UClass* Initializer, class UObject* ContextSource);
		float STATIC_EvaluateAttributeInitializationData(const struct FAttributeInitializationData& InitializationData, class UObject* ContextSource);
		bool STATIC_EqualEqual_GbxAttributeIntegerValue(const struct FGbxAttributeInteger& A, int32_t B);
		bool STATIC_EqualEqual_GbxAttributeInteger(const struct FGbxAttributeInteger& A, const struct FGbxAttributeInteger& B);
		bool STATIC_EqualEqual_GbxAttributeFloatValue(const struct FGbxAttributeFloat& A, float B);
		bool STATIC_EqualEqual_GbxAttributeFloat(const struct FGbxAttributeFloat& A, const struct FGbxAttributeFloat& B);
		class FString STATIC_Conv_GbxAttributeModifierHandleToString(const struct FGbxAttributeModifierHandle& Attribute);
		class FString STATIC_Conv_GbxAttributeIntegerToString(const struct FGbxAttributeInteger& Attribute);
		int32_t STATIC_Conv_GbxAttributeIntegerToInteger(const struct FGbxAttributeInteger& Attribute);
		class FString STATIC_Conv_GbxAttributeFloatToString(const struct FGbxAttributeFloat& Attribute);
		float STATIC_Conv_GbxAttributeFloatToFloat(const struct FGbxAttributeFloat& Attribute);
		class FString STATIC_Conv_AttributeInitializationDataToString(const struct FAttributeInitializationData& InitData);
		void STATIC_BreakGbxAttributeInteger(const struct FGbxAttributeInteger& Attribute, int32_t* Value, int32_t* BaseValue);
		void STATIC_BreakGbxAttributeFloat(const struct FGbxAttributeFloat& Attribute, float* Value, float* BaseValue);
		void STATIC_BindEventToOnIntegerAttributeChanged(struct FGbxAttributeInteger* Attribute, const class FScriptDelegate& Delegate);
		void STATIC_BindEventToOnFloatAttributeChanged(struct FGbxAttributeFloat* Attribute, const class FScriptDelegate& Delegate);
		struct FGbxAttributeDelegateBindingHandle STATIC_BindEventToOnAttributeChanged(class UGbxAttributeData* Attribute, class UObject* ContextSource, const class FScriptDelegate& Delegate);
		TArray<struct FGbxAttributeModifierHandle> STATIC_ApplyMultipleAttributeEffects(TArray<struct FAttributeEffectData> Effects, class UObject* ModifierValueContext, class UObject* AttributeToModifyContextSource);
		void STATIC_ApplyMultipleAttributeBaseValueData(TArray<struct FAttributeBaseValueData> BaseValueData, class UObject* AttributeToSetContextSource, class UObject* ValueContext);
		struct FGbxAttributeModifierHandle STATIC_ApplyAttributeEffect(const struct FAttributeEffectData& Effect, class UObject* ModifierValueContext, class UObject* AttributeToModifyContextSource, EGbxAttributeModifierActionExecOutput* ModifierActionResult);
		void STATIC_ApplyAttributeBaseValueData(const struct FAttributeBaseValueData& BaseValueData, class UObject* AttributeToSetContextSource, class UObject* ValueContext, EGbxAttributeModifierActionExecOutput* ModifierActionResult);
		struct FGbxAttributeModifierHandle STATIC_AddModifierToGbxAttribute(class UGbxAttributeData* Attribute, class UObject* ContextSource, EGbxAttributeModifierType ModifierType, float ModifierValue, EGbxAttributeModifierActionExecOutput* ModifierActionResult);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAttributesComponent
	 * Size -> 0x0010 (FullSize[0x0188] - InheritedSize[0x0178])
	 */
	class UGbxAttributesComponent : public UActorComponent
	{
	public:
		TArray<class UGbxAttributeSet*>                            AttributeSets;                                           // 0x0178(0x0010) Edit, ExportObject, Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		bool IsAttributeSetClassUnrelatedToExistingSet(class UClass* AttributeSetClass);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAttributeSet
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UGbxAttributeSet : public UObject
	{
	public:
		class UAttributeContextResolver*                           ContextResolver;                                         // 0x0028(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAttributeSetBlueprint
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class UGbxAttributeSetBlueprint : public UBlueprint
	{
	public:
		TArray<struct FPropertyToAttributeMapping>                 PropertyToAttributeMapping;                              // 0x00E8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAttributeSetContextResolver
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	class UGbxAttributeSetContextResolver : public UAttributeContextResolver
	{
	public:
		class UClass*                                              AttributeSetClass;                                       // 0x0050(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxAttributeSetValueResolver
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UGbxAttributeSetValueResolver : public UAttributePropertyValueResolver
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxBlackboardKeySelectorExt
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxBlackboardKeySelectorExt : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetValueAsVector(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, const struct FVector& Value);
		void STATIC_SetValueAsTargetActorInfo(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, const struct FTargetActorInfo& Value);
		void STATIC_SetValueAsString(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, const class FString& Value);
		void STATIC_SetValueAsRotator(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, const struct FRotator& Value);
		void STATIC_SetValueAsObject(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, class UObject* Value);
		void STATIC_SetValueAsName(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, const class FName& Value);
		void STATIC_SetValueAsInt(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, int32_t Value);
		void STATIC_SetValueAsFloat(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, float Value);
		void STATIC_SetValueAsFlag(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, bool Value, float Duration);
		void STATIC_SetValueAsEnum(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, unsigned char Value);
		void STATIC_SetValueAsClass(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, class UClass* Value);
		void STATIC_SetValueAsBool(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, bool Value);
		struct FVector STATIC_GetValueAsVector(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
		struct FTargetActorInfo STATIC_GetValueAsTargetActorInfo(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
		class FString STATIC_GetValueAsString(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
		struct FRotator STATIC_GetValueAsRotator(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
		class UObject* STATIC_GetValueAsObject(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
		class FName STATIC_GetValueAsName(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
		int32_t STATIC_GetValueAsInt(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
		float STATIC_GetValueAsFloat(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
		unsigned char STATIC_GetValueAsEnum(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
		class UClass* STATIC_GetValueAsClass(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
		bool STATIC_GetValueAsBool(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
		class AActor* STATIC_GetValueAsActor(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
		class FString STATIC_GetPropertyDescription(const struct FGbxBlackboardKeySelector& BBKey, class UProperty* Property);
		void STATIC_ClearValue(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxBoneModifyProfile
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UGbxBoneModifyProfile : public UGbxDataAsset
	{
	public:
		class UAnimSequence*                                       ReferenceAnimation;                                      // 0x0030(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTranslation;                                         // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRotation;                                            // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseScale;                                               // 0x003A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxBoneModifyProfile_PoseMode                             PoseMode;                                                // 0x003B(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimationTime;                                           // 0x003C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FBoneModifyInfo>                             Bones;                                                   // 0x0040(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		TArray<struct FBoneModifyState>                            BoneModStates;                                           // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCameraShake
	 * Size -> 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
	 */
	class UGbxCameraShake : public UCameraShake
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCondition_ActorIsOfClass
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	class UGbxCondition_ActorIsOfClass : public UGbxCondition
	{
	public:
		class UClass*                                              InputClass;                                              // 0x0088(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCheckAbsolute;                                          // 0x0090(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VGHI[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCondition_AttackedRecently
	 * Size -> 0x0080 (FullSize[0x0108] - InheritedSize[0x0088])
	 */
	class UGbxCondition_AttackedRecently : public UGbxCondition
	{
	public:
		struct FGbxParam                                           AttackedWithin;                                          // 0x0088(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCondition_Blueprint
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UGbxCondition_Blueprint : public UGbxCondition
	{
	public:
		bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCondition_CharacterMass
	 * Size -> 0x0020 (FullSize[0x00A8] - InheritedSize[0x0088])
	 */
	class UGbxCondition_CharacterMass : public UGbxCondition
	{
	public:
		EMassComparison                                            ComparisonTest;                                          // 0x0088(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IS8P[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMassSelection                                      Mass;                                                    // 0x0090(0x0018) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCondition_Comparison
	 * Size -> 0x0078 (FullSize[0x0100] - InheritedSize[0x0088])
	 */
	class UGbxCondition_Comparison : public UGbxCondition
	{
	public:
		struct FAttributeInitializationData                        OperandA;                                                // 0x0088(0x0038) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate
		EConditionComparisonOperatorType                           Operator;                                                // 0x00C0(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YULZ[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        OperandB;                                                // 0x00C8(0x0038) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCondition_Compound
	 * Size -> 0x0018 (FullSize[0x00A0] - InheritedSize[0x0088])
	 */
	class UGbxCondition_Compound : public UGbxCondition
	{
	public:
		class UGbxCondition*                                       Condition1;                                              // 0x0088(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ECompoundConditionOperatorType                             Operator;                                                // 0x0090(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0V7M[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCondition*                                       Condition2;                                              // 0x0098(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCondition_Flag
	 * Size -> 0x0048 (FullSize[0x00D0] - InheritedSize[0x0088])
	 */
	class UGbxCondition_Flag : public UGbxCondition
	{
	public:
		struct FGbxFlagEval                                        FlagEval;                                                // 0x0088(0x0048) Edit, NoDestructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCondition_HasActorTags
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	class UGbxCondition_HasActorTags : public UGbxCondition
	{
	public:
		struct FActorTagCompositeQuery                             ActorTagQuery;                                           // 0x0088(0x0010) Edit, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCondition_HasGameplayTags
	 * Size -> 0x0020 (FullSize[0x00A8] - InheritedSize[0x0088])
	 */
	class UGbxCondition_HasGameplayTags : public UGbxCondition
	{
	public:
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0088(0x0020) Edit, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCondition_HasInstigatedStatusEffect
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UGbxCondition_HasInstigatedStatusEffect : public UGbxCondition
	{
	public:
		class UStatusEffectData*                                   StatusEffectData;                                        // 0x0088(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCondition_IsBlackboardTarget
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UGbxCondition_IsBlackboardTarget : public UGbxCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCondition_IsLowOnHealth
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UGbxCondition_IsLowOnHealth : public UGbxCondition
	{
	public:
		float                                                      LowHealth;                                               // 0x0088(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEvaluateOnContextOwner;                                 // 0x008C(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S4VD[0x3];                                   // 0x008D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCondition_IsPlayerController
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UGbxCondition_IsPlayerController : public UGbxCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCondition_IsTargetAimedAtMe
	 * Size -> 0x0080 (FullSize[0x0108] - InheritedSize[0x0088])
	 */
	class UGbxCondition_IsTargetAimedAtMe : public UGbxCondition
	{
	public:
		struct FGbxParam                                           AngleThreshold;                                          // 0x0088(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCondition_IsTrue
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UGbxCondition_IsTrue : public UGbxCondition
	{
	public:
		bool                                                       bIsTrue;                                                 // 0x0088(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NA3K[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCondition_List
	 * Size -> 0x0018 (FullSize[0x00A0] - InheritedSize[0x0088])
	 */
	class UGbxCondition_List : public UGbxCondition
	{
	public:
		ECompoundConditionOperatorType                             Operator;                                                // 0x0088(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VJ8L[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGbxCondition*>                               Conditions;                                              // 0x0090(0x0010) Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		bool RequiresNativeClass();
		class UClass* GetRequiredInterface();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCondition_SensedRecently
	 * Size -> 0x0098 (FullSize[0x0120] - InheritedSize[0x0088])
	 */
	class UGbxCondition_SensedRecently : public UGbxCondition
	{
	public:
		struct FGbxParam                                           SensedWithin;                                            // 0x0088(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UClass*>                                      Senses;                                                  // 0x0108(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		bool                                                       bAnyTarget;                                              // 0x0118(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KZ7L[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCondition_TeamAttitude
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UGbxCondition_TeamAttitude : public UGbxCondition
	{
	public:
		unsigned char                                              bHostile : 1;                                            // 0x0088(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bNeutral : 1;                                            // 0x0088(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bFriendly : 1;                                           // 0x0088(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_470V[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCondition_TeamCheck
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UGbxCondition_TeamCheck : public UGbxCondition
	{
	public:
		class UTeam*                                               InputTeam;                                               // 0x0088(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCustomizationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxCustomizationInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCustomizationTargetData
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UGbxCustomizationTargetData : public UGbxDataAsset
	{
	public:
		class FText                                                DisplayName;                                             // 0x0030(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxCustomizationTypeData
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UGbxCustomizationTypeData : public UGbxDataAsset
	{
	public:
		class FText                                                CustomizationTypeName;                                   // 0x0030(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                CustomizationTypeDescription;                            // 0x0048(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bUnique;                                                 // 0x0060(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6E5U[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCustomizationTypeData*                           DependentCustomizationType;                              // 0x0068(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxCustomizationTargetData*                         DependentCustomizationTarget;                            // 0x0070(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AssociatedUnlockStat[0x28];                              // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxGameSystemCore.GbxCustomizationTypeData.AssociatedUnlockStat

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxDataTableFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxDataTableFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_GetDataTableValueFromHandle(const struct FDataTableValueHandle& ValueHandle, class UObject* ContextSource, float DefaultValue);
		bool STATIC_GetDataTableValue(class UDataTable* Table, const class FName& RowName, const class FName& ValueName, class UScriptStruct* ValueInStructType, int32_t* OutValue);
		class FString STATIC_Conv_DataTableValueHandleToString(const struct FDataTableValueHandle& ValueHandle);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxEnvQueryHotSpotProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxEnvQueryHotSpotProviderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxEqsRenderingComponent
	 * Size -> 0x0120 (FullSize[0x0850] - InheritedSize[0x0730])
	 */
	class UGbxEqsRenderingComponent : public UEQSRenderingComponent
	{
	public:
		unsigned char                                              UnknownData_GY1N[0x8];                                   // 0x0730(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bExecuteQuery;                                           // 0x0738(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEqsTraceDrawMode                                          TraceDrawMode;                                           // 0x0739(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P2Z3[0x6];                                   // 0x073A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ExternalQueryParams;                                     // 0x0740(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEnvQueryParams                                     EnvQueryParams;                                          // 0x0750(0x00B8) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5CK1[0x48];                                  // 0x0808(0x0048) MISSED OFFSET (PADDING)

	public:
		void GetAvailableEnvQueryParamRefNames(TArray<class FString>* Names);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxEventDelegateBinding
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGbxEventDelegateBinding : public UDynamicBlueprintBinding
	{
	public:
		TArray<struct FGbxBlueprintlegateBinding>                  DelegateBindings;                                        // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxFeedbackBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGbxFeedbackBase : public UGbxDataAsset
	{
	public:
		void STATIC_StopGbxFeedback(class UGbxFeedbackBase* FeedbackData, class UObject* WorldContextObject, class AGbxPlayerController* Controller);
		void STATIC_PlayGbxFeedbackData3D(class UGbxFeedbackBase* FeedbackData, class UObject* WorldContextObject, class AGbxPlayerController* Controller, const struct FVector& SourceLocation, bool bLoop, bool bIgnoreController, float Scale, class UObject* SourceContext, float EffectFalloffMinDistance, float EffectFalloffMaxDistance);
		void STATIC_PlayGbxFeedbackData2D(class UGbxFeedbackBase* FeedbackData, class UObject* WorldContextObject, class AGbxPlayerController* Controller, bool bLoop, bool bIgnoreController, float Scale, class UObject* SourceContext);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxFeedbackData
	 * Size -> 0x01E8 (FullSize[0x0218] - InheritedSize[0x0030])
	 */
	class UGbxFeedbackData : public UGbxFeedbackBase
	{
	public:
		int32_t                                                    FeedbackType;                                            // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1PAB[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FForceFeedbackChannelDetails>                ControllerRumbleDetails;                                 // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UForceFeedbackEffect*>                        ExternalControllerRumbleDetails;                         // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FForceFeedbackChannelDetails>                MinControllerRumbleDetails;                              // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UForceFeedbackEffect*>                        MinExternalControllerRumbleDetails;                      // 0x0068(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bAbsoluteControllerRumbleScale;                          // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5B6J[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CameraShakeBase;                                         // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              CameraShakeDirectionalY;                                 // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomShakeInterval;                                     // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRandomShakeScalar;                                    // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRandomShakeScalar;                                    // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUnique;                                                 // 0x009C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseContinuousAttributeScale;                            // 0x009D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7QY1[0x2];                                   // 0x009E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        ContinuousScale;                                         // 0x00A0(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  ContinuousScaleCurve;                                    // 0x00D8(0x0078) Edit, NativeAccessSpecifierPublic
		bool                                                       bScaleDownOverTime;                                      // 0x0150(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseScaleOverTimeCurve;                                  // 0x0151(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6ZFU[0x6];                                   // 0x0152(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  ScaleOverTimeCurve;                                      // 0x0158(0x0078) Edit, NativeAccessSpecifierPublic
		bool                                                       bPlayRadialBlur;                                         // 0x01D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S7ST[0x3];                                   // 0x01D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRadialBlurSelection                                RadialBlurInfo;                                          // 0x01D4(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverrideRadialBlurCenter;                               // 0x01E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseContextAsWorldSpaceCenter;                           // 0x01E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SCKK[0x2];                                   // 0x01E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RadialBlurWorldSpaceCenter;                              // 0x01E4(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RadialBlurMaxDistance;                                   // 0x01F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7692[0x4];                                   // 0x01F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     ScreenParticles;                                         // 0x01F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideWhenFinished;                                       // 0x0200(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XI2E[0x3];                                   // 0x0201(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ContentDims;                                             // 0x0204(0x0008) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleDepth;                                           // 0x020C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScreenParticleScalingMode                                 ScalingMode;                                             // 0x0210(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyOwnerSee;                                           // 0x0211(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysVisible;                                          // 0x0212(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTickParticleEvenWhenPaused;                             // 0x0213(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLetSystemFinishAfterStopping;                           // 0x0214(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9Y4O[0x3];                                   // 0x0215(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxFeedbackList
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGbxFeedbackList : public UGbxFeedbackBase
	{
	public:
		TArray<class UGbxFeedbackData*>                            FeedbackList;                                            // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxFeedbackManager
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UGbxFeedbackManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_11UW[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxFlagData
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UGbxFlagData : public UGbxDataAsset
	{
	public:
		class UGbxCondition*                                       Condition;                                               // 0x0030(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAttributeContextResolver*                           ContextResolver;                                         // 0x0038(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxFlagValueResolver*                               ValueResolver;                                           // 0x0040(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxFlagFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxFlagFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetFlagValue(class UObject* WorldContextObject, struct FGbxFlag* Flag, bool bNewValue);
		void STATIC_SetFlagTrueTimed(class UObject* WorldContextObject, struct FGbxFlag* Flag, float Duration);
		void STATIC_SetFlagDataValue(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, bool bNewValue);
		void STATIC_SetFlagDataTrueTimed(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, float Duration);
		bool STATIC_GetFlagValue(class UObject* WorldContextObject, const struct FGbxFlag& Flag);
		bool STATIC_GetFlagDataValue(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource);
		bool STATIC_FlagTrueWithin(class UObject* WorldContextObject, const struct FGbxFlag& Flag, float CheckTime);
		bool STATIC_FlagTrueFor(class UObject* WorldContextObject, const struct FGbxFlag& Flag, float CheckTime);
		bool STATIC_FlagFalseWithin(class UObject* WorldContextObject, const struct FGbxFlag& Flag, float CheckTime);
		bool STATIC_FlagFalseFor(class UObject* WorldContextObject, const struct FGbxFlag& Flag, float CheckTime);
		bool STATIC_FlagDataTrueWithin(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, float CheckTime);
		bool STATIC_FlagDataTrueFor(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, float CheckTime);
		bool STATIC_FlagDataFalseWithin(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, float CheckTime);
		bool STATIC_FlagDataFalseFor(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, float CheckTime);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.FlagPropertyTestContext
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UFlagPropertyTestContext : public UObject
	{
	public:
		struct FGbxFlag                                            TestFlag;                                                // 0x0028(0x000C) NoDestructor, NativeAccessSpecifierPublic
		struct FFlagPropertyTestStruct                             TestStruct;                                              // 0x0034(0x000C) NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.FlagPropertyTestContextResolver
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UFlagPropertyTestContextResolver : public UAttributeContextResolver
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxFlagValueResolver
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxFlagValueResolver : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxFlagValueResolver_Property
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UGbxFlagValueResolver_Property : public UGbxFlagValueResolver
	{
	public:
		struct FParsedProperty                                     Property;                                                // 0x0028(0x0080) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.BaseMenuStackMenuInfo
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBaseMenuStackMenuInfo : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxGameplayStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxGameplayStatics : public UGameplayStatics
	{
	public:
		void STATIC_SetTeamCollisionResponseWith(class AActor* Actor, class AActor* TeamActor, bool bIgnore);
		void STATIC_SetTeamCollisionResponseToChannel(class AActor* Actor, ETeamCollisionChannel Channel, bool bIgnore);
		void STATIC_SetTeamCollisionChannelFrom(class AActor* Actor, class AActor* TeamActor, bool bOn);
		void STATIC_SetTeamCollisionChannel(class AActor* Actor, ETeamCollisionChannel Channel, bool bOn);
		bool STATIC_SetPlayerMaster(class AActor* AIActor, class AActor* PlayerMaster);
		void STATIC_SetComponentTeamCollisionResponseWith(class USceneComponent* Component, class AActor* TeamActor, bool bIgnore, bool bPropagateToChildren);
		void STATIC_SetComponentTeamCollisionResponseToChannel(class USceneComponent* Component, ETeamCollisionChannel Channel, bool bIgnore, bool bPropagateToChildren);
		void STATIC_SetComponentTeamCollisionChannel(class USceneComponent* Component, ETeamCollisionChannel Channel, bool bOn, bool bPropagateToChildren);
		void STATIC_ProjectFromQueryToSimulation(class UGbxSkeletalMeshComponent* Component, const class FName& BodyName, struct FVector* InOutHitPoint, struct FVector* InOutHitNormal);
		class APlayerController* STATIC_GetPrimaryPlayerController(class UObject* WorldContextObject);
		class AGbxCharacter* STATIC_GetAssociatedPrimaryCharacter(class AActor* Actor);
		struct FTransform STATIC_AlignTransformToSurface(const struct FTransform& Transform, const struct FVector& SurfaceNormal);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxGameStatsBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxGameStatsBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UpdateStatForParty(class UObject* WorldContextObject, class UGameStatData* StatData, int32_t NewValue);
		void STATIC_UpdateStat(class AActor* ContextActor, class UGameStatData* StatData, int32_t NewValue);
		void STATIC_IncrementStatForParty(class UObject* WorldContextObject, class UGameStatData* StatData, int32_t Amount);
		void STATIC_IncrementStat(class AActor* ContextActor, class UGameStatData* StatData, int32_t Amount);
		int32_t STATIC_GetStatValue(class AActor* ContextActor, class UGameStatData* StatData);
		void STATIC_DecrementStatForParty(class UObject* WorldContextObject, class UGameStatData* StatData, int32_t Amount);
		void STATIC_DecrementStat(class AActor* ContextActor, class UGameStatData* StatData, int32_t Amount);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxGameSystemCoreBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetComponentPhysicalRotation(class UPrimitiveComponent* Target, float PitchRotation, float YawRotation, float RollRotation, const class FName& BoneName);
		void STATIC_ResourceUnlockTurns(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceUnlockTickAndRefreshBones(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceUnlockRotation(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceUnlockMovement(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceUnlockMomentum(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceUnlockMantling(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceUnlockLookAtTargetLocation(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceUnlockLookAt(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceUnlockJumping(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceUnlockHandIk(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceUnlockGod(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceUnlockFootIkTracing(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceUnlockFootIk(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceUnlockDodging(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceUnlockDemigod(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceUnlockCrouching(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceUnlockAIThinking(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceUnlockAiming(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceLockTurns(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceLockTickAndRefreshBones(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceLockTargetable(class AActor* Actor, const class FName& Reason, bool bTargetable);
		void STATIC_ResourceLockRotation(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceLockPhysicsRotation(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceLockMovement(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceLockMomentum(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceLockMantling(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceLockLookAtTargetLocation(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceLockLookAt(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceLockJumping(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceLockHandIk(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceLockGod(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceLockFootIkTracing(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceLockFootIk(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceLockDodging(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceLockDemigod(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceLockCrouching(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceLockAIThinking(class AActor* Actor, const class FName& Reason, bool bAbort);
		void STATIC_ResourceLockAiming(class AActor* Actor, const class FName& Reason);
		bool STATIC_IsSplitScreen(class UGameInstance* GameInstance);
		bool STATIC_IsPlayer(class AActor* Actor);
		bool STATIC_IsContentCensored(class UObject* WorldContextObject);
		void STATIC_HoverComponentAtActor(class USceneComponent* Component, class AActor* TargetActor, float Altitude, float Radius, float AccelerationTime, float Speed, float Duration, const struct FLatentActionInfo& LatentInfo);
		struct FVector STATIC_GetRelativeDirection(const struct FRelativeDirectionData& RelativeDirectionData, const struct FVector& DefaultDirection, class AActor* SourceActor, const class FName& SourceSocketName, class AActor* TargetActor);
		float STATIC_GetCurveFloatValue(const struct FRuntimeFloatCurve& Curve, float InTime);
		bool STATIC_GetAreAnyPlayersOverlappingActors(class UObject* WorldContextObject, TArray<class AActor*> Actors);
		bool STATIC_GetAreAnyPlayersOverlappingActor(class UObject* WorldContextObject, class AActor* Actor);
		bool STATIC_GetAreAllPlayersOverlappingActors(class UObject* WorldContextObject, TArray<class AActor*> Actors);
		bool STATIC_GetAreAllPlayersOverlappingActor(class UObject* WorldContextObject, class AActor* Actor);
		void STATIC_GetActorListTrimmedToBestCluster(TArray<class AActor*>* OutputActors, struct FVector* ClusterMidpoint, TArray<class AActor*> InputActors, class AActor* SourceActor, float ClusterRadius, bool bPreferClusterContainingCurrentTarget);
		void STATIC_BranchOnIsPlayer(class AActor* Actor, EIsPlayerExecOutput* Branches);
		void STATIC_BranchOnIsAutonomous(class AActor* Actor, EIsAutonomousOuput* Branches);
		void STATIC_AreAnyPlayersOverlappingActors(class UObject* WorldContextObject, TArray<class AActor*> Actors, EPlayersOverlappingActorOutput* Branches);
		void STATIC_AreAnyPlayersOverlappingActor(class UObject* WorldContextObject, class AActor* Actor, EPlayersOverlappingActorOutput* Branches);
		void STATIC_AreAnyPlayersInVolume(class UObject* WorldContextObject, TArray<class AVolume*> Volumes, EPlayersInVolumeOutput* Branches);
		void STATIC_AreAllPlayersOverlappingActors(class UObject* WorldContextObject, TArray<class AActor*> Actors, EPlayersOverlappingActorOutput* Branches);
		void STATIC_AreAllPlayersOverlappingActor(class UObject* WorldContextObject, class AActor* Actor, EPlayersOverlappingActorOutput* Branches);
		void STATIC_AreAllPlayersInVolume(class UObject* WorldContextObject, TArray<class AVolume*> Volumes, EPlayersInVolumeOutput* Branches);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxHUDFeedbackData
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UGbxHUDFeedbackData : public UGbxDataAsset
	{
	public:
		struct FVector                                             MoveWeight;                                              // 0x0030(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MoveAcceleration;                                        // 0x003C(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MoveDeceleration;                                        // 0x0048(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MoveMaxVelocity;                                         // 0x0054(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           LookWeight;                                              // 0x0060(0x0008) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           LookAcceleration;                                        // 0x0068(0x0008) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           LookDeceleration;                                        // 0x0070(0x0008) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           LookMaxVelocity;                                         // 0x0078(0x0008) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadLookMultiplier;                                   // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IAEP[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxInventoryCategoryData
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UGbxInventoryCategoryData : public UGbxDataAsset
	{
	public:
		bool                                                       bIsPremiumCurrencyCategory;                              // 0x0030(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9QKM[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxLevelSequenceControllableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxLevelSequenceControllableInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxMediaData
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UGbxMediaData : public UGbxDataAsset
	{
	public:
		unsigned char                                              AudioSinkProvider[0x10];                                 // 0x0030(0x0010) UNKNOWN PROPERTY: InterfaceProperty GbxGameSystemCore.GbxMediaData.AudioSinkProvider
		class UMediaTexture*                                       MediaTexture;                                            // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMediaSource*                                        MediaSource;                                             // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxMediaManager
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UGbxMediaManager : public UGbxBaseMediaManager
	{
	public:
		TArray<class UMediaPlayer*>                                ActiveMediaPlayers;                                      // 0x0028(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4WNB[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnMovieMediaOpenFailed(const class FString& DeviceUrl);
		void OnMovieMediaClosed();
		void OnMovieEndReached();
		class UMediaPlayer* STATIC_GbxPlayMovie(class UObject* WorldContextObject, class UGbxMediaData* InMediaData);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxNavAvoidanceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxNavAvoidanceInterface : public UInterface
	{
	public:
		void SetObstacleAvoidanceLock(bool bDisable, const class FName& Reason);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxPainCausingVolume
	 * Size -> 0x0038 (FullSize[0x0500] - InheritedSize[0x04C8])
	 */
	class AGbxPainCausingVolume : public APainCausingVolume
	{
	public:
		struct FAttributeInitializationData                        GbxDamagePerSec;                                         // 0x04C8(0x0038) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxParamExt
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxParamExt : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsValueInRangePure(const struct FGbxParam& Param, float Value, class UObject* Context);
		bool STATIC_IsValueInRange(const struct FGbxParam& Param, float Value, class UObject* Context);
		class FString STATIC_GetParamPropertyDescription(const struct FGbxParam& Param, class UProperty* Property);
		class FText STATIC_GetParamDescriptionText(const struct FGbxParam& Param);
		class FString STATIC_GetParamDescription(const struct FGbxParam& Param);
		class FText STATIC_GetNamedParamDescriptionText(const struct FGbxNamedParam& Param);
		class FString STATIC_GetNamedParamDescription(const struct FGbxNamedParam& Param);
		float STATIC_EvaluatePure(const struct FGbxParam& Param, class UObject* Context);
		float STATIC_EvaluateIntPure(const struct FGbxParam& Param, class UObject* Context);
		float STATIC_EvaluateInt(const struct FGbxParam& Param, class UObject* Context);
		bool STATIC_EvaluateBoolPure(const struct FGbxParam& Param, class UObject* Context);
		bool STATIC_EvaluateBool(const struct FGbxParam& Param, class UObject* Context);
		float STATIC_Evaluate(const struct FGbxParam& Param, class UObject* Context);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxPerceptionComponent
	 * Size -> 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
	 */
	class UGbxPerceptionComponent : public UAIPerceptionComponent
	{
	public:
		float                                                      StimulusStrengthOverrideTime;                            // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OGCI[0x4];                                   // 0x0274(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxPhysicsCollisionHandler
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UGbxPhysicsCollisionHandler : public UPhysicsCollisionHandler
	{
	public:
		unsigned char                                              UnknownData_BXUQ[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxPhysicsSettings
	 * Size -> 0x0120 (FullSize[0x0148] - InheritedSize[0x0028])
	 */
	class UGbxPhysicsSettings : public UObject
	{
	public:
		TMap<EPhysicalSurface, struct FSurfaceTypeInfo>            SurfaceTypeInfoMap;                                      // 0x0028(0x0050) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		struct FRigidBodyImpactSettings                            RigidBodyImpactSettings;                                 // 0x0078(0x00B0) Edit, Config, NativeAccessSpecifierPublic
		struct FDestructionForceSmoothing                          ForceSmoothing;                                          // 0x0128(0x000C) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		float                                                      LowDamageThreshold;                                      // 0x0134(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MediumDamageThreshold;                                   // 0x0138(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HighDamageThreshold;                                     // 0x013C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RagdollWeaponForceFeatherPercent;                        // 0x0140(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2J19[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (PADDING)

	public:
		void STATIC_StaticSetRigidBodySimulationInteractability(class USkeletalMeshComponent* Comp, bool bAesthetic, const class FName& BodyName);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxQueryManager
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UGbxQueryManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_Y535[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxActiveQueries;                                        // 0x0030(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q71Y[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGbxQuery>                                   Queries;                                                 // 0x0038(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UWorld*                                              World;                                                   // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEnvQueryManager*                                    EnvQueryManager;                                         // 0x0050(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HWG4[0x58];                                  // 0x0058(0x0058) MISSED OFFSET (PADDING)

	public:
		void NotifyAIHotSpotListChangedFor(class AActor* OwnerActor);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxSignificanceSettings
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UGbxSignificanceSettings : public UDeveloperSettings
	{
	public:
		TMap<class FName, struct FGbxSignificanceEventData>        Events;                                                  // 0x0038(0x0050) Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic

	public:
		void STATIC_EnumerateSignificanceEvents(TArray<class FName>* OutEvents);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxSimpleMotionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxSimpleMotionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UpdateVectorMotion(float DeltaTime, struct FVector* CurrentValue, float ControlValue, const struct FSimpleMotionState& Data, float SpeedScale, const struct FVector& TargetValue, struct FSimpleMotionInstanceState* State);
		void STATIC_UpdateRotatorMotion(float DeltaTime, struct FRotator* CurrentValue, float ControlValue, const struct FSimpleMotionState& Data, float SpeedScale, const struct FRotator& TargetValue, bool bShortestRotation, struct FSimpleMotionInstanceState* State);
		void STATIC_UpdateFloatMotion(float DeltaTime, float* CurrentValue, float ControlValue, const struct FSimpleMotionState& Data, float SpeedScale, float TargetValue, struct FSimpleMotionInstanceState* State);
		void STATIC_TeleportVectorMotion(struct FVector* CurrentValue, float ControlValue, const struct FSimpleMotionState& Data, float SpeedScale, const struct FVector& TargetValue, struct FSimpleMotionInstanceState* State);
		void STATIC_TeleportRotatorMotion(struct FRotator* CurrentValue, float ControlValue, const struct FSimpleMotionState& Data, float SpeedScale, const struct FRotator& TargetValue, struct FSimpleMotionInstanceState* State);
		void STATIC_TeleportFloatMotion(float* CurrentValue, float ControlValue, const struct FSimpleMotionState& Data, float SpeedScale, float TargetValue, struct FSimpleMotionInstanceState* State);
		void STATIC_ResetMotionState(struct FSimpleMotionInstanceState* State);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxSkeletalMeshActor
	 * Size -> 0x0000 (FullSize[0x04E0] - InheritedSize[0x04E0])
	 */
	class AGbxSkeletalMeshActor : public ASkeletalMeshActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxStaticMeshComponent
	 * Size -> 0x0018 (FullSize[0x07C0] - InheritedSize[0x07A8])
	 */
	class UGbxStaticMeshComponent : public UStaticMeshComponent
	{
	public:
		TArray<class UGbxCustomizationTargetData*>                 CustomizationTargets;                                    // 0x07A8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W2VV[0x8];                                   // 0x07B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxSubtitleManagerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxSubtitleManagerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxThreatSystemInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxThreatSystemInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxUIFormattableParameter
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxUIFormattableParameter : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxUIName
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UGbxUIName : public UGbxDataAsset
	{
	public:
		unsigned char                                              UnknownData_2BN4[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0038(0x0018) Edit, NativeAccessSpecifierPublic

	public:
		class FText GetFormattedText();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GestaltPartData
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UGestaltPartData : public UGbxDataAsset
	{
	public:
		unsigned char                                              UnknownData_XKIR[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GestaltPartData_Mesh
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UGestaltPartData_Mesh : public UGestaltPartData
	{
	public:
		class UGestaltData*                                        GestaltData;                                             // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                GestaltMeshPartName;                                     // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class FName>                                        AdditionalGestaltMeshPartNames;                          // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		TArray<struct FGestaltChildPartData>                       ChildParts;                                              // 0x0058(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FGestaltPartFoleyAccessory                          FoleyAudioAccessory;                                     // 0x0068(0x0018) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic

	public:
		void EnumerateGestaltMeshPartNames(TArray<class FName>* OutPartNameList);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GestaltPartData_Random
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UGestaltPartData_Random : public UGestaltPartData
	{
	public:
		TArray<struct FGestaltRandomPartData>                      RandomParts;                                             // 0x0038(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GestaltPartListData
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UGestaltPartListData : public UGbxDataAsset
	{
	public:
		TArray<class UGestaltPartData*>                            RequiredParts;                                           // 0x0030(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FGesaltOptionalPartData>                     OptionalParts;                                           // 0x0040(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UGestaltPartData*>                            SpecialParts;                                            // 0x0050(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GlobalBoneModifyProfileState
	 * Size -> 0x0158 (FullSize[0x0188] - InheritedSize[0x0030])
	 */
	class UGlobalBoneModifyProfileState : public UDataAsset
	{
	public:
		struct FBMPOverride                                        DefaultTransform;                                        // 0x0030(0x0018) Edit, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              SkeletonOverrides[0x50];                                 // 0x0048(0x0050) UNKNOWN PROPERTY: MapProperty GbxGameSystemCore.GlobalBoneModifyProfileState.SkeletonOverrides
		unsigned char                                              CharacterOverrides[0x50];                                // 0x0098(0x0050) UNKNOWN PROPERTY: MapProperty GbxGameSystemCore.GlobalBoneModifyProfileState.CharacterOverrides
		unsigned char                                              SkeletonExceptions[0x50];                                // 0x00E8(0x0050) UNKNOWN PROPERTY: SetProperty GbxGameSystemCore.GlobalBoneModifyProfileState.SkeletonExceptions
		unsigned char                                              CharacterExceptions[0x50];                               // 0x0138(0x0050) UNKNOWN PROPERTY: SetProperty GbxGameSystemCore.GlobalBoneModifyProfileState.CharacterExceptions

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GlobalBoneModifyProfile
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UGlobalBoneModifyProfile : public UObject
	{
	public:
		unsigned char                                              GlobalProfileSet[0x50];                                  // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty GbxGameSystemCore.GlobalBoneModifyProfile.GlobalProfileSet
		unsigned char                                              UnknownData_3DQD[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GlobalBoneModBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGlobalBoneModBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_K2_SetGBMP(class UGlobalBoneModifyProfileState* State, bool bEnabled);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GravityOverrideVolume
	 * Size -> 0x0010 (FullSize[0x04B0] - InheritedSize[0x04A0])
	 */
	class AGravityOverrideVolume : public APhysicsVolume
	{
	public:
		float                                                      GravityZ;                                                // 0x04A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableTeamGravity;                                      // 0x04A4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z9KN[0x3];                                   // 0x04A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OverrideTeamGravity;                                     // 0x04A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5MOL[0x4];                                   // 0x04AC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.HealthResourcePoolModifierAttributeValueResolver
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UHealthResourcePoolModifierAttributeValueResolver : public UAttributeValueResolver
	{
	public:
		class UGameResourcePoolData*                               HealthResourcePool;                                      // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.HealthTypeData
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UHealthTypeData : public UGbxDataAsset
	{
	public:
		struct FLinearColor                                        DisplayColor;                                            // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BarBackgroundFrameName;                                  // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 BalanceData;                                             // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class UPhysicalMaterial*                                   PhysMat;                                                 // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicalMaterial*                                   NoDamagePhysMat;                                         // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxAttributeData*                                   HealthTypeModifierAttribute;                             // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.HitReactionBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHitReactionBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetHitReactionData(class AActor* Actor, class UHitReactionData* HitReactionData);
		void STATIC_ScriptHitReaction(class AActor* Actor, class AActor* Causer, class UHitReactionTag* Tag, const struct FVector& LocalHitDirection, const class FName& BoneName, const struct FForceSelection& Force);
		void STATIC_ScriptDeath(class AActor* Actor, class AActor* Causer, class UHitReactionTag* Tag, const struct FVector& LocalHitDirection, const class FName& BoneName, const struct FForceSelection& Force);
		void STATIC_ResourceUnlockHitReactions(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceLockHitReactions(class AActor* Actor, const class FName& Reason);
		void STATIC_RemoveHitReactionLiveLayer(class AActor* Actor, class UClass* Layer);
		void STATIC_RemoveHitReactionDeathLayer(class AActor* Actor, class UClass* Layer);
		struct FVector STATIC_K2_GetHitLocationFromAction(class UGbxAction* Action);
		struct FVector STATIC_K2_GetHitDirectionFromAction(class UGbxAction* Action, bool bLocalSpace);
		class UObject* STATIC_K2_GetHitCauserFromAction(class UGbxAction* Action);
		float STATIC_K2_GetHealthPercentFromAction(class UGbxAction* Action);
		float STATIC_K2_GetForceFromAction(class UGbxAction* Action);
		int32_t STATIC_K2_GetBoneIndexFromAction(class UGbxAction* Action);
		bool STATIC_IsHitReactionTagActive(class AActor* Actor, class UHitReactionTag* Tag);
		void STATIC_AddHitReactionLiveLayer(class AActor* Actor, class UClass* Layer);
		void STATIC_AddHitReactionDeathLayer(class AActor* Actor, class UClass* Layer);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.HitReactionData
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UHitReactionData : public UGbxDataAsset
	{
	public:
		TArray<class UClass*>                                      LiveLayers;                                              // 0x0030(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<class UClass*>                                      DeathLayers;                                             // 0x0040(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<struct FHitReactionPair>                            HitReactions;                                            // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.HitReactionLayer_Blueprint
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UHitReactionLayer_Blueprint : public UHitReactionLayer
	{
	public:
		class UHitReactionTag* EvaluateTag(class UDamageComponent* Receiver, class UDamageCauserComponent* Causer, float DamageAmount, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class UHitRegionData* HitRegion, float Force, class UHitReactionTag* PreviousTag);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.HitReactionLayer_Combine
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UHitReactionLayer_Combine : public UHitReactionLayer
	{
	public:
		TArray<class UClass*>                                      SubLayers;                                               // 0x0030(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<class UHitReactionTag*>                             PriorityList;                                            // 0x0040(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       bMissingTagsAreHighestPriority;                          // 0x0050(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JV0J[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.HitReactionLayer_Condition
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UHitReactionLayer_Condition : public UHitReactionLayer
	{
	public:
		TArray<struct FHitReactionCondition>                       Conditions;                                              // 0x0030(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		EHitReactionConditionCombine                               Combine;                                                 // 0x0040(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NTKD[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              SubLayer;                                                // 0x0048(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.HitReactionLayer_Cooldown
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UHitReactionLayer_Cooldown : public UHitReactionLayer
	{
	public:
		float                                                      DefaultCooldown;                                         // 0x0030(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N6PK[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHitReactionCooldownData>                    Cooldowns;                                               // 0x0038(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.HitReactionLayer_Map
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UHitReactionLayer_Map : public UHitReactionLayer
	{
	public:
		TArray<struct FHitReactionMapItem>                         TagMap;                                                  // 0x0030(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.HitReactionLayer_Priority
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UHitReactionLayer_Priority : public UHitReactionLayer
	{
	public:
		TArray<class UHitReactionTag*>                             PriorityList;                                            // 0x0030(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UHitReactionTag*>                             CanInterruptSelf;                                        // 0x0040(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.HitReactionTag
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UHitReactionTag : public UGbxDataAsset
	{
	public:
		class UCharacterSoundTag*                                  SoundTag;                                                // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHitReactionTag*                                     CensoredTag;                                             // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.HitRegionFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHitRegionFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ResetHitRegionHealth(class AActor* Actor, class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent);
		void STATIC_ResetAllHitRegionHealth(class AActor* Actor);
		void STATIC_RefillHitRegionHealthByPercent(float RefillPercent, class AActor* Actor, class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent);
		void STATIC_RefillHitRegionHealthByAmount(float RefillAmount, class AActor* Actor, class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent);
		void STATIC_AssociateComponentWithHitRegion(class AActor* Actor, class UPrimitiveComponent* ComponentToAssociate, class UHitRegionData* HitRegion);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.IGbxProjectileManager
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGbxProjectileManager : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.GbxReplicatorProxyData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxReplicatorProxyData : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.InspectionInfoProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInspectionInfoProvider : public UInterface
	{
	public:
		void GetInspectionInfo(struct FInspectionInfo* InspectionInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ImpactData
	 * Size -> 0x02F0 (FullSize[0x0320] - InheritedSize[0x0030])
	 */
	class UImpactData : public UGbxDataAsset
	{
	public:
		class UImpactData*                                         ParentImpact;                                            // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EImpactUsage                                               Usage;                                                   // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOverrideParentUnconditionalResponse;                    // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9O9F[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FImpactResponseEffect                               UnconditionalResponse;                                   // 0x0040(0x0140) Edit, Protected, NativeAccessSpecifierProtected
		bool                                                       bOverrideParentDefaultResponse;                          // 0x0180(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4SMP[0xF];                                   // 0x0181(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FImpactResponseEffect                               DefaultResponse;                                         // 0x0190(0x0140) Edit, Protected, NativeAccessSpecifierProtected
		TArray<struct FImpactResponseInfo>                         ImpactResponses;                                         // 0x02D0(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UWwiseEvent*                                         DefaultImpactWwiseEvent;                                 // 0x02E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FImpactTriggerInfo                                  TriggerInfo;                                             // 0x02E8(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGbxSignificanceEvent                               DefaultSignificanceEvent;                                // 0x02F0(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    LayeredPhysicalResponseQuality;                          // 0x02F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    LayeredParentPhysicalResponseQuality;                    // 0x02FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOverrideParentProximityThrottling;                      // 0x0300(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableProximityThrottling;                              // 0x0301(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EY48[0x16];                                  // 0x0302(0x0016) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int16_t                                                    FrameLimit;                                              // 0x0318(0x0002) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMassWwiseParameter;                                  // 0x031A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N9PP[0x5];                                   // 0x031B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ImpactExpansionData
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UImpactExpansionData : public UGbxDataAsset
	{
	public:
		class UImpactData*                                         ImpactDataToExpand;                                      // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FImpactResponseInfo>                         ImpactResponses;                                         // 0x0038(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ImpactDataOverride
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UImpactDataOverride : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ImpactDecalManager
	 * Size -> 0x0470 (FullSize[0x08C8] - InheritedSize[0x0458])
	 */
	class AImpactDecalManager : public AActor
	{
	public:
		unsigned char                                              UnknownData_8FTS[0x470];                                 // 0x0458(0x0470) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.PooledImpactDecalComponent
	 * Size -> 0x0020 (FullSize[0x0740] - InheritedSize[0x0720])
	 */
	class UPooledImpactDecalComponent : public UDecalComponent
	{
	public:
		unsigned char                                              UnknownData_UVV0[0x20];                                  // 0x0720(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ImpactEffectFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UImpactEffectFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_PlayTraceImpactAndGetParticleSystemComponents(class UImpactData* ImpactData, class AActor* Instigator, const struct FVector& TraceStart, const struct FVector& TraceEnd, TArray<class UParticleSystemComponent*>* SpawnedParticleSystemComponents, ECollisionChannel TraceChannel);
		void STATIC_PlayTraceImpact(class UImpactData* ImpactData, class AActor* Instigator, const struct FVector& TraceStart, const struct FVector& TraceEnd, ECollisionChannel TraceChannel, bool bReplicated);
		void STATIC_PlayHitResultImpactGetParticleSystemComponents(class UImpactData* ImpactData, class AActor* Instigator, const struct FHitResult& HitInfo, TArray<class UParticleSystemComponent*>* SpawnedParticleSystemComponents);
		void STATIC_PlayHitResultImpact(class UImpactData* ImpactData, class AActor* Instigator, const struct FHitResult& HitInfo, bool bReplicated);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ImpactFXManagerComponent
	 * Size -> 0x0090 (FullSize[0x0208] - InheritedSize[0x0178])
	 */
	class UImpactFXManagerComponent : public UActorComponent
	{
	public:
		bool                                                       bScaleImpactDecalEffects;                                // 0x0178(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3XIJ[0x7];                                   // 0x0179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImpactData*                                         BounceEffect;                                            // 0x0180(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BounceEffectThreshold;                                   // 0x0188(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BounceEffectFrequency;                                   // 0x018C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlignBounceEffectToVelocity;                            // 0x0190(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AX1J[0x7];                                   // 0x0191(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImpactData*                                         SlideEffect;                                             // 0x0198(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlideEffectThreshold;                                    // 0x01A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlideEffectStopThreshold;                                // 0x01A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlideEffectFrequency;                                    // 0x01A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartSlideEffectDelay;                                   // 0x01AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideSlideEffectOrigin;                              // 0x01B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IDJA[0x7];                                   // 0x01B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SlideEffectOriginSocket;                                 // 0x01B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEffectsEnabled;                                         // 0x01C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAutoEnableCollisionNotifications;                       // 0x01C1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_41GT[0x36];                                  // 0x01C2(0x0036) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FImpactFXManagerTrackingData>                ActiveSlideEffects;                                      // 0x01F8(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		void SetEffectsEnabled(bool bEnabled);
		void OnTrackedParticleSystemFinished(class UParticleSystemComponent* PSC);
		void OnTrackedComponentDeactivated(class UActorComponent* Component);
		void OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.InspectionInfoFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInspectionInfoFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_AddScreenOutput(struct FInspectionInfo* InspectionInfo, const class FString& String, EDebugDisplayVerbosityLevel Verbosity);
		void STATIC_AddAboveActorOutput(struct FInspectionInfo* InspectionInfo, const class FString& String, EDebugDisplayVerbosityLevel Verbosity);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.InterpComponent
	 * Size -> 0x00A0 (FullSize[0x0218] - InheritedSize[0x0178])
	 */
	class UInterpComponent : public UActorComponent
	{
	public:
		bool                                                       bRemoveOnCompletion;                                     // 0x0178(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUpdateVelocity;                                         // 0x0179(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bClearVelocity;                                          // 0x017A(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bManualTick;                                             // 0x017B(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bInterpYawOnly;                                          // 0x017C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bBallistics;                                             // 0x017D(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bMatchRotationToVelocity;                                // 0x017E(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSetToInitialWhenFinished;                               // 0x017F(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRelative;                                               // 0x0180(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NDXA[0x7];                                   // 0x0181(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              InterpActor;                                             // 0x0188(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AController*                                         InterpController;                                        // 0x0190(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPawnMovementComponent*                              InterpMoveComp;                                          // 0x0198(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EInterpMode                                                InterpLocMode;                                           // 0x01A0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GJXY[0x3];                                   // 0x01A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InterpLocTime;                                           // 0x01A4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      InterpLocElapsedTime;                                    // 0x01A8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             InterpLocDiff;                                           // 0x01AC(0x000C) Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             InterpLocPrev;                                           // 0x01B8(0x000C) Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EInterpMode                                                InterpRotMode;                                           // 0x01C4(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FQ95[0x3];                                   // 0x01C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InterpRotTime;                                           // 0x01C8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      InterpRotElapsedTime;                                    // 0x01CC(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FRotator                                            InterpRotDiff;                                           // 0x01D0(0x000C) Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FRotator                                            InterpRotPrev;                                           // 0x01DC(0x000C) Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FRotator                                            InitialRotation;                                         // 0x01E8(0x000C) Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FVector                                             BallisticsStartLoc;                                      // 0x01F4(0x000C) Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             BallisticsStartVelocity;                                 // 0x0200(0x000C) Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BallisticsGravity;                                       // 0x020C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BallisticsStartTime;                                     // 0x0210(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BallisticsTotalTime;                                     // 0x0214(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Stop();
		void SetUpdateVelocity(bool bNewUpdateVelocity);
		void SetRemoveOnCompletion(bool bRemove);
		void SetManualTick(bool bManual);
		void SetClearVelocity(bool bNewClearVelocity);
		void MatchRotationToVelocity(bool bInSetToInitialWhenFinished);
		void ManualTick(float DeltaTime);
		bool IsFinished();
		void InterpRotation(const struct FRotator& NewRot, float InterpTime, bool bLinear, bool bYawOnly, bool bInRelative);
		void InterpLocation(const struct FVector& NewLoc, float InterpTime, bool bLinear, bool bNoZ, bool bInRelative);
		void InterpDeltaRotation(const struct FRotator& DeltaRot, float InterpTime, bool bLinear, bool bYawOnly, bool bInRelative);
		void InterpDeltaLocation(const struct FVector& DeltaLoc, float InterpTime, bool bLinear, bool bNoZ, bool bInRelative);
		struct FVector InterpBallisticsByTime(const struct FVector& StartLoc, const struct FVector& EndLoc, float LeapTime, float LeapGravity);
		float InterpBallistics(const struct FVector& StartLoc, const struct FVector& EndLoc, float LeapSpeed, float LeapAngle);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.Ladder
	 * Size -> 0x00E8 (FullSize[0x0540] - InheritedSize[0x0458])
	 */
	class ALadder : public AActor
	{
	public:
		unsigned char                                              UnknownData_W80S[0x8];                                   // 0x0458(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EComponentMobility                                         Mobility;                                                // 0x0460(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1W4H[0x7];                                   // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         SegmentMesh;                                             // 0x0468(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMaterialInterface*>                          SegmentMeshMaterialOverrides;                            // 0x0470(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		class UStaticMesh*                                         TopMesh;                                                 // 0x0480(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMaterialInterface*>                          TopMeshMaterialOverrides;                                // 0x0488(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		float                                                      BottomAndTopMeshLDMaxDrawDistance;                       // 0x0498(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bBottomAndTopMeshNeverDistanceCull : 1;                  // 0x049C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3VPY[0x3];                                   // 0x049D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         BottomMesh;                                              // 0x04A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMaterialInterface*>                          BottomMeshMaterialOverrides;                             // 0x04A8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		float                                                      SegmentSpacing;                                          // 0x04B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             SegmentOffset;                                           // 0x04BC(0x000C) Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SegmentRotation;                                         // 0x04C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             TopOffset;                                               // 0x04CC(0x000C) Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TopRotation;                                             // 0x04D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             BottomOffset;                                            // 0x04DC(0x000C) Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BottomRotation;                                          // 0x04E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      VolumeDepth;                                             // 0x04EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      VolumeWidth;                                             // 0x04F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      VolumeExtraTopHeight;                                    // 0x04F4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      VolumeExtraBottomHeight;                                 // 0x04F8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TopVolumeDepth;                                          // 0x04FC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             VolumeOffset;                                            // 0x0500(0x000C) Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CharacterOffset;                                         // 0x050C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    NumSegments;                                             // 0x0510(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bHideTopMesh : 1;                                        // 0x0514(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bHideBottomMesh : 1;                                     // 0x0514(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AX4V[0x3];                                   // 0x0515(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInstancedStaticMeshComponent*                       SegmentMeshComponent;                                    // 0x0518(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                TopMeshComponent;                                        // 0x0520(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                BottomMeshComponent;                                     // 0x0528(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBoxComponent*                                       VolumeBoxComponent;                                      // 0x0530(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBoxComponent*                                       TopVolumeBoxComponent;                                   // 0x0538(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.LadderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULadderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.LadderVolume
	 * Size -> 0x0020 (FullSize[0x04B0] - InheritedSize[0x0490])
	 */
	class ALadderVolume : public AVolume
	{
	public:
		unsigned char                                              UnknownData_EIUZ[0x8];                                   // 0x0490(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ClimbDirection;                                          // 0x0498(0x000C) IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             Normal;                                                  // 0x04A4(0x000C) IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.LandingData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class ULandingData : public UGbxDataAsset
	{
	public:
		TArray<struct FLandingInfo>                                LandingData;                                             // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.MantleData
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UMantleData : public UGbxDataAsset
	{
	public:
		TArray<struct FMantleActionData>                           Actions;                                                 // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                ActionSlotToEnd;                                         // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAlignToEdgeAngle;                                     // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAdjustedHeightDifference;                             // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RequiredLedgeDepth;                                      // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WallHopHeightMax;                                        // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WallHopDestinationHeightMax;                             // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WallHopDestinationHeightMin;                             // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WallHopDepth;                                            // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0G64[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ModifierMathAttributeValueResolver
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UModifierMathAttributeValueResolver : public UAttributeValueResolver
	{
	public:
		struct FAttributeInitializationData                        BaseValue;                                               // 0x0028(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FModifierMathAttributeValueResolverStackEntry> ModifierStack;                                           // 0x0060(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.MotionControlLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMotionControlLibrary : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_UpdateSpeed(float CurrentSpeed, float TargetSpeed, float Acceleration, float DeltaTime);
		struct FRotator STATIC_Spin(const struct FRotator& CurrentRotation, float RotationRate, const struct FVector& RotationAxis, float DeltaTime);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.OrbitingActorComponent
	 * Size -> 0x01A8 (FullSize[0x0320] - InheritedSize[0x0178])
	 */
	class UOrbitingActorComponent : public UActorComponent
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0178(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             BaseOrbitOffset;                                         // 0x0180(0x000C) Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ApproachSpeed;                                           // 0x018C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SmoothingDistance;                                       // 0x0190(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SmoothingDuration;                                       // 0x0194(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FOrbitOscillationInfo                               XAxisOscillation;                                        // 0x0198(0x0080) Edit, Protected, NativeAccessSpecifierProtected
		struct FOrbitOscillationInfo                               YAxisOscillation;                                        // 0x0218(0x0080) Edit, Protected, NativeAccessSpecifierProtected
		struct FOrbitOscillationInfo                               ZAxisOscillation;                                        // 0x0298(0x0080) Edit, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsInOrbit;                                              // 0x0318(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A45V[0x3];                                   // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SmoothingAlpha;                                          // 0x031C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetTargetActor(class AActor* NewTarget);
		void OnRep_TargetActor(class AActor* LastTarget);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ParentChallenge
	 * Size -> 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
	 */
	class UParentChallenge : public UChallenge
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ParticleAttributeParameterEvaluator
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UParticleAttributeParameterEvaluator : public UParticleParameterEvaluator
	{
	public:
		class UGbxAttributeData*                                   Attribute;                                               // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ParameterName;                                           // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEvaluateEveryFrame;                                     // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4TOU[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ParticleConditionalEmitterEvaluator
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UParticleConditionalEmitterEvaluator : public UParticleParameterEvaluator
	{
	public:
		class UGbxCondition*                                       Condition;                                               // 0x0028(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EmitterName;                                             // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableIfTrue;                                           // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEvaluateEveryFrame;                                     // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GC48[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ParticlePropertyTrackingData
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UParticlePropertyTrackingData : public UGbxDataAsset
	{
	public:
		float                                                      MinValue;                                                // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x0034(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopTrackingWhenMinReached;                             // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopTrackingWhenMaxReached;                             // 0x0039(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopTrackingWhenPrimaryCharacterIsDeadOrNone;           // 0x003A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDestroyParticleWhenTrackingStopped;                     // 0x003B(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bChangeValueOverTime;                                    // 0x003C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8HWU[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ValueChangePerSecond;                                    // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPauseChangeOnUpdate;                                    // 0x0044(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H48O[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PauseDuration;                                           // 0x0048(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6E7Z[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.PawnAttachmentFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPawnAttachmentFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_RequestDetachPawnFromSlot(class AActor* Actor, const class FName& SlotName);
		void STATIC_RequestDetachPawnFromActor(class APawn* Pawn);
		struct FPawnAttachmentQueryResult STATIC_QueryPawnAttachment(class APawn* Pawn);
		class UPawnAttachSlotComponent* STATIC_FindPawnAttachSlotComponent(class APawn* Pawn);
		void STATIC_DetachPawnFromSlot(class AActor* Actor, const class FName& SlotName, bool bInstant);
		void STATIC_DetachPawnFromActor(class APawn* Pawn, bool bInstant);
		void STATIC_AttachPawnToSlot(class AActor* Actor, const class FName& SlotName, class APawn* Pawn, bool bInstant);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.PawnAttributeContextResolver
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UPawnAttributeContextResolver : public UAttributeContextResolver
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.PhysicalAnimationProfileAsset
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UPhysicalAnimationProfileAsset : public UGbxDataAsset
	{
	public:
		TArray<struct FPhysicalAnimationBoneData>                  BoneData;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EPhysicalAnimationBlendToKinematicMode                     DynamicToKinematicBlendMode;                             // 0x0040(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G7EH[0x3];                                   // 0x0041(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_4W8P[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ProjectileAimViewPointHomingTargetComponent
	 * Size -> 0x0018 (FullSize[0x0190] - InheritedSize[0x0178])
	 */
	class UProjectileAimViewPointHomingTargetComponent : public UActorComponent
	{
	public:
		float                                                      LookAheadDistance;                                       // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WXN8[0x4];                                   // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UProjectileHomingComponent*                          HomingComponent;                                         // 0x0180(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AController*                                         TargetController;                                        // 0x0188(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetTargetController(class AController* InTargetController);
		void SetTargetActor(class AActor* InTargetActor);
		class AController* GetTargetController();
		struct FVector GetCurrentHomingLoc();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.PropertyUtilsTestContext
	 * Size -> 0x0268 (FullSize[0x0290] - InheritedSize[0x0028])
	 */
	class UPropertyUtilsTestContext : public UObject
	{
	public:
		float                                                      FloatProp;                                               // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatPropStaticArray[0x3];                               // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              FloatPropDynamicArray;                                   // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UPropertyUtilsTestContext*                           ObjectProp;                                              // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPropertyUtilsTestContext*                           ObjectPropStaticArray[0x3];                              // 0x0050(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPropertyUtilsTestContext*>                   ObjectPropDynamicArray;                                  // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FPropertyUtilsTestStruct                            StructProp;                                              // 0x0078(0x0078) NativeAccessSpecifierPublic
		struct FPropertyUtilsTestStruct                            StructPropStaticArray[0x3];                              // 0x00F0(0x0168) NativeAccessSpecifierPublic
		TArray<struct FPropertyUtilsTestStruct>                    StructPropDynamicArray;                                  // 0x0258(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		double                                                     DoubleProp;                                              // 0x0268(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     Int8Prop;                                                // 0x0270(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UInt8Prop;                                               // 0x0271(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    Int16Prop;                                               // 0x0272(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   UInt16Prop;                                              // 0x0274(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XUCY[0x2];                                   // 0x0276(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Int32Prop;                                               // 0x0278(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   UInt32Prop;                                              // 0x027C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Int64Prop;                                               // 0x0280(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   UInt64Prop;                                              // 0x0288(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.RangedFeedbackData
	 * Size -> 0x0000 (FullSize[0x03F8] - InheritedSize[0x03F8])
	 */
	class URangedFeedbackData : public UFeedbackData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ReferenceActor
	 * Size -> 0x0008 (FullSize[0x0460] - InheritedSize[0x0458])
	 */
	class AReferenceActor : public AActor
	{
	public:
		class FName                                                PreviewClass;                                            // 0x0458(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void EnumeratePreviewClasses(TArray<class FName>* ClasssList);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ReplicatedEmitter
	 * Size -> 0x0090 (FullSize[0x0538] - InheritedSize[0x04A8])
	 */
	class AReplicatedEmitter : public AEmitter
	{
	public:
		bool                                                       bOwnerNoSeeEmitter;                                      // 0x04A8(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B9IO[0x7];                                   // 0x04A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FReplicatedEmitterTemplateOptions                   TemplateOptions;                                         // 0x04B0(0x0018) Net, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FEmitterFloatParam>                          ReplicatedFloatParams;                                   // 0x04C8(0x0010) Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected
		TArray<struct FEmitterVectorParam>                         ReplicatedVectorParams;                                  // 0x04D8(0x0010) Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected
		TArray<struct FEmitterColorParam>                          ReplicatedColorParams;                                   // 0x04E8(0x0010) Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected
		struct FEmitterWwiseEvent                                  ReplicatedWwiseEvent;                                    // 0x04F8(0x0040) Net, Transient, RepNotify, Protected, NativeAccessSpecifierProtected

	public:
		void OnRep_TemplateOptions();
		void OnRep_ReplicatedWwiseEvent();
		void OnRep_ReplicatedVectorParams();
		void OnRep_ReplicatedFloatParams();
		void OnRep_ReplicatedColorParams();
		void OnRep_OwnerNoSeeEmitter();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ResourceWeightAttributeValueResolver
	 * Size -> 0x0120 (FullSize[0x0148] - InheritedSize[0x0028])
	 */
	class UResourceWeightAttributeValueResolver : public UAttributeValueResolver
	{
	public:
		class UGameResourceData*                                   Resource;                                                // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        ResourceThreshold;                                       // 0x0030(0x0038) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        AboveThresholdWeight;                                    // 0x0068(0x0038) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        NoPoolWeight;                                            // 0x00A0(0x0038) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        MinBelowThresholdWeight;                                 // 0x00D8(0x0038) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        MaxBelowThresholdWeight;                                 // 0x0110(0x0038) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.RigidBodyActor
	 * Size -> 0x0008 (FullSize[0x0460] - InheritedSize[0x0458])
	 */
	class ARigidBodyActor : public AActor
	{
	public:
		class URigidBodyComponent*                                 RigidBodyComponent;                                      // 0x0458(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.RigidBodyComponent
	 * Size -> 0x0028 (FullSize[0x07D0] - InheritedSize[0x07A8])
	 */
	class URigidBodyComponent : public UStaticMeshComponent
	{
	public:
		unsigned char                                              UnknownData_HWXH[0x8];                                   // 0x07A8(0x0008) Fix Super Size
		class UImpactData*                                         RigidBodyImpactData;                                     // 0x07B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnImpulseAdded;                                          // 0x07B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bEnableHardSleeping;                                     // 0x07C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TTUC[0x7];                                   // 0x07C9(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetKinematic(class UPrimitiveComponent* SleepingComponent, const class FName& BoneName);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.SaveGameActorInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USaveGameActorInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.SceneBodySwitchAction
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USceneBodySwitchAction : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.SceneBodySwitchComponent
	 * Size -> 0x0090 (FullSize[0x0360] - InheritedSize[0x02D0])
	 */
	class USceneBodySwitchComponent : public USceneComponent
	{
	public:
		class FName                                                DefaultState;                                            // 0x02D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneBodySwitchAction*                              DetachAction;                                            // 0x02D8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KOIA[0x10];                                  // 0x02E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSceneComponentSwitchRecord>                 ComponentRecords;                                        // 0x02F0(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<int8_t>                                             ReplicatedState;                                         // 0x0300(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XPAE[0x50];                                  // 0x0310(0x0050) MISSED OFFSET (PADDING)

	public:
		void OnRep_ReplicatedState();
		void HandleWwiseEventFinished(class UWwiseAudioComponent* WAC, class UWwiseEvent* WwiseEvent);
		void HandleParticleSystemFinished(class UParticleSystemComponent* PSC);
		void GetValidSwitchStateNames(TArray<class FName>* OutNames);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.SceneBodySwitchFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USceneBodySwitchFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void EnumerateValidSwitchStateNames(const class FName& SwitchName, TArray<class FName>* Names);
		void EnumerateValidSwitchNames(TArray<class FName>* Names);
		void STATIC_ChangeSwitchExternal(class AActor* Actor, const class FName& SwitchName, const class FName& StateName);
		void STATIC_ChangeSwitch(class UObject* Context, const class FName& SwitchName, const class FName& StateName);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.SceneBodySwitchManagerComponent
	 * Size -> 0x0000 (FullSize[0x0178] - InheritedSize[0x0178])
	 */
	class USceneBodySwitchManagerComponent : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.ScreenParticleManagerComponent
	 * Size -> 0x0028 (FullSize[0x01A0] - InheritedSize[0x0178])
	 */
	class UScreenParticleManagerComponent : public UActorComponent
	{
	public:
		TArray<struct FScreenParticleRecord>                       ScreenParticleRecords;                                   // 0x0178(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FParticlePropertyTracker>                    TrackedParticleProperties;                               // 0x0188(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8WPZ[0x8];                                   // 0x0198(0x0008) MISSED OFFSET (PADDING)

	public:
		void STATIC_ShowScreenParticleForActor(class AActor* Actor, class UParticleSystem* Template, bool bHideWhenFinished, const struct FVector2D& ContentDims, float ParticleDepth, EScreenParticleScalingMode ScalingMode, bool bOnlyOwnerSee, bool bAlwaysVisible, const class FName& Tag, bool bAllowMultipleInstances, bool bServerAuthority, bool bTickEvenWhenPaused, bool bHideDuringInGameMenu);
		void OnScreenParticleFinished(class UParticleSystemComponent* Component);
		void STATIC_HideScreenParticleForActor(class AActor* Actor, class UParticleSystem* Template, const class FName& Tag, bool bAllowParticleToFinish, bool bServerAuthority);
		void ClientTrackParticleProperty(class UParticlePropertyTrackingData* TrackingData, class UParticleSystem* Template, const class FName& Tag, const class FName& PropertyName, float PropertyValue, bool bAddToValue, class UMaterialInterface* UsedMaterialProperty, const class FName& MaterialPropertyName);
		void ClientShowScreenParticleEx(class UParticleSystem* Template, unsigned char InitFlags, const struct FVector2D& ContentDims, float ParticleDepth, EScreenParticleScalingMode ScalingMode, const class FName& Tag);
		void ClientShowScreenParticle(class UParticleSystem* Template, bool bHideWhenFinished, const struct FVector2D& ContentDims, float ParticleDepth, EScreenParticleScalingMode ScalingMode, bool bOnlyOwnerSee, bool bAlwaysVisible, const class FName& Tag, bool bAllowMultipleInstances, bool bTickEvenWhenPaused, bool bHideDuringInGameMenu, bool bDepthPriorityWorld);
		void ClientSetScreenParticleVectorParameter(class UParticleSystem* Template, const class FName& Tag, const class FName& ParameterName, const struct FVector& Param);
		void ClientSetScreenParticleMaterialParameter(class UParticleSystem* Template, const class FName& Tag, const class FName& ParameterName, class UMaterialInterface* Param);
		void ClientSetScreenParticleFloatParameter(class UParticleSystem* Template, const class FName& Tag, const class FName& ParameterName, float Param);
		void ClientSetScreenParticleColorParameter(class UParticleSystem* Template, const class FName& Tag, const class FName& ParameterName, const struct FLinearColor& Param);
		void ClientSetScreenParticleActorParameter(class UParticleSystem* Template, const class FName& Tag, const class FName& ParameterName, class AActor* Param);
		void ClientHideScreenParticle(class UParticleSystem* Template, const class FName& Tag, bool bAllowParticleToFinish);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.SenseConfigProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USenseConfigProviderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.SignificanceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USignificanceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.SimpleMathValueResolver
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class USimpleMathValueResolver : public UAttributeValueResolver
	{
	public:
		struct FAttributeInitializationData                        ValueA;                                                  // 0x0028(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		ESimpleMathValueResolverOperatorType                       Operator;                                                // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HPQC[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        ValueB;                                                  // 0x0068(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.SocketComponent
	 * Size -> 0x0000 (FullSize[0x02D0] - InheritedSize[0x02D0])
	 */
	class USocketComponent : public USceneComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.SpawnSimulatedActorSwitchAction
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class USpawnSimulatedActorSwitchAction : public USceneBodySwitchAction
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0028(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bInheritVelocity : 1;                                    // 0x0030(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bEnableSpeedRange : 1;                                   // 0x0030(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bEnableAngularSpeedRange : 1;                            // 0x0030(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAxis                                                      DefaultAxis;                                             // 0x0031(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D3JO[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRelativeDirectionData                              Direction;                                               // 0x0038(0x0050) Edit, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      Speed;                                                   // 0x0088(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxSpeed;                                                // 0x008C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRelativeDirectionData                              RotationAxis;                                            // 0x0090(0x0050) Edit, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      AngularSpeed;                                            // 0x00E0(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxAngularSpeed;                                         // 0x00E4(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LifeSpan;                                                // 0x00E8(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3VKZ[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.SprintData
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class USprintData : public UDataAsset
	{
	public:
		class UCurveFloat*                                         SprintFOVCurve;                                          // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddModifierToBaseFOV;                                   // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I3VG[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SprintFOVModifier;                                       // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintFOVBlendInTime;                                    // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintFOVBlendOutTime;                                   // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintFOVBlendInDelay;                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NY93[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFeedbackData*                                       Feedback;                                                // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAttributeEffectData>                        SprintAttributeEffects;                                  // 0x0058(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.StanceBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStanceBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UStanceComponent* STATIC_TryGetStanceComponent(class AAIController* AIController);
		void STATIC_SetStance(class AActor* Target, class UStanceDataProvider* Stance);
		bool STATIC_IsStanceComponentInStance(class UStanceComponent* StanceComponent, class UStanceDataProvider* Stance);
		bool STATIC_IsInStance(class UAnimInstance* AnimInstance, class UStanceDataProvider* Stance);
		bool STATIC_EqualEqual_StanceTypeStanceType(class UStanceType* A, class UStanceType* B);
		bool STATIC_EqualEqual_StanceDataStanceData(class UStanceData* A, class UStanceData* B);
		void STATIC_ClearStance(class AActor* Target);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.StanceComponent
	 * Size -> 0x00F8 (FullSize[0x0270] - InheritedSize[0x0178])
	 */
	class UStanceComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_1DTV[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStanceChanged;                                         // 0x0180(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UStanceDataSelector*                                 StanceSelector;                                          // 0x0190(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FStanceStack                                        StanceStack;                                             // 0x0198(0x0050) Transient, NativeAccessSpecifierPrivate
		struct FStanceChangedEventArgs                             StanceState;                                             // 0x01E8(0x0030) Net, Transient, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPrivate
		TMap<class UStanceType*, class UStanceData*>               DefaultStanceMap;                                        // 0x0218(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		float                                                      TimeEnteredCurrentStance;                                // 0x0268(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GV65[0x4];                                   // 0x026C(0x0004) MISSED OFFSET (PADDING)

	public:
		void StackStanceChangedCallback(EStanceStackLayer PreviousLayer, class UStanceData* PreviousStance, EStanceStackLayer NextLayer, class UStanceData* NextStance);
		void SetStanceLayer(EStanceStackLayer Layer, class UStanceDataProvider* NewStance);
		void SetBlueprintStance(class UStanceDataProvider* NewStance);
		void OnRep_StanceState();
		bool IsInStanceType(class UStanceType* Type);
		bool IsInStanceLayer(EStanceStackLayer Layer);
		bool IsInStance(class UStanceDataProvider* Stance);
		bool IsInAnimStance(class UStanceDataProvider* Stance);
		float GetTimeSpentInCurrentStance();
		EStanceStackLayer GetStanceLayer();
		class UStanceData* GetStance();
		class UStanceType* FindTypeForStance(class UStanceData* Stance);
		class UStanceData* FindStanceForType(class UStanceType* Type);
		void ClearStanceLayer(EStanceStackLayer Layer);
		void ClearBlueprintStance();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.StanceType
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UStanceType : public UStanceDataProvider
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.StatusEffect
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UStatusEffect : public UObject
	{
	public:
		class UStatusEffectStackingStrategyData*                   StackingStrategy;                                        // 0x0028(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FAttributeEffect>                            AttributeEffects;                                        // 0x0030(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bDoesDamageOverTime;                                     // 0x0040(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YI3L[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageType;                                              // 0x0048(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              DamageSourceClass;                                       // 0x0050(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStatusEffectData*                                   DataAssetCopy;                                           // 0x0058(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_71BF[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnEndEffect(class AActor* Target);
		void OnBeginEffect(class AActor* Target);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.StatusEffectModifierAttributePropertyValueResolver
	 * Size -> 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
	 */
	class UStatusEffectModifierAttributePropertyValueResolver : public UAttributePropertyValueResolver
	{
	public:
		unsigned char                                              StatusEffectData[0x28];                                  // 0x00B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxGameSystemCore.StatusEffectModifierAttributePropertyValueResolver.StatusEffectData

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.StatusEffectStackingStrategyData_Capped
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UStatusEffectStackingStrategyData_Capped : public UStatusEffectStackingStrategyData
	{
	public:
		int32_t                                                    MaxCount;                                                // 0x0030(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCapPerOwner;                                            // 0x0034(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bNoInfiniteDuration;                                     // 0x0035(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EStatusEffectStackingInstanceSelectionCriteria             SelectionCriteria;                                       // 0x0036(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EStatusEffectStackingInstanceReplacementCriteria           ReplacementCriteria;                                     // 0x0037(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FStatusEffectStackingStrategyData_DurationRefundData DurationRefund;                                          // 0x0038(0x0008) Edit, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.TargetableComponent
	 * Size -> 0x02C8 (FullSize[0x0480] - InheritedSize[0x01B8])
	 */
	class UTargetableComponent : public UTeamComponent
	{
	public:
		unsigned char                                              UnknownData_TH7M[0x8];                                   // 0x01B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxGameSystemCore_FResourceLock                    SightSenseLock;                                          // 0x01C0(0x0098) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ZGN[0x10];                                  // 0x0258(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSearchableByFindProjectileEQSTargetGenerator;           // 0x0268(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTargetable;                                           // 0x0269(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsTargetableByHumanPlayers;                             // 0x026A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsTargetableByAIPlayers;                                // 0x026B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsTargetableByNonPlayers;                               // 0x026C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bOnlyTargetableIfPlayersAreThreatened;                   // 0x026D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8Q3N[0x2];                                   // 0x026E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxUIName*                                          TargetUIName;                                            // 0x0270(0x0008) Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FText                                                TargetName;                                              // 0x0278(0x0018) Net, NativeAccessSpecifierPrivate
		class FName                                                TargetSocket;                                            // 0x0290(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTargetLocationBoundsSettings                       TargetSocketBounds;                                      // 0x0298(0x000C) Edit, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bUseTargetSocketBounds;                                  // 0x02A4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OTPK[0x3];                                   // 0x02A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTargetLocationSettings>                     AdditionalTargetSockets;                                 // 0x02A8(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TNOW[0xA0];                                  // 0x02B8(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTargetingComponent*>                         TargetingMe;                                             // 0x0358(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1Y11[0x30];                                  // 0x0368(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CapsuleSections;                                         // 0x0398(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9S7C[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxGameSystemCore_FResourceLock                    UntargetableLock;                                        // 0x03A0(0x0098) Net, Transient, NativeAccessSpecifierPrivate
		TArray<class FName>                                        MeleeTargetingSockets;                                   // 0x0438(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FOverrideMeleeSocket>                        ConditionalMeleeTargetingSockets;                        // 0x0448(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class FName>                                        TargetProxyComponents;                                   // 0x0458(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		TArray<class USceneComponent*>                             TargetProxies;                                           // 0x0468(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bAllowCharacterHoming;                                   // 0x0478(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAimAssistSnapTargetType                                   AimAssistSnapTargetType;                                 // 0x0479(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTargetTracking;                                         // 0x047A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableBulletMagnetism;                                 // 0x047B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_80PA[0x4];                                   // 0x047C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetTargetUIName(class UGbxUIName* NewTargetUIName);
		void SetTargetName(const class FText& NewTargetName);
		void SetIsTargetableByNonPlayers(bool IsTargetable);
		void SetIsTargetableByHumanPlayers(bool IsTargetable);
		void SetIsTargetableByAIPlayers(bool IsTargetable);
		void SetIsTargetable(bool IsTargetable);
		void OnRep_TargetUIName();
		bool IsTargetableByPawn(class APawn* Pawn);
		bool IsTargetableByNonPlayers();
		bool IsTargetableByHumanPlayers();
		bool IsTargetableByController(class AController* Controller);
		bool IsTargetableByAIPlayers();
		bool IsTargetableByActor(class AActor* Actor);
		bool IsTargetable();
		class FName GetTargetSocketName();
		void GetTargetProxyComponentNames(TArray<class FName>* Array);
		class FString GetTargetNameString();
		TArray<struct FVector> GetTargetLocations();
		struct FVector GetTargetLocation();
		struct FVector GetClosestTargetLocation(const struct FVector& Origin, const struct FVector& Direction);
		void GetAvailableSocketNames(TArray<class FName>* Array);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.TargetActorInfoLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTargetActorInfoLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsSenseActive(const struct FTargetActorInfo& Info, class UClass* Sense);
		bool STATIC_IsExistingTarget(const struct FTargetActorInfo& Info);
		bool STATIC_IsDirectlySensed(const struct FTargetActorInfo& Info);
		bool STATIC_HasStimulusForSense(const struct FTargetActorInfo& Info, class UClass* Sense);
		bool STATIC_HasAnyKnownStimuli(const struct FTargetActorInfo& Info);
		struct FVector STATIC_GetStimulusLocation(const struct FTargetActorInfo& Info, class UClass* Sense);
		bool STATIC_GetStimulusForSense(const struct FTargetActorInfo& Info, class UClass* Sense, struct FAIStimulus* Stimulus);
		struct FVector STATIC_GetReceiverLocation(const struct FTargetActorInfo& Info, class UClass* Sense);
		struct FVector STATIC_GetBestStimulusLocation(const struct FTargetActorInfo& Info, float* Age);
		bool STATIC_GetBestStimulus(const struct FTargetActorInfo& Info, struct FAIStimulus* Stimulus);
		struct FVector STATIC_GetBestAttackLocation(const struct FTargetActorInfo& Info, struct FVector* OutTargetVelocity);
		class UTargetingComponent* STATIC_FindActorTargetingComponent(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.TargetingComponent
	 * Size -> 0xE618 (FullSize[0xE790] - InheritedSize[0x0178])
	 */
	class UTargetingComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_RBNQ[0xB8];                                  // 0x0178(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             TargetListChangedBpEvent;                                // 0x0230(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1I93[0x10];                                  // 0x0240(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      QueryFrequency;                                          // 0x0250(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bQueryImmediately;                                       // 0x0254(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2OC9[0x3];                                   // 0x0255(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEnvQueryParams                                     QueryParams;                                             // 0x0258(0x00B8) Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PN9B[0x18];                                  // 0x0310(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGbxBlackboardKeySelector>                   BlackboardKeys;                                          // 0x0328(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ODI9[0xE430];                                // 0x0338(0xE430) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bOnlyTargetThreatsToPlayers;                             // 0xE768(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UJWG[0x17];                                  // 0xE769(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTargetableComponent*                                CurrentTargetable;                                       // 0xE780(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QNUF[0x8];                                   // 0xE788(0x0008) MISSED OFFSET (PADDING)

	public:
		void ServerSetBestTarget(class AActor* NewBestTarget);
		bool IsBestTargetDirectlySensed(int32_t TargetIndex);
		bool HasTargets();
		bool HasTarget(class AActor* Actor);
		bool GetTargetLocationForActor(class AActor* Actor, struct FVector* TargetLocation);
		bool GetTargetInfoForActor(class AActor* Actor, struct FTargetActorInfo* TargetInfo);
		int32_t GetTargetInfoCount();
		bool GetTargetInfoAt(int32_t TargetIndex, struct FTargetActorInfo* TargetInfo);
		class AActor* GetTargetActorAt(int32_t TargetIndex);
		class AActor* GetBestThreatActor(bool bRequireFirsthandKnowledge);
		struct FVector GetBestTargetLocation(int32_t TargetIndex);
		bool GetBestTargetInfo(struct FTargetActorInfo* TargetInfo, int32_t TargetIndex);
		class AActor* GetBestTargetActor(int32_t TargetIndex);
		class UTargetableComponent* GetBestTargetableComponent(int32_t TargetIndex);
		struct FVector GetBestAttackTargetLocation(struct FVector* OutTargetVelocity, int32_t TargetIndex);
		bool DoesBestTargetHaveStimulusForSense(class UClass* Sense, float MaxAge, int32_t TargetIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.TargetingDebugServerRpcComponent
	 * Size -> 0x0000 (FullSize[0x0178] - InheritedSize[0x0178])
	 */
	class UTargetingDebugServerRpcComponent : public UActorComponent
	{
	public:
		void SetInspectedActor(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.Team
	 * Size -> 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
	 */
	class UTeam : public UGbxDataAsset
	{
	public:
		class FString                                              DisplayName;                                             // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETeamAttitude                                              SelfAttitude;                                            // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETeamAttitude                                              DefaultAttitude;                                         // 0x0041(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETeamAttitude                                              DefaultAttitudeFromTeams;                                // 0x0042(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDefaultAttitudeFromTeams;                            // 0x0043(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2YJU[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTeamAttitudeSetEntry>                       AttitudeTowardTeams;                                     // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTeamAttitudeSetEntry>                       AttitudeFromTeams;                                       // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bEnableTeamCollisionChannel;                             // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETeamCollisionChannel                                      TeamCollisionChannel;                                    // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J6B3[0x46];                                  // 0x006A(0x0046) MISSED OFFSET (PADDING)

	public:
		ETeamAttitude GetAttitudeToward(class UTeam* Team);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.TeleportInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTeleportInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.TerritoryComponent
	 * Size -> 0x0090 (FullSize[0x0780] - InheritedSize[0x06F0])
	 */
	class UTerritoryComponent : public UPrimitiveComponent
	{
	public:
		struct FTerritoryData                                      PatrolTerritory;                                         // 0x06F0(0x0020) Edit, NativeAccessSpecifierPrivate
		struct FTerritoryData                                      ThreatTerritory;                                         // 0x0710(0x0020) Edit, NativeAccessSpecifierPrivate
		struct FTerritoryData                                      CombatTerritory;                                         // 0x0730(0x0020) Edit, NativeAccessSpecifierPrivate
		ETerritoryCombatProxyType                                  CombatProxy;                                             // 0x0750(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseCombatProxy;                                         // 0x0751(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAlwaysAwareInThreatArea;                                // 0x0752(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ETerritoryDrawStyle                                        DrawStyle;                                               // 0x0753(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DXU7[0x14];                                  // 0x0754(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTerritoryComponent*>                         LinkedTerritories;                                       // 0x0768(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YP3A[0x8];                                   // 0x0778(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.TrivialFoleyImplementationComponent
	 * Size -> 0x0038 (FullSize[0x01B0] - InheritedSize[0x0178])
	 */
	class UTrivialFoleyImplementationComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_CYI1[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImpactData*                                         FootstepImpact;                                          // 0x0180(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicalMaterial*                                   FootstepPhysmat;                                         // 0x0188(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              BodySkeletalMesh;                                        // 0x0190(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        FootSockets;                                             // 0x0198(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UFoleyMainComponent*                                 CachedFoleyMainComponent;                                // 0x01A8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.UIStatData_Numeric_Formula
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class UUIStatData_Numeric_Formula : public UUIStatData_Numeric
	{
	public:
		class UUIStatFormulaEvaluator*                             Formula;                                                 // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.UIStatData_Text
	 * Size -> 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
	 */
	class UUIStatData_Text : public UUIStatData
	{
	public:
		class FText                                                Text;                                                    // 0x0068(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		class FText                                                TextWithAdditionalInput;                                 // 0x0080(0x0018) Transient, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.UIStatAttributeEffectProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUIStatAttributeEffectProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.UsabilityDataSelection
	 * Size -> 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
	 */
	class UUsabilityDataSelection : public UGbxDataAsset
	{
	public:
		class UGbxCondition*                                       EnabledCondition;                                        // 0x0030(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FUseDefSelection                                    PrimaryUseDefSelection;                                  // 0x0038(0x0020) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FUseDefSelection                                    PrimaryHoldUseDefSelection;                              // 0x0058(0x0020) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FUseDefSelection                                    SecondaryUseDefSelection;                                // 0x0078(0x0020) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FUseDefSelection                                    SecondaryHoldUseDefSelection;                            // 0x0098(0x0020) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.UsableTypeDefinition
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UUsableTypeDefinition : public UGbxDataAsset
	{
	public:
		class FText                                                ActionText;                                              // 0x0030(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FName                                                InputActionOverride;                                     // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayLockedIcon;                                      // 0x0050(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHidePrompt;                                             // 0x0051(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCostsToUse;                                             // 0x0052(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W2EE[0x5];                                   // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxInventoryCategoryData*                           CurrencyType;                                            // 0x0058(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUsableTypeCostContext                                     CostContext;                                             // 0x0060(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KOGV[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        Cost;                                                    // 0x0068(0x0038) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.UserStatesInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUserStatesInterface : public UInterface
	{
	public:
		bool HasEnableConditionsSetForAnyUserState();
		void BlueprintStateHandler(bool bFromLoad);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.UserStatesFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUserStatesFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_HasEnableConditionsSetForSpecificUserState(class UObject* Context, const class FName& UserStateProperty);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.UseSystemFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUseSystemFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetIsUsable(class AActor* Actor, bool bNewIsUsable);
		void STATIC_ResetUseCount(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.WeaponInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWeaponInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.WeaponUserInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWeaponUserInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxGameSystemCore.WeatherTemplate
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UWeatherTemplate : public UGbxDataAsset
	{
	public:
		class UParticleSystem*                                     WorldSpaceParticleTemplate;                              // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     ScreenSpaceParticleTemplate;                             // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
