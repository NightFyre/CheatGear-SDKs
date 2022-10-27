#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * BlueprintGeneratedClass BP_Magnifier_Black.BP_Magnifier_Black_C
	 * Size -> 0x00C8 (FullSize[0x0500] - InheritedSize[0x0438])
	 */
	class ABP_Magnifier_Black_C : public AGBRailAttachment
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0438(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       RootCollision;                                           // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       FlippedDownCollision;                                    // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       FlippedUpCollision;                                      // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneCaptureComponent2D*                            MagnifierSceneCaptureComp;                               // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Arrow;                                                   // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGBSightComponent*                                   MagnifierSightComp;                                      // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPoseableMeshComponent*                              PoseableMesh;                                            // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGBRailMountComponent*                               GBRailMount;                                             // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_0_8E632D49470654C4F118FCB85D1C41AF;  // 0x0480(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_8E632D49470654C4F118FCB85D1C41AF;  // 0x0484(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_CZJG[0x3];                                   // 0x0485(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bFlippedUp;                                              // 0x0490(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper
		unsigned char                                              UnknownData_X3GE[0x3];                                   // 0x0491(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Alpha;                                                   // 0x0494(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bOldActive;                                              // 0x0498(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bNewActive;                                              // 0x0499(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bToggleSightDelay;                                       // 0x049A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JYI3[0x5];                                   // 0x049B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGBSightComponent*                                   PreviousActiveSightComp;                                 // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                MagnifierText;                                           // 0x04A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bMagnifierActive;                                        // 0x04C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q46N[0x7];                                   // 0x04C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MagnifierIcon[0x28];                                     // 0x04C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                BracketBoneName;                                         // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DownRotation;                                            // 0x04F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UpRotation;                                              // 0x04FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_bFlippedUp();
		void OnRep_Alpha();
		bool AllowUsageWhileAttached();
		void UserConstructionScript();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void InpActEvt_IncreaseSightMagnification_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_DecreaseSightMagnification_K2Node_InputActionEvent_1(const struct FKey& Key);
		void OnStartUsing(int32_t UseType);
		void UpdateActiveSightStatus();
		void AddAttachedUseMenuEntries(class UUserWidget* UsageMenu);
		void AddMagnifierEntry(class UWBP_RadialMenu_C* UsageMenu);
		void OnSelected_Magnifier(int32_t Index);
		void OnBeingUnequipped();
		void UpdateBoneRotation();
		void ReceiveBeginPlay();
		void MulticastFlipUp();
		void MulticastFlipDown();
		void EditItemSetup(class AGBCharacter* UICharacter);
		void OnBeingEquipped();
		void ExecuteUbergraph_BP_Magnifier_Black(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
