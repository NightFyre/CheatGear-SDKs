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
	 * BlueprintGeneratedClass FindAttackPoint.FindAttackPoint_C
	 * Size -> 0x0015 (FullSize[0x01BD] - InheritedSize[0x01A8])
	 */
	class UFindAttackPoint_C : public UGOAPAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FVector                                             PointMovingToward;                                       // 0x01B0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LookingForPoint;                                         // 0x01BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool checkProceduralPrecondition(class ARaidGOAPController* P);
		void StartAction();
		void MoveInfo(const struct FVector& atLocation, EMoveRequest Branches);
		void ExecuteUbergraph_FindAttackPoint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
