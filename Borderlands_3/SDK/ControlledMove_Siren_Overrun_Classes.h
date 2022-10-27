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
	 * BlueprintGeneratedClass ControlledMove_Siren_Overrun.ControlledMove_Siren_Overrun_C
	 * Size -> 0x0009 (FullSize[0x08C9] - InheritedSize[0x08C0])
	 */
	class UControlledMove_Siren_Overrun_C : public UOakControlledMove_Player
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x08C0(0x0008) Transient, DuplicateTransient
		bool                                                       HitTargetable;                                           // 0x08C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnHitTargetable(class AActor* HitActor, const struct FVector& HitNormal);
		void OnServerStop(bool bInterrupted);
		void OnStop(bool bInterrupted);
		void ExecuteUbergraph_ControlledMove_Siren_Overrun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
