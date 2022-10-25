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
	 * BlueprintGeneratedClass Action_Operative_PanicButton.Action_Operative_PanicButton_C
	 * Size -> 0x0030 (FullSize[0x02B0] - InheritedSize[0x0280])
	 */
	class UAction_Operative_PanicButton_C : public UAction_Operative_Digiclone_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) Transient, DuplicateTransient
		struct FTimerHandle                                        DetonateTimerHandle;                                     // 0x0288(0x0008) Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor
		struct FDataTableValueHandle                               PanicTimeHandle;                                         // 0x0290(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UGbxAction*                                          CoordinatedEffectRef;                                    // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnServerBegin(class AActor* Actor);
		void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void StopButtonPress();
		void DetonateClone();
		void StopDigicloneFX();
		void OnBegin(class AActor* Actor);
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void ExecuteUbergraph_Action_Operative_PanicButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
