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
	 * BlueprintGeneratedClass BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C
	 * Size -> 0x0009 (FullSize[0x0151] - InheritedSize[0x0148])
	 */
	class UBP_CE_DigiClone_PanicButton_C : public UOakAction_CoordinatedEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0148(0x0008) Transient, DuplicateTransient
		bool                                                       bCanSimulateRelease;                                     // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetAssociatedPlayer(class AActor* Actor, class AActor** res);
		void ShouldSimulateRelease(class AActor* Actor, bool* res);
		void OnServerBegin(class AActor* Actor);
		void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void OnBegin(class AActor* Actor);
		void OnShouldSimulateEnd();
		void ExecuteUbergraph_BP_CE_DigiClone_PanicButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
