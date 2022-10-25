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
	 * BlueprintGeneratedClass ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C
	 * Size -> 0x0010 (FullSize[0x01B8] - InheritedSize[0x01A8])
	 */
	class UANav_PetLoader_DropDown_C : public UGbxAction_NavAnim
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01A8(0x0008) Transient, DuplicateTransient
		class AActor*                                              MySelf;                                                  // 0x01B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void OnBegin(class AActor* Actor);
		void Loader_JumpEnd();
		void Loader_JumpStart();
		void ExecuteUbergraph_ANav_PetLoader_DropDown(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
