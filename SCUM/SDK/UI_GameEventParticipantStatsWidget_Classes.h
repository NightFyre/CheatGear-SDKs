#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * WidgetBlueprintGeneratedClass UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C
	 * Size -> 0x007C (FullSize[0x0314] - InheritedSize[0x0298])
	 */
	class UUI_GameEventParticipantStatsWidget_C : public UGameEventParticipantStatsWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FLinearColor                                        TextColor;                                               // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    _lastTeamIndex;                                          // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameEventTeamColours                               TeamColours;                                             // 0x02B4(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void UpdateTeamColor(int32_t TeamIndex);
		class FText UpdateNumber();
		bool IsOwning();
		ESlateVisibility GetSelectedOverlayVisiblity();
		ESlateVisibility GetInactiveOverlayVisibility();
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void UpdateColours();
		void SetColours(const struct FGameEventTeamColours& colours);
		void UpdateStats();
		void ExecuteUbergraph_UI_GameEventParticipantStatsWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
