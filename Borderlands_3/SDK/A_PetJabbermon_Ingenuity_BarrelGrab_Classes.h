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
	 * BlueprintGeneratedClass A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C
	 * Size -> 0x0010 (FullSize[0x0248] - InheritedSize[0x0238])
	 */
	class UA_PetJabbermon_Ingenuity_BarrelGrab_C : public UOakAction_RandomAnim
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) Transient, DuplicateTransient
		class AActor*                                              Barrel;                                                  // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Notify_Barrel_Attach();
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void Notify_Barrel_Align();
		void OnServerBegin(class AActor* Actor);
		void ExecuteUbergraph_A_PetJabbermon_Ingenuity_BarrelGrab(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
