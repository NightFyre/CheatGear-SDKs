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
	 * BlueprintGeneratedClass Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C
	 * Size -> 0x0038 (FullSize[0x01E8] - InheritedSize[0x01B0])
	 */
	class UPassive_Gunner_Tenacious_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		bool                                                       bShieldsRefilled;                                        // 0x01B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CKI5[0x7];                                   // 0x01B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAbilityResourceController_ResourcePoolDelegate  RsrcCntrlr_GbxAbilityResourceController_ResourcePoolDelegate_Passive_Gunner_Tenacious; // 0x01C0(0x0028)

	public:
		void OnActivated();
		void ShieldDepleted_TencaiousDefense(const struct FGameResourcePoolReference& ResourcePool);
		void OnDeactivated();
		void OnFilled_TencaciousDefense(const struct FGameResourcePoolReference& ResourcePool);
		void SetTriggerStateByShieldAmount();
		void ExecuteUbergraph_Passive_Gunner_Tenacious(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
