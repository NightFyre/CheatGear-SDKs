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
	 * BlueprintGeneratedClass A_Pet_Taunt.A_Pet_Taunt_C
	 * Size -> 0x0008 (FullSize[0x0220] - InheritedSize[0x0218])
	 */
	class UA_Pet_Taunt_C : public UOakAction_Anim
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0218(0x0008) Transient, DuplicateTransient

	public:
		void Notify_Taunt();
		void ExecuteUbergraph_A_Pet_Taunt(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
