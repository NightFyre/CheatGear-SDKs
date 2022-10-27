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
	 * BlueprintGeneratedClass Dodge_Ape_Bullet_IdleR.Dodge_Ape_Bullet_IdleR_C
	 * Size -> 0x0008 (FullSize[0x0220] - InheritedSize[0x0218])
	 */
	class UDodge_Ape_Bullet_IdleR_C : public UOakAction_Anim
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0218(0x0008) Transient, DuplicateTransient

	public:
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void ExecuteUbergraph_Dodge_Ape_Bullet_IdleR(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
