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
	 * BlueprintGeneratedClass BP_CE_Cartel_TeleportIn_Parent.BP_CE_Cartel_TeleportIn_Parent_C
	 * Size -> 0x0018 (FullSize[0x0160] - InheritedSize[0x0148])
	 */
	class UBP_CE_Cartel_TeleportIn_Parent_C : public UOakAction_CoordinatedEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0148(0x0008) Transient, DuplicateTransient
		int32_t                                                    LootPoolTypeByTag;                                       // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LTFJ[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CurrentCE;                                               // 0x0158(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDeath_CartelThugCE(class AActor* DamageReceiver, class AActor* DamageCauser);
		void OnServerBegin(class AActor* Actor);
		void ExecuteUbergraph_BP_CE_Cartel_TeleportIn_Parent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
