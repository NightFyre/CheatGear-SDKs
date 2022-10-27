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
	 * BlueprintGeneratedClass BP_BlackHawk_Unload.BP_BlackHawk_Unload_C
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	class UBP_BlackHawk_Unload_C : public URemoveCartridge
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0058(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnActionAnimNotify(ECharacterActionNotifyType notifyType);
		void ExecuteUbergraph_BP_BlackHawk_Unload(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
