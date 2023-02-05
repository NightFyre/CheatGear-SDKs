#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * BlueprintGeneratedClass BP_PlayerLobbyCapture_Right.BP_PlayerLobbyCapture_Right_C
	 * Size -> 0x0020 (FullSize[0x0800] - InheritedSize[0x07E0])
	 */
	class ABP_PlayerLobbyCapture_Right_C : public ADCCharacterLobbyCapture
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDCPerkDataComponent*                                DCPerkData;                                              // 0x07E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMetaStorageComponent*                               MetaStorageComponent;                                    // 0x07F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UEquipmentInventoryComponent*                        EquipmentInventoryComponent;                             // 0x07F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void OnItemEquipped(class UAnimationAsset* ItemStandIdle, const struct FGameplayTag& ItemHandType, const struct FGameplayTag& ItemSlotType);
		void OnVisibleCharacterRenderRight(bool IsHidden);
		void ExecuteUbergraph_BP_PlayerLobbyCapture_Right(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
