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
	 * BlueprintGeneratedClass BPWeapFireProjComponent_Fbolt.BPWeapFireProjComponent_Fbolt_C
	 * Size -> 0x000C (FullSize[0x0964] - InheritedSize[0x0958])
	 */
	class UBPWeapFireProjComponent_Fbolt_C : public UWeaponFireProjectileComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0958(0x0008) Transient, DuplicateTransient
		float                                                      SecondaryProjDmg_Scalar;                                 // 0x0960(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void EvaluateShot();
		void ExecuteUbergraph_BPWeapFireProjComponent_Fbolt(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
