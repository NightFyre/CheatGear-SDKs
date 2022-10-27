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
	 * WidgetBlueprintGeneratedClass UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C
	 * Size -> 0x0004 (FullSize[0x027C] - InheritedSize[0x0278])
	 */
	class UUI_GameEventTeamHeaderWidget_C : public UGameEventTeamHeaderWidget
	{
	public:
		int32_t                                                    TeamIndex;                                               // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetTeamIndex(int32_t TeamIndex);
		void SetTeamScore(float Score);
		void SetRightSide();
		void SetLeftSide();
		void SetTeamColours(const struct FGameEventTeamColours& colours);
		void SetTeamName(const class FText& Name);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
