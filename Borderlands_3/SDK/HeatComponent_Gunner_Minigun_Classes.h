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
	 * BlueprintGeneratedClass HeatComponent_Gunner_Minigun.HeatComponent_Gunner_Minigun_C
	 * Size -> 0x0018 (FullSize[0x0250] - InheritedSize[0x0238])
	 */
	class UHeatComponent_Gunner_Minigun_C : public UWeaponHeatComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) Transient, DuplicateTransient
		class AWeapon_Hardpoint_Minigun_C*                         Minigun;                                                 // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         OverHeatAudioEvent;                                      // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void OnStopOverheat();
		void OnStartOverheat();
		void ExecuteUbergraph_HeatComponent_Gunner_Minigun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
