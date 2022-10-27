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
	 * BlueprintGeneratedClass Proj_Drone_VDayHeart_Ghost.Proj_Drone_VDayHeart_Ghost_C
	 * Size -> 0x0023 (FullSize[0x07E4] - InheritedSize[0x07C1])
	 */
	class AProj_Drone_VDayHeart_Ghost_C : public AProj_Drone_VDayHeart_Parent_C
	{
	public:
		unsigned char                                              UnknownData_G68A[0x7];                                   // 0x07C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07C8(0x0008) Transient, DuplicateTransient
		class UParticleSystemComponent*                            PS_V_Heart_Ooze;                                         // 0x07D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RandFloat;                                               // 0x07D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Enum_HauntedSpawnType                                      HauntedSpawnType;                                        // 0x07DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KPD3[0x3];                                   // 0x07DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    nMaxGhosties;                                            // 0x07E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReturnGhostSpawnTransform(bool SpawnSide, struct FTransform* SpawnTransform);
		void UserConstructionScript();
		void BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Fire(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser);
		void ExecuteUbergraph_Proj_Drone_VDayHeart_Ghost(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
