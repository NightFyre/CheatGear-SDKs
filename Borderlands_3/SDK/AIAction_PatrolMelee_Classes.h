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
	 * AIActionBlueprintGeneratedClass AIAction_PatrolMelee.AIAction_PatrolMelee_C
	 * Size -> 0x0020 (FullSize[0x0190] - InheritedSize[0x0170])
	 */
	class UAIAction_PatrolMelee_C : public UAIAction_Priority
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0170(0x0008) Transient, DuplicateTransient
		class UClass*                                              FidgetAction;                                            // 0x0178(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxBlackboardKeySelector                           FidgetActionKey;                                         // 0x0180(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void BndEvt__OnInitializeInstanceEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Patrol(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
		void ExecuteUbergraph_AIAction_PatrolMelee(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
