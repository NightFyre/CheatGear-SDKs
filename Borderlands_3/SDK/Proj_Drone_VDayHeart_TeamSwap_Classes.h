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
	 * BlueprintGeneratedClass Proj_Drone_VDayHeart_TeamSwap.Proj_Drone_VDayHeart_TeamSwap_C
	 * Size -> 0x0017 (FullSize[0x07D8] - InheritedSize[0x07C1])
	 */
	class AProj_Drone_VDayHeart_TeamSwap_C : public AProj_Drone_VDayHeart_Parent_C
	{
	public:
		unsigned char                                              UnknownData_IO0G[0x7];                                   // 0x07C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07C8(0x0008) Transient, DuplicateTransient
		class UParticleSystemComponent*                            PS_V_Heart_Frilly;                                       // 0x07D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Fire(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser);
		void ExecuteUbergraph_Proj_Drone_VDayHeart_TeamSwap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
