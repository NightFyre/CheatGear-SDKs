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
	 * BlueprintGeneratedClass PlayerAbility_Use.PlayerAbility_Use_C
	 * Size -> 0x0008 (FullSize[0x0138] - InheritedSize[0x0130])
	 */
	class UPlayerAbility_Use_C : public UOakCharacterInputAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0130(0x0008) Transient, DuplicateTransient

	public:
		void StopGiveUpInner();
		void StartGiveUpInner();
		void GetFFYLComponent(class UFightForYourLifeComponent** res);
		void FlushLatentUses();
		void GetUseComponent(class UUseComponent** res);
		void StopUseInner(EUsabilityType Type);
		void StartUseInner(EUsabilityType Type);
		void GbxInpActEvt_InputAction_Discrete_UseAlt_K2Node_GbxInputActionEvent_Discrete_14(class UGbxInputActionData_Discrete* Action);
		void GbxInpActEvt_InputAction_Discrete_UseAlt_K2Node_GbxInputActionEvent_Discrete_13(class UGbxInputActionData_Discrete* Action);
		void GbxInpActEvt_InputAction_Discrete_GiveUp_K2Node_GbxInputActionEvent_Discrete_12(class UGbxInputActionData_Discrete* Action);
		void GbxInpActEvt_InputAction_Discrete_GiveUp_K2Node_GbxInputActionEvent_Discrete_11(class UGbxInputActionData_Discrete* Action);
		void GbxInpActEvt_InputAction_Discrete_Use_K2Node_GbxInputActionEvent_Discrete_10(class UGbxInputActionData_Discrete* Action);
		void GbxInpActEvt_InputAction_Discrete_Use_K2Node_GbxInputActionEvent_Discrete_9(class UGbxInputActionData_Discrete* Action);
		void GbxInpActEvt_InputAction_Discrete_ExitSeat_K2Node_GbxInputActionEvent_Discrete_8(class UGbxInputActionData_Discrete* Action);
		void OnPaused();
		void ExecuteUbergraph_PlayerAbility_Use(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
