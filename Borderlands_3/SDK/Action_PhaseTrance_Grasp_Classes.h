﻿#pragma once

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
	 * BlueprintGeneratedClass Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C
	 * Size -> 0x0008 (FullSize[0x0390] - InheritedSize[0x0388])
	 */
	class UAction_PhaseTrance_Grasp_C : public UAction_PhaseTrance_Grasp_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0388(0x0008) Transient, DuplicateTransient

	public:
		void DoDamageToImmuneTarget(class AActor* Enemey);
		void AnimNotify_CreateGraspingSphere();
		void HandleGraspTargetFound(class AOakCharacter* GraspTarget);
		void ExecuteUbergraph_Action_PhaseTrance_Grasp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
