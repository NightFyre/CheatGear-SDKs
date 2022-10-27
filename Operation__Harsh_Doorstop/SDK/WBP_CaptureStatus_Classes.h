#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * WidgetBlueprintGeneratedClass WBP_CaptureStatus.WBP_CaptureStatus_C
	 * Size -> 0x0090 (FullSize[0x02F8] - InheritedSize[0x0268])
	 */
	class UWBP_CaptureStatus_C : public UHDUIUWCaptureStatus
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0268(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    DisplayCaptureUIAnim;                                    // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UProgressBar*                                        ControlPointProgressBar;                                 // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ControlPointText;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      GarrisonedUnitHBox;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TeamOwnerText;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLinearColor                                        LocalOwnershipColorToUse;                                // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PreviewNumFriendlies;                                    // 0x02A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PreviewNumEnemies;                                       // 0x02AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PreviewMinNumRequiredToCapture;                          // 0x02B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bFriendlyUnitsRightToLeft;                               // 0x02B4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bEnemyUnitsRightToLeft;                                  // 0x02B5(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseFriendlyOwnershipColor;                              // 0x02B6(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9XTL[0x1];                                   // 0x02B7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             UnitPadding;                                             // 0x02B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FriendlyOwnershipColor;                                  // 0x02C8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        NeutralOwnershipColor;                                   // 0x02D8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        EnemyOwnershipColor;                                     // 0x02E8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateActiveUnits(bool bFriendly, int32_t UnitCount, int32_t MinUnitsRequired);
		void SetMinCountToCapture(int32_t MinCount);
		void ResizeGarrisonContainer(int32_t NewUnitIconCount);
		void UpdateTeamOwnerText(EHDTeam CaptureTeam);
		void UpdateProgressBarColor(EHDTeam OwningTeam);
		void OwnerTouchingControlPoint(class AHDBaseCapturePoint* OverlappingCP, bool bInitial);
		void OwnerNoControlPoint();
		void OnInitialized();
		void ControlPointSetCaptureProgress(bool bContested, float NewValueNorm, float OldValueNorm, bool bInitial);
		void ControlPointSetOwnershipState(bool bCaptured, EHDTeam NewOwningTeam, EHDTeam OldOwningTeam, bool bInitial);
		void ControlPointSetGarrisonedPlayerCount(int32_t NumFriendlies, int32_t NumEnemies, int32_t MinNumRequiredForCapture, bool bInitial);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_CaptureStatus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
