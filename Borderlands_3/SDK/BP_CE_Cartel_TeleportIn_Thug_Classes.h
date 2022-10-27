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
	 * BlueprintGeneratedClass BP_CE_Cartel_TeleportIn_Thug.BP_CE_Cartel_TeleportIn_Thug_C
	 * Size -> 0x0028 (FullSize[0x0188] - InheritedSize[0x0160])
	 */
	class UBP_CE_Cartel_TeleportIn_Thug_C : public UBP_CE_Cartel_TeleportIn_Parent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0160(0x0008) Transient, DuplicateTransient
		struct FGameplayTagContainer                               DesiredTags_Badass;                                      // 0x0168(0x0020) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void OnServerBegin(class AActor* Actor);
		void ExecuteUbergraph_BP_CE_Cartel_TeleportIn_Thug(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
