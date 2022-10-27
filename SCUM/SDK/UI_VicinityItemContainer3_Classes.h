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
	 * WidgetBlueprintGeneratedClass UI_VicinityItemContainer3.UI_VicinityItemContainer3_C
	 * Size -> 0x0008 (FullSize[0x02C8] - InheritedSize[0x02C0])
	 */
	class UUI_VicinityItemContainer3_C : public UVicinityContainer3
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Construct();
		void ExecuteUbergraph_UI_VicinityItemContainer3(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
