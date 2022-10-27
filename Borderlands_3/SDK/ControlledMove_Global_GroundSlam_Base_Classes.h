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
	 * BlueprintGeneratedClass ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C
	 * Size -> 0x0020 (FullSize[0x08C8] - InheritedSize[0x08A8])
	 */
	class UControlledMove_Global_GroundSlam_Base_C : public UOakControlledMove
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x08A8(0x0008) Transient, DuplicateTransient
		class APlayerController*                                   PlayerController;                                        // 0x08B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             StartLocation;                                           // 0x08B8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HighGroundSlamThreshold;                                 // 0x08C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DoMelee();
		void GroundSlam_End(float Distance);
		void OnStart(float MoveDuration, class AActor* TargetActor);
		void OnStop(bool bInterrupted);
		void ExecuteUbergraph_ControlledMove_Global_GroundSlam_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
