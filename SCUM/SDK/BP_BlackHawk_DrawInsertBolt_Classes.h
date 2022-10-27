#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * BlueprintGeneratedClass BP_BlackHawk_DrawInsertBolt.BP_BlackHawk_DrawInsertBolt_C
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UBP_BlackHawk_DrawInsertBolt_C : public UInsertCartridge
	{
	public:
		bool CanExecuteUsingData(const struct FWeaponReloadData& Data);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
