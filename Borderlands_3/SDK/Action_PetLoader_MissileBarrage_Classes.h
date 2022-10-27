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
	 * BlueprintGeneratedClass Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C
	 * Size -> 0x00B0 (FullSize[0x02D8] - InheritedSize[0x0228])
	 */
	class UAction_PetLoader_MissileBarrage_C : public UA_Pet_AttackCommand_Parent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) Transient, DuplicateTransient
		class FName                                                SpawnSocket;                                             // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableValueHandle                               Damage;                                                  // 0x0238(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class AOakCharacter*                                       Pet;                                                     // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              PetTarget;                                               // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRuntimeFloatCurve                                  AngleCurve;                                              // 0x0260(0x0078) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void AN_FireLeftShot();
		void AN_FireRightShot();
		void OnServerBegin(class AActor* Actor);
		void ExecuteUbergraph_Action_PetLoader_MissileBarrage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
