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
	 * BlueprintGeneratedClass Action_Melee_Operative_BarrierBash_Success.Action_Melee_Operative_BarrierBash_Success_C
	 * Size -> 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
	 */
	class UAction_Melee_Operative_BarrierBash_Success_C : public UAction_Melee_Operative_Success_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) Transient, DuplicateTransient

	public:
		void TurnOffOperativeBlades();
		void TurnOnOperativeBlades();
		void ExecuteUbergraph_Action_Melee_Operative_BarrierBash_Success(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
