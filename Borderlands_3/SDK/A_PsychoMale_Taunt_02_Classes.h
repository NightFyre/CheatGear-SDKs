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
	 * BlueprintGeneratedClass A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C
	 * Size -> 0x0008 (FullSize[0x0250] - InheritedSize[0x0248])
	 */
	class UA_PsychoMale_Taunt_02_C : public UGBXAction_EnemyVariableParent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) Transient, DuplicateTransient

	public:
		void GbxAsyncRequest_Hit_2240004D48A27591019A10BDDF41A7FB(const struct FHitResult& Result);
		void OnBegin(class AActor* Actor);
		void MeleeStrike();
		void ExecuteUbergraph_A_PsychoMale_Taunt_02(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
