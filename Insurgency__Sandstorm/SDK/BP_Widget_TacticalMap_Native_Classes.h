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
	 * WidgetBlueprintGeneratedClass BP_Widget_TacticalMap_Native.BP_Widget_TacticalMap_Native_C
	 * Size -> 0x0058 (FullSize[0x0460] - InheritedSize[0x0408])
	 */
	class UBP_Widget_TacticalMap_Native_C : public UTacticalMapWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0408(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_KeyActionIcon_C*                                 GamepadHint;                                             // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      GridColumns;                                             // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USaberInvalidationBox*                               GridInvalidationBox;                                     // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        GridRows;                                                // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HintContainerBox;                                        // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionIcon_C*                                 MouseHint;                                               // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bShowGrid;                                               // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bScoreboardMap;                                          // 0x0441(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6XDO[0x6];                                   // 0x0442(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTacticalMapPawnHoverStatusChanged;                     // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      TickDelay;                                               // 0x0458(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TickThreshold;                                           // 0x045C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
		void UpdateGridZoomAndOffset();
		void UpdateActiveHoverForPawn(class AINSPlayerState* Player, bool bShouldHover);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void OnObjectiveWidgetCreated(class AObjectiveBase* Objective, class UUserWidget* Widget);
		void OnScoreboardShown(bool bShown);
		void OnHoverStatusChanged(class AINSPlayerState* Player, bool Hovered);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_BP_Widget_TacticalMap_Native(int32_t EntryPoint);
		void OnTacticalMapPawnHoverStatusChanged__DelegateSignature(class AINSPlayerState* Player, bool Status);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
