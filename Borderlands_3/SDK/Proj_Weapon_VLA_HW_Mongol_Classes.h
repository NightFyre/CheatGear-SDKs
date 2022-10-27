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
	 * BlueprintGeneratedClass Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C
	 * Size -> 0x0016 (FullSize[0x07A0] - InheritedSize[0x078A])
	 */
	class AProj_Weapon_VLA_HW_Mongol_C : public AProj_Weapon_BaseProjectile_C
	{
	public:
		unsigned char                                              UnknownData_OYC7[0x6];                                   // 0x078A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0790(0x0008) Transient, DuplicateTransient
		class UParticleSystemComponent*                            TracerTrailFX;                                           // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ContinueFiring();
		void FireVolley();
		void ExecuteUbergraph_Proj_Weapon_VLA_HW_Mongol(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
