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
	 * BlueprintGeneratedClass IronBearAbility_Eject.IronBearAbility_Eject_C
	 * Size -> 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
	 */
	class UIronBearAbility_Eject_C : public UOakCharacterInputAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0130(0x0008) Transient, DuplicateTransient
		class AOakCharacter_IronBear*                              IronBear;                                                // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void QuickSelectWeapon(class UInventorySlotData* InvSlot, class UWeaponSlotData* WeaponSlot);
		void GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_4(class UGbxInputActionData_Discrete* Action);
		void GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_3(class UGbxInputActionData_Discrete* Action);
		void OnActivated();
		void ExecuteUbergraph_IronBearAbility_Eject(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
