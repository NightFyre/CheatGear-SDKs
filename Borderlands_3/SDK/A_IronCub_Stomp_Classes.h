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
	 * BlueprintGeneratedClass A_IronCub_Stomp.A_IronCub_Stomp_C
	 * Size -> 0x000C (FullSize[0x0224] - InheritedSize[0x0218])
	 */
	class UA_IronCub_Stomp_C : public UA_IronBear_Stomp_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0218(0x0008) Transient, DuplicateTransient
		float                                                      ImpactDamageOverride;                                    // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AN_StompDamage();
		void AN_StompKnockback();
		void ExecuteUbergraph_A_IronCub_Stomp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
