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
	 * BlueprintGeneratedClass AIAction_Patrol.AIAction_Patrol_C
	 * Size -> 0x0038 (FullSize[0x01A8] - InheritedSize[0x0170])
	 */
	class UAIAction_Patrol_C : public UAIAction_Priority
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0170(0x0008) Transient, DuplicateTransient
		class UClass*                                              FidgetAction;                                            // 0x0178(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxBlackboardKeySelector                           FidgetActionKey;                                         // 0x0180(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UClass*                                              AngryPatrolAction;                                       // 0x0190(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxBlackboardKeySelector                           AngryPatrolKey;                                          // 0x0198(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void BndEvt__OnInitializeInstanceEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Patrol(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
		void ExecuteUbergraph_AIAction_Patrol(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
