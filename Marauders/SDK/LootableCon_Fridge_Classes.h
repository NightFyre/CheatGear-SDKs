#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * BlueprintGeneratedClass LootableCon_Fridge.LootableCon_Fridge_C
	 * Size -> 0x000C (FullSize[0x04D0] - InheritedSize[0x04C4])
	 */
	class ALootableCon_Fridge_C : public ASIGIS_BaseLootableContainer_C
	{
	public:
		unsigned char                                              UnknownData_QVKL[0x4];                                   // 0x04C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ActiveCalled();
		void DeActiveCalled();
		void ExecuteUbergraph_LootableCon_Fridge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
