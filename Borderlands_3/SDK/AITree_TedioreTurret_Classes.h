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
	 * BlueprintGeneratedClass AITree_TedioreTurret.AITree_TedioreTurret_C
	 * Size -> 0x0010 (FullSize[0x0180] - InheritedSize[0x0170])
	 */
	class UAITree_TedioreTurret_C : public UAIAction_AITree
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0170(0x0008) Transient, DuplicateTransient
		class UWwiseEvent*                                         Audio_TargetFound;                                       // 0x0178(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BndEvt__Priority_Shoot_or_Walk.BlackboardKey_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TedioreTurret(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
		void BndEvt__Priority_Shoot_or_Walk_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TedioreTurret(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
		void BndEvt__LeapDirect_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TedioreTurret(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
		void ExecuteUbergraph_AITree_TedioreTurret(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
