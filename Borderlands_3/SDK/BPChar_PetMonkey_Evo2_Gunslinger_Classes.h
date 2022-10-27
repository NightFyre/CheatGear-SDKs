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
	 * BlueprintGeneratedClass BPChar_PetMonkey_Evo2_Gunslinger.BPChar_PetMonkey_Evo2_Gunslinger_C
	 * Size -> 0x0016 (FullSize[0x2638] - InheritedSize[0x2622])
	 */
	class ABPChar_PetMonkey_Evo2_Gunslinger_C : public ABPChar_PetMonkey_C
	{
	public:
		unsigned char                                              UnknownData_GFPR[0x6];                                   // 0x2622(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2628(0x0008) Transient, DuplicateTransient
		class UGbxChildActorComponent*                             GbxChildActor_Launcher;                                  // 0x2630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void OnAnimEnd_D784EC3D42D3956B70F01FACFD3F075D();
		void OnEnd_D784EC3D42D3956B70F01FACFD3F075D(EGbxActionEndState EndState, class AActor* Actor);
		void OnAnimEnd_292D015A43F1D3D26922399926AD5DD0();
		void OnEnd_292D015A43F1D3D26922399926AD5DD0(EGbxActionEndState EndState, class AActor* Actor);
		void PetJabbermon_FireRocket();
		void PetJabbermon_ChangeLauncherVis(bool NewVisibility);
		void ExecuteUbergraph_BPChar_PetMonkey_Evo2_Gunslinger(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
