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
	 * BlueprintGeneratedClass BPWeaponFireProjectile_MAL_SM_Tsunami.BPWeaponFireProjectile_MAL_SM_Tsunami_C
	 * Size -> 0x0009 (FullSize[0x0961] - InheritedSize[0x0958])
	 */
	class UBPWeaponFireProjectile_MAL_SM_Tsunami_C : public UWeaponFireProjectileComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0958(0x0008) Transient, DuplicateTransient
		bool                                                       bNormalShot;                                             // 0x0960(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void K2_OnActivated();
		void EvaluateShot();
		void ExecuteUbergraph_BPWeaponFireProjectile_MAL_SM_Tsunami(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
