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
	 * BlueprintGeneratedClass TEDProjectile_Earthbound.TEDProjectile_Earthbound_C
	 * Size -> 0x0014 (FullSize[0x08E0] - InheritedSize[0x08CC])
	 */
	class ATEDProjectile_Earthbound_C : public ATEDProjectile_Base_C
	{
	public:
		unsigned char                                              UnknownData_CS3H[0x4];                                   // 0x08CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x08D0(0x0008) Transient, DuplicateTransient
		class ABPWeap_SM_TED_C*                                    BPWeap;                                                  // 0x08D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void GbxAsyncRequest_Spawned_61EB909044413242335576A9096A5F33(class AActor* Actor, int32_t InstanceIndex);
		void ReceiveBeginPlay();
		void OnExplode();
		void ExecuteUbergraph_TEDProjectile_Earthbound(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
