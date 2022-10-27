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
	 * BlueprintGeneratedClass PlayerAbility_Sprint.PlayerAbility_Sprint_C
	 * Size -> 0x0008 (FullSize[0x0138] - InheritedSize[0x0130])
	 */
	class UPlayerAbility_Sprint_C : public UOakCharacterInputAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0130(0x0008) Transient, DuplicateTransient

	public:
		void IsSprintToggle(bool* res);
		void GbxInpActEvt_InputAction_Discrete_Sprint_K2Node_GbxInputActionEvent_Discrete_4(class UGbxInputActionData_Discrete* Action);
		void GbxInpActEvt_InputAction_Discrete_Sprint_K2Node_GbxInputActionEvent_Discrete_3(class UGbxInputActionData_Discrete* Action);
		void ExecuteUbergraph_PlayerAbility_Sprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
