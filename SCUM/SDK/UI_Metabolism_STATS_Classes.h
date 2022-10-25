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
	 * WidgetBlueprintGeneratedClass UI_Metabolism_STATS.UI_Metabolism_STATS_C
	 * Size -> 0x0008 (FullSize[0x02D8] - InheritedSize[0x02D0])
	 */
	class UUI_Metabolism_STATS_C : public UMetabolismStatsPanel
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		class UWidget* GetIntProgressToolTip();
		class UWidget* GetDexProgressToolTip();
		class UWidget* GetConProgressToolTip();
		class UWidget* GetStrProgressToolTip();
		void ExecuteUbergraph_UI_Metabolism_STATS(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
