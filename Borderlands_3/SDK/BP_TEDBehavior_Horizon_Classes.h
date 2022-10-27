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
	 * BlueprintGeneratedClass BP_TEDBehavior_Horizon.BP_TEDBehavior_Horizon_C
	 * Size -> 0x000C (FullSize[0x0084] - InheritedSize[0x0078])
	 */
	class UBP_TEDBehavior_Horizon_C : public UTedioreBehavior_TargetCombo
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0078(0x0008) Transient, DuplicateTransient
		float                                                      Singularity;                                             // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void K2_OnComboTargetTriggered(class ATedioreProjectile* Projectile);
		void K2_ComboTargetTriggeredEvent(class ATedioreProjectile* Projectile);
		void ExecuteUbergraph_BP_TEDBehavior_Horizon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
