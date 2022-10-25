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
	 * DynamicClass BP_FuncLibrary_Widget.BP_FuncLibrary_Widget_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_FuncLibrary_Widget_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetVerticleBoxNavigation(class UVerticalBox* bpp__VerticalBox__pf, class UObject* bpp____WorldContext__pf);
		void STATIC_SetVerticalPanelNavigation(class UPanelWidget* bpp__VerticalPanel__pf, class UObject* bpp____WorldContext__pf);
		void STATIC_ScrollWithRightStick(const struct FAnalogInputEvent& bpp__AnalogInputEvent__pf, class UScrollBox* bpp__Scrollbox__pf, float bpp__ScrollSpeed__pf, class UObject* bpp____WorldContext__pf, struct FEventReply* bpp__Reply__pf);
		void STATIC_GetVisibleChildrenCount(class UPanelWidget* bpp__Target__pf, class UObject* bpp____WorldContext__pf, int32_t* bpp__Count__pf);
		void STATIC_GetFirstFocusableChild(class UPanelWidget* bpp__Target__pf, bool bpp__Reversed__pf, class UObject* bpp____WorldContext__pf, class UWidget** bpp__Child__pf);
		void STATIC_GetFirstFocusableAndVisibleChild(class UPanelWidget* bpp__Target__pf, bool bpp__Reversed__pf, class UObject* bpp____WorldContext__pf, class UWidget** bpp__Child__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
