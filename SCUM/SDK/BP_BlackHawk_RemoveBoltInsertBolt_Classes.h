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
	 * BlueprintGeneratedClass BP_BlackHawk_RemoveBoltInsertBolt.BP_BlackHawk_RemoveBoltInsertBolt_C
	 * Size -> 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])
	 */
	class UBP_BlackHawk_RemoveBoltInsertBolt_C : public UInsertCartridge
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		bool CanExecuteUsingData(const struct FWeaponReloadData& Data);
		void OnActionAnimNotify(ECharacterActionNotifyType notifyType);
		void ExecuteUbergraph_BP_BlackHawk_RemoveBoltInsertBolt(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
