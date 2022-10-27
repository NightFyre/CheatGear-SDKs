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
	 * BlueprintGeneratedClass Action_Siren_DoUntoOthers.Action_Siren_DoUntoOthers_C
	 * Size -> 0x003C (FullSize[0x0274] - InheritedSize[0x0238])
	 */
	class UAction_Siren_DoUntoOthers_C : public UActionParent_Siren_SkillArms_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) Transient, DuplicateTransient
		class AActor*                                              HomingTarget;                                            // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Grade;                                                   // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_81T6[0x4];                                   // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableValueHandle                               Damage_Per_Rank;                                         // 0x0250(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UOakActionAbilityAugmentData_PhaseTrance_Element*    AttunedElement;                                          // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DoUntoOther_Radius;                                      // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AN_FireProjectile();
		void ExecuteUbergraph_Action_Siren_DoUntoOthers(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
