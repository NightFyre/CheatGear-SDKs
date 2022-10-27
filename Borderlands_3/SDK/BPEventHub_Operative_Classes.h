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
	 * BlueprintGeneratedClass BPEventHub_Operative.BPEventHub_Operative_C
	 * Size -> 0x0070 (FullSize[0x0110] - InheritedSize[0x00A0])
	 */
	class UBPEventHub_Operative_C : public UOakPlayerAbilityEventHub_Operative
	{
	public:
		class FScriptMulticastDelegate                             OnSeeingRedActivated;                                    // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             SkillEvent_OperativeActionSkillActivated;                // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             SkillEvent_OperativeGadgetModActivated;                  // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             SkillEvent_OperativeActionSkillEnded;                    // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             SkillEvent_OperativeSwappedPlaces;                       // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             SkillEvent_OperativeUsedBarrier;                         // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             SkillEvent_OperativeSetDroneManualTarget;                // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SkillEvent_OperativeSetDroneManualTarget__DelegateSignature(class AActor* NewTarget);
		void SkillEvent_OperativeUsedBarrier__DelegateSignature(bool PickedUp);
		void SkillEvent_OperativeSwappedPlaces__DelegateSignature();
		void SkillEvent_OperativeActionSkillEnded__DelegateSignature(EOperativeGadgets ActionSkill);
		void SkillEvent_OperativeGadgetModActivated__DelegateSignature(EOperativeGadgetAugments ActionSkillMod);
		void SkillEvent_OperativeActionSkillActivated__DelegateSignature(EOperativeGadgets ActionSkill);
		void OnSeeingRedActivated__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
