#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * BlueprintGeneratedClass sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C
	 * Size -> 0x0030 (FullSize[0x0400] - InheritedSize[0x03D0])
	 */
	class Asot_frontend_01_a_start_terrain_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       IsPlaying;                                               // 0x03D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZMJA[0x7];                                   // 0x03D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AMatineeActor*                                       BakedOpenSeqCam_ExecuteUbergraph_sot_frontend_01_a_start_terrain_RefProperty; // 0x03E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class ABP_Audio_Play_Wwise_Event_Function_C*               BP_Audio_Play_Wwise_Event_Function_C_2_ExecuteUbergraph_sot_frontend_01_a_start_terrain_RefProperty; // 0x03E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class ACameraActor*                                        IntroCam_ExecuteUbergraph_sot_frontend_01_a_start_terrain_RefProperty; // 0x03F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class ABP_Audio_Play_Wwise_Event_Function_C*               BP_Audio_Play_Wwise_Event_Function_C_2_UniqueObjectNameForCooking_993562282_RefProperty; // 0x03F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void LeaveMapTableAnimation();
		void GetFrontendCamera(class UFrontendCameraComponent** CameraComponent);
		void K2Node_MatineeController_10_MatineeSequenceFinished();
		void K2Node_MatineeController_10_Finished();
		void PlayIntroMatinee();
		void EnteredEngageState();
		void SetMatineePlaybackRate(float PlaybackRate);
		void ReceiveBeginPlay();
		void ExitIntroMatinee();
		void ExecuteUbergraph_sot_frontend_01_a_start_terrain(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
