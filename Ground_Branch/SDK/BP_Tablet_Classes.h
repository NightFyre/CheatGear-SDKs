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
	 * BlueprintGeneratedClass BP_Tablet.BP_Tablet_C
	 * Size -> 0x00B8 (FullSize[0x04A8] - InheritedSize[0x03F0])
	 */
	class ABP_Tablet_C : public AGBItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UArrowComponent*                                     Arrow;                                                   // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                TabletModel;                                             // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    Widget;                                                  // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     TypingSound;                                             // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                CurrentSupportingStaticMesh;                             // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWBP_InGameMap_C*                                    TabletScreenWidget;                                      // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSoftClassPath                                      TabletWidgetClass;                                       // 0x0428(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UClass*                                              TabletWidgetClassRef;                                    // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      OldDesiredEngagedAlpha;                                  // 0x0448(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_06Z6[0x4];                                   // 0x044C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          EquippedRelativeTM;                                      // 0x0450(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TabletHeight;                                            // 0x0480(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TabletAvgDist;                                           // 0x0484(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      POVPitchChange;                                          // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentAlpha;                                            // 0x048C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EquipTime;                                               // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KRZR[0x4];                                   // 0x0494(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGBItem*                                             TabletPrevEquippedLeft;                                  // 0x0498(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AGBItem*                                             TabletPrevEquippedRight;                                 // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool UpdateCameraPOV(class AGBPlayerController* GBPlayerController, const struct FVector& CameraLocation, const struct FRotator& CameraRotation, float CameraFOV, float DeltaTime, const class FName& CameraStyle, struct FVector* OutCameraLocation, struct FRotator* OutCameraRotation, float* OutCameraFOV);
		float GetWeaponsPositionTransitionTime(EGBWeaponPosition FromPosition, EGBWeaponPosition ToPosition);
		bool GetEquipInfo(EHand TargetHand, struct FGBSwitchItemInfo* OutEquipInfo);
		void GatherAssets(TArray<struct FSoftObjectPath>* OutAssets);
		void InpActEvt_MissionIntel_K2Node_InputActionEvent_1(const struct FKey& Key);
		void OnLoadAssetsComplete();
		void OnBeingEquipped();
		void EnableWidget();
		void DisableWidget();
		void OnBeingUnequipped();
		void UseOffHandPressed();
		void UseOffHandReleased();
		void OnAddedToInventoryEvent();
		void OnRemovedFromInventoryEvent();
		void ExecuteUbergraph_BP_Tablet(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
