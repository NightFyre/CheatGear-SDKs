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
	 * BlueprintGeneratedClass A_PetSpiderant_DigLoot.A_PetSpiderant_DigLoot_C
	 * Size -> 0x0010 (FullSize[0x0228] - InheritedSize[0x0218])
	 */
	class UA_PetSpiderant_DigLoot_C : public UOakAction_Anim
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0218(0x0008) Transient, DuplicateTransient
		class AActor*                                              Actor;                                                   // 0x0220(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Notify_Loot();
		void OnBegin(class AActor* Actor);
		void ExecuteUbergraph_A_PetSpiderant_DigLoot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
