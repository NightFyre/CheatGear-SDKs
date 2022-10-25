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
	 * BlueprintGeneratedClass ANav_PetLoader_Jump.ANav_PetLoader_Jump_C
	 * Size -> 0x0010 (FullSize[0x02F8] - InheritedSize[0x02E8])
	 */
	class UANav_PetLoader_Jump_C : public UGbxAction_NavJump
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) Transient, DuplicateTransient
		class AActor*                                              MySelf;                                                  // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void OnBegin(class AActor* Actor);
		void Loader_JumpEnd();
		void Loader_JumpStart();
		void ExecuteUbergraph_ANav_PetLoader_Jump(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
