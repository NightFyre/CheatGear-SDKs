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
	 * BlueprintGeneratedClass TEDProjectile_TenGallon.TEDProjectile_TenGallon_C
	 * Size -> 0x0018 (FullSize[0x0850] - InheritedSize[0x0838])
	 */
	class ATEDProjectile_TenGallon_C : public ATedioreProjectile
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0838(0x0008) Transient, DuplicateTransient
		class ABPWeap_SM_TED_C*                                    BPWeap;                                                  // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LoadedAmmo;                                              // 0x0848(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ImpactDelay;                                             // 0x084C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RemoveAmmo();
		void UserConstructionScript();
		void GbxAsyncRequest_Spawned_FEAE3B894C826C7A82741594B3C3BAB6(class AActor* Actor, int32_t InstanceIndex);
		void ReceiveBeginPlay();
		void OnExplode();
		void ExecuteUbergraph_TEDProjectile_TenGallon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
