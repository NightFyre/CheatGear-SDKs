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
	 * BlueprintGeneratedClass ControlledMove_Beastmaster_Antigrav.ControlledMove_Beastmaster_Antigrav_C
	 * Size -> 0x000C (FullSize[0x0AF0] - InheritedSize[0x0AE4])
	 */
	class UControlledMove_Beastmaster_Antigrav_C : public UControlledMove_Maya_PhaseLock_C
	{
	public:
		unsigned char                                              UnknownData_6GIB[0x4];                                   // 0x0AE4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AE8(0x0008) Transient, DuplicateTransient

	public:
		void OnServerStart(float MoveDuration, class AActor* TargetActor, class AActor* Instigator);
		void SpawnLoot();
		void ExecuteUbergraph_ControlledMove_Beastmaster_Antigrav(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
