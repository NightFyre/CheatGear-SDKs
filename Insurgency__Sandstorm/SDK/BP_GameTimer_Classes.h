#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * WidgetBlueprintGeneratedClass BP_GameTimer.BP_GameTimer_C
	 * Size -> 0x00D0 (FullSize[0x0300] - InheritedSize[0x0230])
	 */
	class UBP_GameTimer_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    OvertimePulse;                                           // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    StartoverTimeAnimation;                                  // 0x0240(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          Colon;                                                   // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Left;                                                    // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             OvertimeBorder;                                          // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Right;                                                   // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateColor                                         ColorActive;                                             // 0x0268(0x0028) Edit, BlueprintVisible
		struct FSlateColor                                         ColorFaded;                                              // 0x0290(0x0028) Edit, BlueprintVisible
		float                                                      SecondsRemaining;                                        // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0JGZ[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                LeftText;                                                // 0x02C0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                RightText;                                               // 0x02D8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		ESlateVisibility                                           Visible;                                                 // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasStartedOvertime;                                      // 0x02F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QDJR[0x2];                                   // 0x02F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LastRoundedSeconds;                                      // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LastMilliseconds;                                        // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimationSpeed;                                          // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void On_Round_Over(const struct FPlayerRoundOverData& UIData);
		void GetFormattedNumberForTimer(int32_t Number, class FText* Output);
		void SetTimerText(float NewTime);
		void UpdateTimer();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void ExecuteUbergraph_BP_GameTimer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
