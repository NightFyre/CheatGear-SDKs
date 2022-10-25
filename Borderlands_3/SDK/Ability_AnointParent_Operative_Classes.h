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
	 * BlueprintGeneratedClass Ability_AnointParent_Operative.Ability_AnointParent_Operative_C
	 * Size -> 0x0057 (FullSize[0x0218] - InheritedSize[0x01C1])
	 */
	class UAbility_AnointParent_Operative_C : public UAbility_AnointParent_C
	{
	public:
		unsigned char                                              UnknownData_2QY7[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01C8(0x0008) Transient, DuplicateTransient
		class UBPEventHub_Operative_C*                             OperativeEventHub;                                       // 0x01D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_AnointParent_Operative; // 0x01D8(0x0028)
		bool                                                       BarrierStarted;                                          // 0x0200(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       BarrierEnded;                                            // 0x0201(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CloneStarted;                                            // 0x0202(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CloneEnded;                                              // 0x0203(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SNTRYStarted;                                            // 0x0204(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SNTRYEnded;                                              // 0x0205(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CloneSwappedPlaces;                                      // 0x0206(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CannonActivated;                                         // 0x0207(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AnointActiveWhileSkillActive;                            // 0x0208(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RY4Y[0x7];                                   // 0x0209(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABPChar_Operative_C*                                 OperativeCharacter;                                      // 0x0210(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnointOperativeIsActionAbilityActive(class UClass* ActionSkill, bool* res);
		void AnointOperativeActionSkillEnd(EOperativeGadgets ActionSkill);
		void AnointOperativeActionSkillStart(EOperativeGadgets ActionSkill);
		void AnointCloneSwappedPlaces();
		void AnointCannonActivated(bool* res);
		void AnointSNTRYEnded(bool* res);
		void AnointSNTRYStarted(bool* res);
		void AnointCloneEnded(bool* res);
		void AnointCloneStarted(bool* res);
		void AnointBarrierEnded(bool* res);
		void AnointBarrierStart(bool* res);
		void OnActivated();
		void BindOperativeEvents();
		void ExecuteUbergraph_Ability_AnointParent_Operative(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
