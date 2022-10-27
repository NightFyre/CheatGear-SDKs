#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * BlueprintGeneratedClass Ship_FastFrigate01_Pawn_Ai_Child.Ship_FastFrigate01_Pawn_Ai_Child_C
	 * Size -> 0x0024 (FullSize[0x0EEC] - InheritedSize[0x0EC8])
	 */
	class AShip_FastFrigate01_Pawn_Ai_Child_C : public AShip_FastFrigate01_Pawn_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0EC8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<struct FVector>                                     Path;                                                    // 0x0ED0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class ASplineNav_C*                                        CurrentSplineNav;                                        // 0x0EE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PathIndex;                                               // 0x0EE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnMoveFinished_ADC20B3C4BE69DED40CBB3B9DF357C69(EPathFollowingResult Result, class AAIController* AIController);
		void OnRequestFailed_ADC20B3C4BE69DED40CBB3B9DF357C69();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Ship_FastFrigate01_Pawn_Ai_Child(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
