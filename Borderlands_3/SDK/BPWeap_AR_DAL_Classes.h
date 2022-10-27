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
	 * BlueprintGeneratedClass BPWeap_AR_DAL.BPWeap_AR_DAL_C
	 * Size -> 0x0008 (FullSize[0x09E0] - InheritedSize[0x09D8])
	 */
	class ABPWeap_AR_DAL_C : public ABPWeap_DAL_BaseWeapon_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09D8(0x0008) Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void ShowChainFeed();
		void Notify_ReloadEnded(bool bCompleted);
		void HideChain();
		void ExecuteUbergraph_BPWeap_AR_DAL(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
