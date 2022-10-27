﻿#pragma once

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
	 * BlueprintGeneratedClass A_Wiggle_Invalid.A_Wiggle_Invalid_C
	 * Size -> 0x000F (FullSize[0x01B8] - InheritedSize[0x01A9])
	 */
	class UA_Wiggle_Invalid_C : public U00_ActionParent_C
	{
	public:
		unsigned char                                              UnknownData_OBLJ[0x7];                                   // 0x01A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		bool checkProceduralPrecondition(class ARaidGOAPController* P);
		void StartAction();
		void CleanupAction(class ARaidGOAPController* P);
		void MoveInfo(const struct FVector& atLocation, EMoveRequest Branches);
		void LookWiggle();
		void FinishAction();
		void LookTowardsTarget();
		void ExecuteUbergraph_A_Wiggle_Invalid(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
