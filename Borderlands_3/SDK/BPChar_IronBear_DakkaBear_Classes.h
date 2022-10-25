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
	 * BlueprintGeneratedClass BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C
	 * Size -> 0x0040 (FullSize[0x2728] - InheritedSize[0x26E8])
	 */
	class ABPChar_IronBear_DakkaBear_C : public ABPChar_IronBear_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x26E8(0x0008) Transient, DuplicateTransient
		class APawn*                                               GunnersNextActor;                                        // 0x26F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStatusEffectInstanceReference                      IronBearDakkaInstance;                                   // 0x26F8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference
		struct FStatusEffectInstanceReference                      GunnerDakkaInstance;                                     // 0x2710(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference

	public:
		void BootGunnersNestOccupant(bool InputPin, float* Delay);
		void KickPlayerOutOfGunnersNest(bool zKilled, float* Delay);
		void UserConstructionScript();
		void OnRep_GunnersNestOccupied();
		void OnAttachStateChanged_GunnersNest();
		void StartGunnersNestBonus();
		void StopGunnersNextBonus();
		void CalculateAutoBearDuration();
		void ExecuteUbergraph_BPChar_IronBear_DakkaBear(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
