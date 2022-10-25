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
	 * BlueprintGeneratedClass Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C
	 * Size -> 0x000F (FullSize[0x02C8] - InheritedSize[0x02B9])
	 */
	class UAction_Phasetrance_Slam_Fracture_C : public UAction_Phasetrance_Common_C
	{
	public:
		unsigned char                                              UnknownData_2OTM[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) Transient, DuplicateTransient

	public:
		void AN_CreateCastProjectile();
		void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void OnBeginBringUpWeapon(class AActor* Actor);
		void AN_PerformSlamFractureRumble();
		void AN_PerformSlamFractureCS_Start();
		void AN_PerformSlamFractureCS_Quake();
		void AN_PerformSlamFractureFB_Server();
		void ExecuteUbergraph_Action_Phasetrance_Slam_Fracture(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
