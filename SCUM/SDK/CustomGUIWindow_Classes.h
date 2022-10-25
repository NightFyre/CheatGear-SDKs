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
	 * WidgetBlueprintGeneratedClass CustomGUIWindow.CustomGUIWindow_C
	 * Size -> 0x0020 (FullSize[0x0298] - InheritedSize[0x0278])
	 */
	class UCustomGUIWindow_C : public UDesignableUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FText                                                _title;                                                  // 0x0280(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetTitle(class FText* Title);
		void SetTitle(const class FText& titleToSet);
		void AlarmOnWindowContent();
		void AlarmOffWindowContent();
		void ExecuteUbergraph_CustomGUIWindow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
