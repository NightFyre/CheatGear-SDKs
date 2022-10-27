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
	 * BlueprintGeneratedClass BP_CE_OperativeCannon_Digistruct_In.BP_CE_OperativeCannon_Digistruct_In_C
	 * Size -> 0x0008 (FullSize[0x0150] - InheritedSize[0x0148])
	 */
	class UBP_CE_OperativeCannon_Digistruct_In_C : public UOakAction_CoordinatedEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0148(0x0008) Transient, DuplicateTransient

	public:
		void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void ExecuteUbergraph_BP_CE_OperativeCannon_Digistruct_In(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
