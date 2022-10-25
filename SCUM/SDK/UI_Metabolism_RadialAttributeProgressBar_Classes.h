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
	 * WidgetBlueprintGeneratedClass UI_Metabolism_RadialAttributeProgressBar.UI_Metabolism_RadialAttributeProgressBar_C
	 * Size -> 0x0008 (FullSize[0x03C8] - InheritedSize[0x03C0])
	 */
	class UUI_Metabolism_RadialAttributeProgressBar_C : public UMetabolismRadialAttributeProgressBar
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ExecuteUbergraph_UI_Metabolism_RadialAttributeProgressBar(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
