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
	 * BlueprintGeneratedClass Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C
	 * Size -> 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
	 */
	class UAction_Gunner_SpawnIronCub_C : public UOakAction_Anim_ActionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) Transient, DuplicateTransient

	public:
		void AN_SpawnIronCub();
		void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void AN_EnableDevice();
		void AN_DisableDevice();
		void OnBegin(class AActor* Actor);
		void AN_EnableHologram();
		void AN_DisableHologram();
		void ExecuteUbergraph_Action_Gunner_SpawnIronCub(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
