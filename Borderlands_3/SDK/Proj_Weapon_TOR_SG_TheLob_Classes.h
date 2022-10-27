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
	 * BlueprintGeneratedClass Proj_Weapon_TOR_SG_TheLob.Proj_Weapon_TOR_SG_TheLob_C
	 * Size -> 0x002A (FullSize[0x07B4] - InheritedSize[0x078A])
	 */
	class AProj_Weapon_TOR_SG_TheLob_C : public AProj_Weapon_BaseProjectile_C
	{
	public:
		unsigned char                                              UnknownData_JSAE[0x6];                                   // 0x078A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0790(0x0008) Transient, DuplicateTransient
		class UParticleSystemComponent*                            TracerTrailFX;                                           // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      AttachedTargets;                                         // 0x07A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      Dot_DamageScale;                                         // 0x07B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveDestroyed();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Proj_Weapon_TOR_SG_TheLob(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
